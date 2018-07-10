#include "MsgControlsPane.hpp"
#include <gtkmm/image.h>
#include <gdkmm/pixbuf.h>

const int MsgControlsPane::SPACING = 10;
const int MsgControlsPane::NEW_MSG_MODS_SPACING = 10;

const Glib::ustring MsgControlsPane::lastMsgTitle = "<big>You already sent following msgs</big>";
const Glib::ustring MsgControlsPane::newMsgTitle = "<big>Type new message here</big>";

const Glib::ustring MsgControlsPane::newMsgTextPlaceholder = "This is just a placeholder here... ;)";

const int MsgControlsPane::minWidth = 400;
const int MsgControlsPane::leftRightMargin = 20;
const int MsgControlsPane::minScrolledHeight = 300;
const int MsgControlsPane::minTextViewHeight = 150;

MsgControlsPane::MsgControlsPane():
Gtk::Box(Gtk::ORIENTATION_VERTICAL, MsgControlsPane::SPACING)
{
	auto minElementWidth = minWidth - leftRightMargin*2;

	set_margin_left(leftRightMargin);
	set_margin_right(leftRightMargin);

	pack_start(lastMsgTitleLabel, Gtk::PACK_SHRINK);
	lastMsgTitleLabel.set_halign(Gtk::ALIGN_CENTER);
	lastMsgTitleLabel.set_markup(lastMsgTitle);

	pack_start(scrolledWindow, Gtk::PACK_EXPAND_WIDGET);
	scrolledWindow.set_min_content_width(minElementWidth);
	scrolledWindow.set_min_content_height(minScrolledHeight);
	scrolledWindow.add(lastMsgs);
	scrolledWindow.set_policy(Gtk::POLICY_NEVER, Gtk::POLICY_AUTOMATIC);

	pack_start(newMsgTitleLabel, Gtk::PACK_SHRINK);
	newMsgTitleLabel.set_halign(Gtk::ALIGN_CENTER);
	newMsgTitleLabel.set_markup(newMsgTitle);

	pack_start(newMsgText, Gtk::PACK_EXPAND_WIDGET);
	newMsgText.set_size_request(minElementWidth, minTextViewHeight);
	auto buf = newMsgText.get_buffer();
	buf->set_text(newMsgTextPlaceholder);
	newMsgText.signal_focus_in_event().connect(sigc::mem_fun(*this,
		&MsgControlsPane::onNewMsgTextFocus));
	newMsgText.signal_focus_out_event().connect(sigc::mem_fun(*this,
			&MsgControlsPane::onNewMsgTextFocusLoss));

	/* Connect Pane's signals*/
	this->signal_show().connect(sigc::mem_fun(*this,
		&MsgControlsPane::on_this_show));
	this->signal_hide().connect(sigc::mem_fun(*this,
		&MsgControlsPane::on_this_hide));
}

MsgControlsPane::~MsgControlsPane(){

}

void MsgControlsPane::on_this_show(){
	scrolledWindow.show_all();
	lastMsgTitleLabel.show();
	newMsgTitleLabel.show();
	newMsgText.show();
}

void MsgControlsPane::on_this_hide(){
	lastMsgs.hide();
}


bool MsgControlsPane::onNewMsgTextFocus(GdkEventFocus* focus_event){ //TODO move to custom TextView

	auto buf = newMsgText.get_buffer();
	auto str = buf->get_text(buf->begin(), buf->end(), true);
	if(str == newMsgTextPlaceholder){
		buf->set_text("");
	}

	return false;
}


bool MsgControlsPane::onNewMsgTextFocusLoss(GdkEventFocus* focus_event){ //TODO move to custom TextView

	auto buf = newMsgText.get_buffer();
	auto str = buf->get_text(buf->begin(), buf->end(), true);
	if(str == ""){
		buf->set_text(newMsgTextPlaceholder);
	}

	return false;
}

Glib::ustring MsgControlsPane::getNewMsgText(){
	auto buf = newMsgText.get_buffer();
	auto str = buf->get_text(buf->begin(), buf->end(), true);

	if(str == newMsgTextPlaceholder){
		return "";
	}

	return str;
}


void MsgControlsPane::addNewMsg(Message msg){
	lastMsgs.addNewMsg(msg);
}
