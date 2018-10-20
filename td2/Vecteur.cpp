using namespace std;
#include <stdlib.h>
#include <iostream>
#include "Vecteur.h"

Vecteur::Vecteur()
{
	this->t=new int[10];
	this->taille=10;
	for(int i=0; i<this->taille; i++) this->t[i]=0;
}

Vecteur::Vecteur(int taille)
{
	this->t=new int[taille];
	this->taille=taille;
	for(int i=0; i<this->taille; i++) this->t[i]=0;
}

Vecteur::Vecteur(const Vecteur &v)
{
	this->t=new int[v.getTaille()];
	this->taille=v.getTaille();
	for(int i=0; i<this->taille; i++) this->t[i]=v.t[i];
}

int Vecteur::getTaille() const
{
	return this->taille;
}

void Vecteur::operator=(const Vecteur &v)
{
	delete[] this->t;
	this->t=new int[v.getTaille()];
	this->taille=v.getTaille();
	for(int i=0; i<this->taille; i++) this->t[i]=v.t[i];
}

int& Vecteur::operator[](int i)
{
	return this->t[i];
}

Vecteur Vecteur::operator+(const Vecteur &v)
{
	if(this->taille > v.taille)
	{
		Vecteur ret(this->taille);
		for(int i=0; i<ret.taille; i++) ret.t[i]=this->t[i]+v.t[i];
		for(int i=ret.taille; i<this->taille; i++) ret.t[i]=this->t[i];
		return ret;
	}
	else
	{
		Vecteur ret(v.taille);
		for(int i=0; i<this->taille; i++) ret.t[i]=this->t[i]+v.t[i];
		for(int i=this->taille; i<v.taille; i++) ret.t[i]=v.t[i];
		return ret;
	}
}

ostream& operator<<(ostream &flux, const Vecteur &v)
{
	for(int i=0; i<v.taille; i++)
	{
		flux<<"v["<<i<<"] = "<<v.t[i]<<endl;
	}
	return flux;
}

Vecteur::~Vecteur()
{
	cout<<"Appel au destructeur de Vecteur"<<endl;
	delete[] this->t;
}