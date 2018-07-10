#include "MainWindow.hpp"
#include "util/IconsLoader.hpp"
#include "Models/Message.hpp"
#include <iostream>
#include <glibmm/ustring.h>
#include <glibmm/date.h>
#include <vector>
#include <gtkmm/messagedialog.h>
#include <ctime>

const int MainWindow::WIN_PADDING = 10;

MainWindow::MainWindow(Glib::ustring title):
sendAndControlsBox(Gtk::ORIENTATION_HORIZONTAL)
{
	int min_width = WIN_PADDING*2+RecipientsPane::minWidth+MsgControlsPane::minWidth;

	set_title(title);
	set_size_request(min_width, -1);
	set_border_width(WIN_PADDING);

	add(topLevelPane);

	topLevelPane.add1(recipientsPane);
	topLevelPane.add2(msgControlsPane);
	topLevelPane.set_position(RecipientsPane::minWidth);
	topLevelPane.signal_button_release_event().connect(sigc::mem_fun(*this,
		 &MainWindow::on_release_odd_event));

	msgControlsPane.pack_start(sendAndControlsBox, Gtk::PACK_SHRINK);

	sendAndControlsBox.pack_start(sendButton, Gtk::PACK_EXPAND_PADDING);
	sendButton.set_halign(Gtk::ALIGN_END);

	auto img = Gtk::manage(new Gtk::Image()); //TODO is that correct? Will it manage?..
	img->set(IconsLoader::getIcon(IconsLoader::IconName::SEND));
	sendButton.set_image(*img);

	sendAndControlsBox.show_all();
	topLevelPane.show();
	recipientsPane.show();
	msgControlsPane.show();

	/*Self event signals*/
	signal_configure_event().connect(sigc::mem_fun(*this,
		 &MainWindow::on_configure_event));

	sendButton.signal_clicked().connect(sigc::mem_fun(*this,
		 &MainWindow::sendMessage));
}

MainWindow::~MainWindow()
{
}

bool MainWindow::on_release_odd_event(GdkEventButton* release_event){
	/*Check paned slider overslide*/
	if(release_event->button == 1){//Left mouse
		fix_pane_state();
	}

	return false; //We do not stop other elemnts from checking event
}


bool MainWindow::on_configure_event(GdkEventConfigure* configure_event){
	//For some reason, creating additional method did not work...
	Gtk::Widget::on_configure_event(configure_event);

	if(configure_event->width != get_width()){
		fix_pane_state(configure_event->width);
	}

	return false; //We do not stop other elemnts from checking event
}

void MainWindow::fix_pane_state(int new_width){
	if(new_width == -1){
		new_width = get_width();
	}

	if(topLevelPane.get_position() < RecipientsPane::minWidth){
		topLevelPane.set_position(RecipientsPane::minWidth);
	}
	if(topLevelPane.get_position() > (new_width - WIN_PADDING*2) - MsgControlsPane::minWidth){
		topLevelPane.set_position((new_width - WIN_PADDING*2) - MsgControlsPane::minWidth);
	}
}

void MainWindow::sendMessage(){
	std::vector<Glib::ustring> recipients = recipientsPane.getRecipients();

	if(recipients.size() == 0){
		Gtk::MessageDialog dialog(*this, "Can't  send");
		dialog.set_secondary_text(
				"Sorry, I can't send message to <<Noone>>!");

		dialog.run();
		return;
	}


	Glib::ustring text = msgControlsPane.getNewMsgText();

	if(text == ""){
		Gtk::MessageDialog dialog(*this, "Can't  send");
		dialog.set_secondary_text(
				"Sorry, I can't send empty message!");

		dialog.run();
		return;
	}

	time_t t = time(NULL);
	tm* timePtr = localtime(&t);

	auto date = Glib::Date(timePtr->tm_mday,
		Glib::Date::Month(1+timePtr->tm_mon), 1900+timePtr->tm_year);

	Message msg = Message(Message::Priority::REGULAR, recipients, text, date);

	showMessageWindow.reset(new ShowMessage(msg));
	showMessageWindow->show_all();

	msgControlsPane.addNewMsg(msg);
}
