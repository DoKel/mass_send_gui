#ifndef CUSTOM_TREE_VIEW
#define CUSTOM_TREE_VIEW

#include <gtkmm/treeview.h>
#include <gtkmm/liststore.h>
#include <gtkmm/treestore.h> // TODO

template <class Model>
class CustomTreeView : public Gtk::TreeView{
public:
	CustomTreeView();
	virtual ~CustomTreeView();
protected:
	Model columns;
	Glib::RefPtr<Gtk::TreeStore> refTreeModel;

	virtual void loadData() = 0;
	virtual void setupColumnsView() = 0;
};

template <class Model>
CustomTreeView<Model> :: CustomTreeView()
{
	refTreeModel = Gtk::TreeStore::create(columns);
	set_model(refTreeModel);
}

template <class Model>
CustomTreeView<Model>::~CustomTreeView()
{
}


#endif //CUSTOM_TREE_VIEW
