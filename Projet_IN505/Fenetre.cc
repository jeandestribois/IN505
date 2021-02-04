#include <iostream>
#include <gtkmm/window.h>
#include <gtkmm/image.h>
#include "VarGlobal.hh"
#include "Fenetre.hh"

Fenetre::Fenetre()
{
	std::cout << FOND_FEN;
	set_title("Bataille en Foret");
	resize(LARGEUR_FEN, HAUTEUR_FEN);
	Gtk::Image fond(FOND_FEN);
	add(fond);
	fond.show();
}

Fenetre::~Fenetre() {}