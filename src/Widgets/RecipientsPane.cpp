#include "RecipientsPane.hpp"
#include "../util/IconsLoader.hpp"

const int RecipientsPane::SPACING = 10;
const int RecipientsPane::DOWN_CONTROLS_SPACING = 10;
const Glib::ustring RecipientsPane::title = "<big>Choose recipients</big>";
const int RecipientsPane::minWidth = 300;
const int RecipientsPane::minScrolledHeight = 300;


RecipientsPane::RecipientsPane():
Gtk::Box(Gtk::ORIENTATION_VERTICAL, RecipientsPane::SPACING),
downControls(Gtk::ORIENTATION_HORIZONTAL, RecipientsPane::DOWN_CONTROLS_SPACING),
checkAllButton(),
reverseButton(),
settingsButton(),
recipientsTreeView(getRecipientsList())
{
	pack_start(titleLabel, Gtk::PACK_SHRINK);
	titleLabel.set_halign(Gtk::ALIGN_CENTER);
	titleLabel.set_markup(title);


	pack_start(scrolledWindow, Gtk::PACK_EXPAND_WIDGET);
	scrolledWindow.set_min_content_width(minWidth);
	scrolledWindow.set_min_content_height(minScrolledHeight);
	scrolledWindow.add(recipientsTreeView);
	scrolledWindow.set_policy(Gtk::POLICY_NEVER, Gtk::POLICY_AUTOMATIC);

	/* Buttons to control selection*/
	pack_start(downControls, Gtk::PACK_SHRINK);
	downControls.pack_start(checkAllButton, Gtk::PACK_SHRINK);
	downControls.pack_start(reverseButton, Gtk::PACK_SHRINK);
	downControls.pack_start(settingsButton, Gtk::PACK_EXPAND_PADDING);
	checkAllButton.set_halign(Gtk::ALIGN_START);

	auto img_ca = Gtk::manage(new Gtk::Image()); //TODO is that correct? Will it manage?..
	img_ca->set(IconsLoader::getIcon(IconsLoader::IconName::CHECK_ALL));
	checkAllButton.set_image(*img_ca);

	auto img_r = Gtk::manage(new Gtk::Image()); //TODO is that correct? Will it manage?..
	img_r->set(IconsLoader::getIcon(IconsLoader::IconName::REVERSE));
	reverseButton.set_image(*img_r);

	auto img_s = Gtk::manage(new Gtk::Image()); //TODO is that correct? Will it manage?..
	img_s->set(IconsLoader::getIcon(IconsLoader::IconName::SETTINGS));
	settingsButton.set_image(*img_s);

	/* Connect signals of buttons for selection control */
	checkAllButton.signal_clicked().connect(sigc::mem_fun(recipientsTreeView,
		&RecipientsTreeView::check_all));
	reverseButton.signal_clicked().connect(sigc::mem_fun(recipientsTreeView,
		&RecipientsTreeView::reverse_selection));


	/* Connect Pane's signals*/
	this->signal_show().connect(sigc::mem_fun(*this,
		&RecipientsPane::on_this_show));
	this->signal_hide().connect(sigc::mem_fun(*this,
		&RecipientsPane::on_this_hide));
}

RecipientsPane::~RecipientsPane(){

}

void RecipientsPane::on_this_show(){
	titleLabel.show();
	scrolledWindow.show_all();
	downControls.show_all();
}

void RecipientsPane::on_this_hide(){
	titleLabel.hide();
	scrolledWindow.hide();
	downControls.hide();
}

std::vector<Glib::ustring> RecipientsPane::getRecipientsList(){ //TODO move outside
	std::vector<Glib::ustring> ret;

	ret.push_back("Alice Alisson");
	ret.push_back("Bob Paulson");
	ret.push_back("Very-vey-very long string that breaks everything?");

	return ret;
}

std::vector<Glib::ustring> RecipientsPane::getRecipients(){
	return recipientsTreeView.getChecked();
}
