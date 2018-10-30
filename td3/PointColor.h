#ifndef POINTCOLOR_H
#define POINTCOLOR_H

#include "../td1/Point.h"

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