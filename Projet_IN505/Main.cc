#include <gtkmm/main.h>
#include <gtkmm/window.h>
#include "Fenetre.hh"
#include "VarGlobal.hh"



int main(int argc, char *argv[])
{
	Gtk::Main app(argc, argv);
	Fenetre f;

	Gtk::Main::run(f);
	return 0;
}