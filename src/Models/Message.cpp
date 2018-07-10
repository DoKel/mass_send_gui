#include "Message.hpp"

Message::Message():
priority(Message::Priority::REGULAR),
recipients(std::vector<Glib::ustring>()),
text(""),
date(Glib::Date(1, Glib::Date::Month(1), 1970))
{

}

Message::Message(Priority _priority, std::vector<Glib::ustring> _recipients,
	 Glib::ustring _text, Glib::Date _date):
priority(_priority),
recipients(_recipients),
text(_text),
date(_date)
{

}

Message::~Message(){

}
