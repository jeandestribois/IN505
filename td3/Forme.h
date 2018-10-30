#ifndef FORME_H
#define FORME_H

#include "../td1/Point.h"

class Forme
{
	protected:
		Point centre;
		string coul;
	public:
		virtual void afficher() const;
		virtual void deplacer(int, int) const;

		virtual ~Forme();
};

class Triangle : public Forme
{
	protected:
		Point p1, p2, p3;
	public:
		Triangle(Point p1, Point p2, Point p3, string coul);

		void afficher() const;
		void deplacer(int dx, int dy) const;

		~Triangle();
};

class Rectangle : public Forme
{
	protected:
		Point r1, r2;
	public:
		Rectangle(Point r1, Point r2, string coul);

	 	void afficher() const;
		void deplacer(int dx, int dy) const;

		~Rectangle();
};

class Cercle : public Forme
{
	protected:
		Point c;
	public:
		Cercle(Point c, string coul);

		void afficher() const;
		void deplacer(int dx, int dy) const;

		~Cercle();
};

#endif