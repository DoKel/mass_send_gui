#ifndef LAST_MSGS_TREE_VIEW
#define LAST_MSGS_TREE_VIEW

#include "CustomTreeView.hpp"
#include "../Models/Message.hpp"
#include "../Windows/ShowMessage.hpp"

#include <gtkmm/treemodel.h>
#include <gtkmm/treepath.h>
#include <glibmm/ustring.h>
#include <glibmm/date.h>
#include <memory>

class LastMsgsModel : public Gtk::TreeModel::ColumnRecord
{
public:
	LastMsgsModel()
	{
		add(colMsg);
	}

	Gtk::TreeModelColumn<Message> colMsg;
};

class LastMsgsTreeView : public CustomTreeView<LastMsgsModel>{
public:
	LastMsgsTreeView();
	virtual ~LastMsgsTreeView();

	static const int minWidth;

	void addNewMsg(Message msg);
protected:
	void loadData() override;
	void setupColumnsView() override;

	void on_row_activated_event(const Gtk::TreeModel::Path& path, Gtk::TreeViewColumn* column);
	void dateDataFunc(Gtk::CellRenderer* renderer,  const Gtk::TreeModel::iterator& iter);
	void countDataFunc(Gtk::CellRenderer* renderer,  const Gtk::TreeModel::iterator& iter);
	void textDataFunc(Gtk::CellRenderer* renderer,  const Gtk::TreeModel::iterator& iter);
	void iconDataFunc(Gtk::CellRenderer* renderer,  const Gtk::TreeModel::iterator& iter);

	std::unique_ptr<ShowMessage> showMessageWindow;

	static const Glib::ustring DATE_FORMAT; //TODO move to global constants
};


#endif //LAST_MSGS_TREE_VIEW
