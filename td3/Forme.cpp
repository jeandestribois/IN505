#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace  std;
#include "../td1/Point.h"
#include "Forme.h"


/* Classe FORME */
void Forme::afficher() const
{
	cout<<"\nLa FORME a pour centre le point : \np : "<<this->centre<<"\nEt est de couleur "<<this->coul<<endl;
}
void Forme::deplacer(int, int) const
{
	cout<<"\nJe ne sais pas deplacer cette forme"<<endl;
}
Forme::~Forme() {cout<<"Appel au destructeur de Forme"<<endl;}


/* Classe TRIANGLE */
Triangle::Triangle(Point p1, Point p2, Point p3, string coul)
{
	this->p1=p1;
	this->p2=p2;
	this->p3=p3;
	this->coul=coul;
}
void Triangle::afficher() const
{
	cout<<"\nLe TRIANGLE a pour point : \np1 : "<<this->p1<<"\np2 : "<<this->p2<<"\np3 : "<<this->p3<<"\nEt est de couleur "<<this->coul<<endl;
}
void Triangle::deplacer(int dx, int dy) const
{
	cout<<"\nDéplacement de TRIANGLE en x de : "<<dx<<" et en y de : "<<dx<<endl;
}
Triangle::~Triangle() {cout<<"Appel au destructeur de Forme"<<endl;}


/* Classe RECTANGLE */
Rectangle::Rectangle(Point r1, Point r2, string coul)
{
	this->r1=r1;
	this->r2=r2;
	this->coul=coul;
}
void Rectangle::afficher() const
{
	cout<<"\nLe RECTANGLE a pour point : \np1 : "<<this->r1<<"\np2 : "<<this->r2<<"\nEt est de couleur "<<this->coul<<endl;
}
void Rectangle::deplacer(int dx, int dy) const
{
	cout<<"\nDéplacement de RECTANGLE en x de : "<<dx<<" et en y de : "<<dx<<endl;
}
Rectangle::~Rectangle() {cout<<"Appel au destructeur de Forme"<<endl;}


/* Classe CERCLE */
Cercle::Cercle(Point c, string coul)
{
	this->c=c;
	this->coul=coul;
}
void Cercle::afficher() const
{
	cout<<"\nLe CERCLE a pour centre le point : \nc : "<<this->c<<"\nEt est de couleur "<<this->coul<<endl;
}
void Cercle::deplacer(int dx, int dy) const
{
	cout<<"\nDéplacement de CERCLE en x de : "<<dx<<" et en y de : "<<dx<<endl;
}
Cercle::~Cercle() {cout<<"Appel au destructeur de Forme"<<endl;}