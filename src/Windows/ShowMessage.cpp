#include "ShowMessage.hpp"
#include "../util/IconsLoader.hpp"

ShowMessage::ShowMessage(Message _msg):
topBox(Gtk::ORIENTATION_HORIZONTAL, 10),
messageInfoBox(Gtk::ORIENTATION_VERTICAL, 50),
metaBox(Gtk::ORIENTATION_HORIZONTAL, 10),
priorityBox(Gtk::ORIENTATION_HORIZONTAL, 10),
msg(_msg),
textLabel(msg.text),
dateLabel(msg.date.format_string("%D")), // TODO GLOBAL FORMAT
okButton("Ok"),
recipients(msg.recipients, false)
{
	set_title("Message view");
	set_border_width(10); //TODO move to const
	set_size_request(100, -1);

	switch(msg.priority){
		case Message::Priority::IMPORTANT:
			priorityIcon.set(IconsLoader::getIcon(IconsLoader::IconName::IMPORTANT));
			priorityLabel.set_text("Important"); //TODO move to constants?.. Move to enum itself?..
			break;
		case Message::Priority::INFO:
			priorityIcon.set(IconsLoader::getIcon(IconsLoader::IconName::INFO));
			priorityLabel.set_text("Information"); //TODO move to constants?.. Move to enum itself?..
			break;
		case Message::Priority::REGULAR: /*passthrough*/
		default:
			priorityIcon.set(IconsLoader::getIcon(IconsLoader::IconName::REGULAR));
			priorityLabel.set_text("Regular"); //TODO move to constants?.. Move to enum itself?..
			break;
	}

	add(topBox);

	topBox.pack_start(recipients);
	topBox.pack_start(messageInfoBox);

	recipients.set_size_request(200, -1); //TODO const

	messageInfoBox.pack_start(metaBox, Gtk::PACK_SHRINK);
	messageInfoBox.pack_start(textLabel, Gtk::PACK_EXPAND_PADDING);
	messageInfoBox.pack_start(okButton, Gtk::PACK_SHRINK);

	okButton.set_halign(Gtk::ALIGN_CENTER);
	okButton.set_size_request(150, -1); //TODO const


	textLabel.set_line_wrap();
	textLabel.set_line_wrap_mode(Pango::WrapMode::WRAP_WORD_CHAR);
	textLabel.set_max_width_chars(50);//TODO

	metaBox.pack_start(priorityBox, Gtk::PACK_EXPAND_PADDING);
	metaBox.pack_start(dateLabel, Gtk::PACK_EXPAND_PADDING);

	priorityBox.pack_start(priorityIcon, Gtk::PACK_SHRINK);
	priorityBox.pack_start(priorityLabel, Gtk::PACK_SHRINK);

	/*Signals*/
	okButton.signal_clicked().connect(sigc::mem_fun(*this, &ShowMessage::hide));
}

ShowMessage::~ShowMessage(){

}
