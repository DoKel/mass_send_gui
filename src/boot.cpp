#include "MainApplication.hpp"
#include "util/IconsLoader.hpp"

int main(int argc, char *argv[])
{
	/*
		Actual type is Glib::RefPtr<Gtk::Application> -- smart pointer.

		The create() method for this object initializes gtkmm, and checks the arguments
		passed to application on the command line, looking for standard options
	*/
	auto app = MainApplication::create();

	/*Should go AFTER application initialization*/
	IconsLoader::init();

	/*shows the window and enters the gtkmm main processing loop,
	 which will finish when the window is closed*/
	return app->run(argc, argv);
}
