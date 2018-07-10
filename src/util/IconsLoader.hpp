#ifndef ICONS_LOADER_H
#define ICONS_LOADER_H

#include<glibmm/refptr.h>
#include<glibmm/ustring.h>
#include<gdkmm/pixbuf.h>
#include<map>

//Can't use "using", cuz IconName is not yet declared
#define IconStorage std::map<IconsLoader::IconName, Glib::RefPtr<Gdk::Pixbuf>>

class IconsLoader{
public:
	enum IconName{
		SEND, PERSON, CHECK_ALL, IMPORTANT, INFO, REVERSE, REGULAR, SETTINGS, TELEGRAM, VK
	};

	static void init();

	static Glib::RefPtr<Gdk::Pixbuf> getIcon(IconName name);
private:
	static Glib::RefPtr<Gdk::Pixbuf> loadIcon(Glib::ustring path);

	static IconStorage icons;
	static int size;
};

#endif
