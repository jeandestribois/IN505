using namespace std;
#include <iostream>
#include "Point.h"
#include "Segment.h"

Segment::Segment(){}
Segment::Segment(const Point &p1, const Point &p2)
{
	this->p1=p1;
	this->p2=p2;
}
Segment::Segment(const Segment &s)
{
	this->p1=s.p1;
	this->p2=s.p2;
}
void Segment::afficher() const
{
	cout<<"P1: "<<this->p1.getX()<<" "<<this->p1.getY()<<endl<<"P2: "<<this->p2.getX()<<" "<<this->p2.getY()<<endl;
}
Segment::~Segment()
{
	cout<<"Appel au destructeur de Segment"<<endl;
}