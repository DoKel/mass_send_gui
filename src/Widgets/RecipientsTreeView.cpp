#include "RecipientsTreeView.hpp"
#include <gtkmm/cellrendererpixbuf.h>
#include "../util/IconsLoader.hpp"

RecipientsTreeView::RecipientsTreeView(bool _withSelection):
RecipientsTreeView(std::vector<Glib::ustring>(), _withSelection)
{
}

RecipientsTreeView::RecipientsTreeView(std::vector<Glib::ustring> list, bool _withSelection):
withSelection(_withSelection)
{
	//Fill the TreeView's model
	loadData(list);

	//Add TreeView's view columns
	setupColumnsView();
}

void RecipientsTreeView::loadData(){
	loadData(std::vector<Glib::ustring>());
}

void RecipientsTreeView::loadData(std::vector<Glib::ustring> list){
	Gtk::TreeModel::Row row;
	for(auto name : list){
		row = *(refTreeModel->append());
		row[columns.colName] = name;
		row[columns.colToSend] = false;
		row[columns.colIcon] = IconsLoader::getIcon(IconsLoader::IconName::PERSON);
	}
}

void RecipientsTreeView::setupColumnsView(){
	/*Icons column*/
	int iconColumnId = append_column("", columns.colIcon) - 1;
	get_column(iconColumnId)->set_expand(false);

	/*Name column*/
	auto renderer = Gtk::manage(new Gtk::CellRendererText());
	auto nameColumnId = append_column("Name", *renderer) - 1;
	get_column(nameColumnId)->add_attribute(renderer->property_text(), columns.colName);
	renderer->property_ellipsize_set() = true;
	renderer->property_ellipsize() = Pango::ELLIPSIZE_END;
	renderer->property_max_width_chars() = 10;
	renderer->property_width_chars() = 10;
	get_column(nameColumnId)->set_expand(true);

	if(withSelection){
		/*toSend checkbox*/
		auto toSendColumnId = append_column_editable("", columns.colToSend) - 1;
		get_column(toSendColumnId)->set_expand(false);
	}
}


void RecipientsTreeView::check_all(){
	auto rows = refTreeModel->children();
	for(auto iter = rows.begin(); iter != rows.end(); ++iter)
	{
		auto row = *iter;

		row[columns.colToSend] = true;
	}
}

void RecipientsTreeView::reverse_selection(){
	auto rows = refTreeModel->children();
	for(auto iter = rows.begin(); iter != rows.end(); ++iter)
	{
		auto row = *iter;

		row[columns.colToSend] = !row[columns.colToSend];
	}
}

std::vector<Glib::ustring> RecipientsTreeView::getChecked()
{
	std::vector<Glib::ustring> ret;

	auto rows = refTreeModel->children();
	for(auto iter = rows.begin(); iter != rows.end(); ++iter)
	{
		auto row = *iter;

		if(row[columns.colToSend]){
			ret.push_back(row[columns.colName]);
		}
	}

	return ret;
}

RecipientsTreeView::~RecipientsTreeView(){
}
