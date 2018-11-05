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
int Point::getX() const
{
	return this->x;
}
int Point::getY() const
{
	return this->y;
}
void Point::afficher() const
{
	cout<<"P.x = "<<this->x<<endl<<"P.y = "<<this->y<<endl;
}
void Point::operator=(const Point &p)
{
	this->x=p.getX();
	this->y=p.getY();
}
ostream& operator<<(ostream &flux, const Point &p)
{
	flux<<"x = "<<p.getX()<<" et y = "<<p.getY();
	return flux;
}
Point Point::cloner(const Point &p)
{
	this->x=p.x;
	this->y=p.y;
}
Point::~Point()
{
	//cout<<"Appel au destructeur de Point"<<endl;
}