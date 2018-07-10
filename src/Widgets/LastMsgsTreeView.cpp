#include "LastMsgsTreeView.hpp"
#include <sstream>
#include <vector>
#include <gtkmm/cellrendererpixbuf.h>
#include "../util/IconsLoader.hpp"
#include <iostream> //TODO remove

const Glib::ustring LastMsgsTreeView::DATE_FORMAT = "%D";

const int LastMsgsTreeView::minWidth = 200;

LastMsgsTreeView::LastMsgsTreeView()
{
	//Fill the TreeView's model
	loadData();

	//Add TreeView's view columns
	setupColumnsView();

	//Self-bionding
	signal_row_activated().connect(sigc::mem_fun(*this,
		&LastMsgsTreeView::on_row_activated_event));
}


void LastMsgsTreeView::loadData(){
	std::vector<Glib::ustring> vec;
	vec.push_back("ABCDEF1");
	vec.push_back("ABCDEF2");
	vec.push_back("ABCDEF3");
	vec.push_back("ABCDEF4");

	Gtk::TreeModel::Row row = *(refTreeModel->append());
	row[columns.colMsg] = Message(Message::Priority::REGULAR, vec,
		"Ipsum dolor sit amet", Glib::Date(1, Glib::Date::Month(1), 2018));

	row = *(refTreeModel->append());
	row[columns.colMsg] = Message(Message::Priority::INFO, vec,
		"Lazy brown fox jums", Glib::Date(4, Glib::Date::Month(6), 2018));

	row = *(refTreeModel->append());
	row[columns.colMsg] = Message(Message::Priority::IMPORTANT, vec,
		"Съешь ещё этих мягких французских булок, да выпей чаю -- вот это длинная строка",
		Glib::Date(12, Glib::Date::Month(9), 1998));
}

void LastMsgsTreeView::setupColumnsView(){
	/*Icon column*/
	auto view_column = Gtk::manage(new Gtk::TreeViewColumn(""));
	auto iconRenderer = Gtk::manage(new Gtk::CellRendererPixbuf());
	view_column->pack_start(*iconRenderer, false);
	view_column->set_cell_data_func(*iconRenderer,
		sigc::mem_fun(*this, &LastMsgsTreeView::iconDataFunc));
	view_column->set_expand(false);
	append_column(*view_column);

	/*Count column*/
	view_column = Gtk::manage(new Gtk::TreeViewColumn("Count"));
	auto countRenderer = Gtk::manage(new Gtk::CellRendererText());
	view_column->pack_start(*countRenderer, false);
	view_column->set_cell_data_func(*countRenderer,
		sigc::mem_fun(*this, &LastMsgsTreeView::countDataFunc));
	view_column->set_expand(false);
	append_column(*view_column);

	/*Text column*/
	view_column = Gtk::manage(new Gtk::TreeViewColumn("Text"));
	auto textRenderer = Gtk::manage(new Gtk::CellRendererText());
	textRenderer->property_ellipsize() = Pango::ELLIPSIZE_END;
	textRenderer->set_fixed_size(minWidth, -1);
	view_column->pack_start(*textRenderer, false);
	view_column->set_cell_data_func(*textRenderer,
		sigc::mem_fun(*this, &LastMsgsTreeView::textDataFunc));
	view_column->set_expand(true);
	append_column(*view_column);

	/*Date column*/
	view_column = Gtk::manage(new Gtk::TreeViewColumn("Date"));
	auto dateRenderer = Gtk::manage(new Gtk::CellRendererText());
	view_column->pack_start(*dateRenderer, false);
	view_column->set_cell_data_func(*dateRenderer,
		sigc::mem_fun(*this, &LastMsgsTreeView::dateDataFunc));
	view_column->set_expand(false);
	append_column(*view_column);

	//auto dateTextColumnId = append_column("Date", columns.dateText) - 1;
	//get_column(dateTextColumnId)->set_expand(false);
}

LastMsgsTreeView::~LastMsgsTreeView(){
}

void LastMsgsTreeView::on_row_activated_event(const Gtk::TreeModel::Path& path,
	Gtk::TreeViewColumn* column)
{
	auto msg = (refTreeModel->get_iter(path))->get_value(columns.colMsg);
	showMessageWindow.reset(new ShowMessage(msg));

	showMessageWindow->show_all();
}


void LastMsgsTreeView::countDataFunc(Gtk::CellRenderer* renderer,
	const Gtk::TreeModel::iterator& iter)
{
	Gtk::TreeModel::Row row = *iter;
	Gtk::CellRendererText* text_renderer = dynamic_cast<Gtk::CellRendererText*>(renderer);
	if(text_renderer){
		std::ostringstream ssIn;
		ssIn << row.get_value(columns.colMsg).recipients.size();
		Glib::ustring strOut = ssIn.str();

		text_renderer->property_text() = strOut;
	}
}

void LastMsgsTreeView::iconDataFunc(Gtk::CellRenderer* renderer,
	const Gtk::TreeModel::iterator& iter)
{
	Gtk::TreeModel::Row row = *iter;
	Gtk::CellRendererPixbuf* pixbuf_renderer = dynamic_cast<Gtk::CellRendererPixbuf*>(renderer);
	if(pixbuf_renderer){
		auto prior = row.get_value(columns.colMsg).priority;

		switch(prior){
			case Message::Priority::IMPORTANT:
				pixbuf_renderer->property_pixbuf() =
				IconsLoader::getIcon(IconsLoader::IconName::IMPORTANT);
				break;
			case Message::Priority::INFO:
				pixbuf_renderer->property_pixbuf() =
				IconsLoader::getIcon(IconsLoader::IconName::INFO);
				break;
			case Message::Priority::REGULAR: /*passthrough*/
			default:
				pixbuf_renderer->property_pixbuf() =
				IconsLoader::getIcon(IconsLoader::IconName::REGULAR);
				break;
		}
	}
}

void LastMsgsTreeView::textDataFunc(Gtk::CellRenderer* renderer,
	const Gtk::TreeModel::iterator& iter)
{
	Gtk::TreeModel::Row row = *iter;
	Gtk::CellRendererText* text_renderer = dynamic_cast<Gtk::CellRendererText*>(renderer);
	if(text_renderer){
		text_renderer->property_text() = row.get_value(columns.colMsg).text;
	}
}

void LastMsgsTreeView::dateDataFunc(Gtk::CellRenderer* renderer,
	const Gtk::TreeModel::iterator& iter)
{
	Gtk::TreeModel::Row row = *iter;
	Gtk::CellRendererText* text_renderer = dynamic_cast<Gtk::CellRendererText*>(renderer);
	if(text_renderer){
		text_renderer->property_text() = row.get_value(columns.colMsg).date.format_string(DATE_FORMAT);
	}
}

void LastMsgsTreeView::addNewMsg(Message msg){
	Gtk::TreeModel::Row row = *(refTreeModel->append());
	row[columns.colMsg] = msg;
}
