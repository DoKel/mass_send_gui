#include "MainApplication.hpp"

#include <iostream>//TODO remove

const Glib::ustring MainApplication::application_name = "BotGUI";

MainApplication::MainApplication()
: Gtk::Application("edu.leti.dokel")
{
	Glib::set_application_name(application_name);
}

Glib::RefPtr<MainApplication> MainApplication::create()
{
	return Glib::RefPtr<MainApplication>( new MainApplication() );
}


void MainApplication::create_window()
{
	auto window = new MainWindow(application_name);

	//Make sure that the application runs for as long this window is still open:
	add_window(*window);

	//Delete the window when it is hidden.
	window->signal_hide().connect(sigc::bind(sigc::mem_fun(*this,
		&MainApplication::on_window_hide), window));
	window->signal_send().connect(sigc::mem_fun(*this,
		&MainApplication::sendMessage));

	window->show();
}

void MainApplication::on_window_hide(Gtk::Window* window)
{
	delete window;
}

void MainApplication::on_activate()
{
	//TODO load n check settings here?
	// The application has been started, so let's show a window.
	create_window();
}

void MainApplication::sendMessage(Message msg){
	auto msgJsons = msg.splitAndJsonify();

	for(auto json : msgJsons){
		std::cout << json << "\n"; //TODO use sockets to actually send it	
	}
}
