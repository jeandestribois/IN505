using namespace std;
#include <iostream>
#include "Point.h"

Point::Point()
{
	this->x=10;
	this->y=10;
}
Point::Point(int x, int y)
{
	this->x=x;
	this->y=y;
}
Point::Point(const Point &p)
{
	this->x=p.x;
	this->y=p.y;
}
int Point::getX()
{
	return this->x;
}
int Point::getY()
{
	return this->y;
}
void Point::afficher()
{
	cout<<"P.x = "<<this->x<<endl<<"P.y = "<<this->y<<endl;
}
Point Point::cloner(const Point &p)
{
	this->x=p.x;
	this->y=p.y;
}
Point::~Point()
{
	cout<<"Appel au destructeur de Point"<<endl;
}