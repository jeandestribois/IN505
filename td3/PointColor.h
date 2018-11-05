#ifndef POINTCOLOR_H
#define POINTCOLOR_H

#include "Point.h"

class PointColor:public Point
{	
	private:
		string coul;
	public:
		PointColor();
		PointColor(int x, int y, string coul);
		PointColor(const PointColor &p);	

		string getColor() const;
		void afficher() const;

		~PointColor();
};

#endif