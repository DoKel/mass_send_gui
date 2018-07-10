#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <gtkmm/box.h>
#include <gtkmm/button.h>
#include <gtkmm/window.h>
#include <glibmm/ustring.h>
#include <gtkmm/hvpaned.h>
#include "Widgets/RecipientsPane.hpp"
#include "Widgets/MsgControlsPane.hpp"
#include "Windows/ShowMessage.hpp"

class MainWindow : public Gtk::Window
{
public:
	MainWindow(Glib::ustring);
	virtual ~MainWindow();

protected:
	//Signal handlers:
	void on_action_others();
	void on_action_toggle();

	//Child widgets:
	Gtk::HPaned topLevelPane;

	RecipientsPane recipientsPane;
	MsgControlsPane msgControlsPane;

	Gtk::Box sendAndControlsBox;
	Gtk::Button sendButton;

	std::unique_ptr<ShowMessage> showMessageWindow;

	static const int WIN_PADDING;

	bool on_release_odd_event(GdkEventButton*);
	bool on_configure_event(GdkEventConfigure*);

	void sendMessage();

	void fix_pane_state(int new_width = -1);
};

#endif //MAIN_WINDOW_H
