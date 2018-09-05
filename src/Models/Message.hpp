#ifndef MESSAGE_H
#define MESSAGE_H

#include <glibmm/ustring.h>
#include <glibmm/date.h>
#include <vector>
#include <gtkmm/cellrendererpixbuf.h>

class Message{
public:
	enum Priority{
		REGULAR, INFO, IMPORTANT
	};

	class PriorityUtils{
	public:
		static Glib::ustring toString(Priority);
		static Glib::RefPtr<Gdk::Pixbuf> getIcon(Priority);
	};

	Message();
	Message(Priority, std::vector<Glib::ustring>, Glib::ustring, Glib::Date);
	virtual ~Message();


	std::vector<Glib::ustring> splitAndJsonify();

//protected:
	Priority priority;
	Glib::Date date;
	Glib::ustring text;
	std::vector<Glib::ustring> recipients;
};

#endif
