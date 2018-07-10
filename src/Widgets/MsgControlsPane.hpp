#ifndef MSG_CONTROLS_PANE
#define MSG_CONTROLS_PANE

#include "LastMsgsTreeView.hpp"
#include <gtkmm/box.h>
#include <gtkmm/button.h>
#include <gtkmm/scrolledwindow.h>
#include <gtkmm/label.h>
#include <gtkmm/textview.h>
#include <glibmm/ustring.h>
#include "../Windows/ShowMessage.hpp"


class MsgControlsPane: public Gtk::Box
{
public:
	MsgControlsPane();
	virtual ~MsgControlsPane();


	static const int minWidth;

	Glib::ustring getNewMsgText();
	void addNewMsg(Message msg);
protected:
	Gtk::ScrolledWindow scrolledWindow;
	LastMsgsTreeView lastMsgs;
	Gtk::Label lastMsgTitleLabel;
	Gtk::Label newMsgTitleLabel;

	Gtk::TextView newMsgText;

	std::unique_ptr<ShowMessage> showMessageWindow;

	static const int SPACING;
	static const int NEW_MSG_MODS_SPACING;

	static const Glib::ustring lastMsgTitle;
	static const Glib::ustring newMsgTitle;

	static const Glib::ustring newMsgTextPlaceholder;

	static const int minScrolledHeight;
	static const int minTextViewHeight;
	static const int leftRightMargin;

	void on_this_show();
	void on_this_hide();
	bool onNewMsgTextFocus(GdkEventFocus* focus_event);
	bool onNewMsgTextFocusLoss(GdkEventFocus* focus_event);
};

#endif //MSG_CONTROLS_PANE
