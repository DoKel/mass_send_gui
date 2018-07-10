#ifndef RECIPIENTS_TREE_VIEW
#define RECIPIENTS_TREE_VIEW

#include "CustomTreeView.hpp"
#include <glibmm/ustring.h>
#include <glibmm/refptr.h>
#include <gdkmm/pixbuf.h>
#include <vector>

class RecipientsModel : public Gtk::TreeModel::ColumnRecord
{
public:
	RecipientsModel()
	{
		add(colName);
		add(colToSend);
		add(colIcon);
	}
	Gtk::TreeModelColumn<Glib::ustring> colName;
	Gtk::TreeModelColumn<bool> colToSend;
	Gtk::TreeModelColumn<Glib::RefPtr<Gdk::Pixbuf>> colIcon;
};

class RecipientsTreeView : public CustomTreeView<RecipientsModel>{
public:
	RecipientsTreeView(std::vector<Glib::ustring> list, bool _withSelection = true);
	RecipientsTreeView(bool _withSelection = true);
	virtual ~RecipientsTreeView();

	void check_all();
	void reverse_selection();

	std::vector<Glib::ustring> getChecked();
protected:
	bool withSelection;

	void loadData() override;
	void loadData(std::vector<Glib::ustring>);
	void setupColumnsView() override;
};


#endif //RECIPIENTS_TREE_VIEW
