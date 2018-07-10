#ifndef SHOW_MESSAGE_H
#define SHOW_MESSAGE_H

#include "../Models/Message.hpp"
#include "../Widgets/RecipientsTreeView.hpp"
#include <gtkmm/window.h>
#include <gtkmm/label.h>
#include <gtkmm/image.h>
#include <gtkmm/button.h>
#include <gtkmm/box.h>

class ShowMessage: public Gtk::Window{
public:
	ShowMessage(Message);
	virtual ~ShowMessage();

private:
	Message& msg;

	Gtk::Box topBox;
	Gtk::Box messageInfoBox;

	Gtk::Box metaBox;
	Gtk::Label dateLabel;
	Gtk::Box priorityBox;
	Gtk::Label priorityLabel;
	Gtk::Image  priorityIcon;

	Gtk::Label textLabel;

	Gtk::Button okButton;

	RecipientsTreeView recipients;
};

#endif
