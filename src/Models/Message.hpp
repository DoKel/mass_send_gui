#ifndef MESSAGE_H
#define MESSAGE_H

#include <glibmm/ustring.h>
#include <glibmm/date.h>
#include <vector>

class Message{
public:
	enum Priority{
		REGULAR, INFO, IMPORTANT
	};

	Message();
	Message(Priority, std::vector<Glib::ustring>, Glib::ustring, Glib::Date);
	virtual ~Message();

//protected:
	Priority priority;
	Glib::Date date;
	Glib::ustring text;
	std::vector<Glib::ustring> recipients;
};

#endif
