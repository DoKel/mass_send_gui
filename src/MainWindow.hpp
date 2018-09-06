#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <vector>
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
	virtual ~MainWindow();public:

	typedef sigc::signal<void, Message> SendSignalType;
	SendSignalType signal_send();

protected:
	SendSignalType sendSignal;

	//Signal handlers:
	void on_action_others();
	void on_action_toggle();

	//Child widgets:
	Gtk::HPaned topLevelPane;

	RecipientsPane recipientsPane;
	MsgControlsPane msgControlsPane;

	static const int WIN_PADDING;

	bool on_release_odd_event(GdkEventButton*);
	bool on_configure_event(GdkEventConfigure*);

	void on_send_button_clicked(Glib::ustring, Message::Priority);

	void fix_pane_state(int new_width = -1);
};

#endif //MAIN_WINDOW_H
