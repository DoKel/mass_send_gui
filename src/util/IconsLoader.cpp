#include "IconsLoader.hpp"

void IconsLoader::init(){
	IconsLoader::icons.insert(std::make_pair(IconName::PERSON, loadIcon("../res/user.svg")));
	IconsLoader::icons.insert(std::make_pair(IconName::SEND, loadIcon("../res/send.svg")));
	IconsLoader::icons.insert(std::make_pair(IconName::CHECK_ALL, loadIcon("../res/check_all.svg")));
	IconsLoader::icons.insert(std::make_pair(IconName::IMPORTANT, loadIcon("../res/important.svg")));
	IconsLoader::icons.insert(std::make_pair(IconName::INFO, loadIcon("../res/info.svg")));
	IconsLoader::icons.insert(std::make_pair(IconName::REVERSE, loadIcon("../res/reverse.svg")));
	IconsLoader::icons.insert(std::make_pair(IconName::REGULAR, loadIcon("../res/regular.svg")));
	IconsLoader::icons.insert(std::make_pair(IconName::SETTINGS, loadIcon("../res/settings.svg")));
	IconsLoader::icons.insert(std::make_pair(IconName::TELEGRAM, loadIcon("../res/telegram.svg")));
	IconsLoader::icons.insert(std::make_pair(IconName::VK, loadIcon("../res/vk.svg")));
}

Glib::RefPtr<Gdk::Pixbuf> IconsLoader::getIcon(IconName name){
	return IconsLoader::icons.at(name);
}

Glib::RefPtr<Gdk::Pixbuf> IconsLoader::loadIcon(Glib::ustring path){
	return Gdk::Pixbuf::create_from_file(path, size, size);
}

IconStorage IconsLoader::icons = IconStorage();
int IconsLoader::size = 16;
