#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace  std;
#include "Point.h"
#include "PointColor.h"

PointColor::PointColor()
{
	this->x=0;
	this->y=0;
	this->coul="noir";
}

PointColor::PointColor(int x, int y, string coul)
{
	this->x=x;
	this->y=y;
	this->coul=coul;
}

PointColor::PointColor(const PointColor &p)
{
	this->x=p.getX();
	this->y=p.getY();
	this->coul=coul;
}

string PointColor::getColor() const
{
	return this->coul;
}

void PointColor::afficher() const
{
	cout<<"x = "<<this->x<<endl<<"y = "<<this->y<<endl<<"Couleur = "<<this->coul<<endl;
}

PointColor::~PointColor()
{
	//cout<<"Appel au destructeur de PointColor"<<endl;
}