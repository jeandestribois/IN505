#ifndef FENETRE_H
#define FENETRE_H

class Fenetre : public Gtk::Window
{
private:
	int hauteur;
	int largeur;
public:
	Fenetre();
	~Fenetre();
};

#endif