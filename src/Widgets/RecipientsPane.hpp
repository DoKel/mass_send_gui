#ifndef RECIPINETS_PANE
#define RECIPINETS_PANE

#include <gtkmm/box.h>
#include <gtkmm/button.h>
#include <gtkmm/scrolledwindow.h>
#include <gtkmm/label.h>
#include <glibmm/ustring.h>
#include <vector>
#include "RecipientsTreeView.hpp"

class RecipientsPane: public Gtk::Box
{
public:
	RecipientsPane();
	virtual ~RecipientsPane();

	static const int minWidth;

	std::vector<Glib::ustring> getRecipients();
protected:
	Gtk::ScrolledWindow scrolledWindow;
	RecipientsTreeView recipientsTreeView;
	Gtk::Label titleLabel;

	Gtk::Box downControls;
	Gtk::Button checkAllButton;
	Gtk::Button reverseButton;
	Gtk::Button settingsButton;

	static const int SPACING;
	static const int DOWN_CONTROLS_SPACING;

	static const Glib::ustring title;

	static const int minScrolledHeight;

	void on_this_show();
	void on_this_hide();

	std::vector<Glib::ustring> getRecipientsList(); //TODO move outside
};

#endif //RECIPINETS_PANE
