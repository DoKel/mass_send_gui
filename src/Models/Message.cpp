#include "Message.hpp"
#include <sstream>
#include <iostream> //TODO remove
#include "../util/IconsLoader.hpp"

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

std::vector<Glib::ustring> Message::splitAndJsonify(){
	//TODO replace special characters like \n
	std::vector<Glib::ustring> ret;

	std::ostringstream strIn;

	for(auto recipient: recipients){
		strIn = std::ostringstream ("");

		strIn << "{";

		strIn << "\"recipient\": ";
		strIn << "\"" << recipient << "\"";

		strIn << ",";

		strIn << "\"text\": ";
		strIn << "\"" << text << "\"";

		strIn << ",";

		strIn << "\"prirority\": ";
		strIn << "\"" << PriorityUtils::toString(priority) << "\"";

		strIn << "}";
		ret.push_back(strIn.str());
	}

	return ret;
}


Glib::ustring Message::PriorityUtils::toString(Priority prior){
	switch(prior){
		case Message::Priority::IMPORTANT:
			return "Important";
			break;
		case Message::Priority::INFO:
			return "Info";
			break;
		case Message::Priority::REGULAR: /*passthrough*/
		default:
			return "Regular";
			break;
	}
}


Glib::RefPtr<Gdk::Pixbuf> Message::PriorityUtils::getIcon(Priority prior){
	switch(prior){
		case Message::Priority::IMPORTANT:
			return IconsLoader::getIcon(IconsLoader::IconName::IMPORTANT);
			break;
		case Message::Priority::INFO:
			return IconsLoader::getIcon(IconsLoader::IconName::INFO);
			break;
		case Message::Priority::REGULAR: /*passthrough*/
		default:
			return IconsLoader::getIcon(IconsLoader::IconName::REGULAR);
			break;
	}
}

std::vector<Message::Priority> Message::PriorityUtils::getAllPriorities(){
	std::vector<Message::Priority> ret;

	ret.push_back(Message::Priority::REGULAR);
	ret.push_back(Message::Priority::INFO);
	ret.push_back(Message::Priority::IMPORTANT);

	return ret;
}

Message::Priority Message::PriorityUtils::fromString(Glib::ustring str){
	str = str.lowercase();
	std::cout << str;

	if(str == "info"){
		return Message::Priority::INFO;
	}

	if(str == "important"){
		return Message::Priority::IMPORTANT;
	}

	return  Message::Priority::REGULAR;
}
