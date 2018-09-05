#ifndef MAIN_APPLICATION_H
#define MAIN_APPLICATION_H

#include <glibmm.h>
#include <gtkmm/application.h>
#include <glibmm/ustring.h>

#include "MainWindow.hpp"
#include "Models/Message.hpp"


class MainApplication: public Gtk::Application{
protected:
	MainApplication();

public:
	static Glib::RefPtr<MainApplication> create();

protected:
	//Overrides of default signal handlers:
	void on_activate() override;

private:
	/**
		Creates signal and binds some slots to window's signals
	*/
	void create_window();

	void on_window_hide(Gtk::Window* window);

	void sendMessage(Message);

	static const Glib::ustring application_name;
};

#endif //MAIN_APPLICATION_H
