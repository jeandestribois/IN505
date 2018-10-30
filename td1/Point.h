#ifndef POINT_H
#define POINT_H

class Point
{
	protected:
		int x, y;
		
	public:
		Point();

		Point(int x, int y);
	
		Point(const Point &p);

		int getX() const;

		int getY() const;
	
		void afficher() const;

		void operator=(const Point &p);

		friend ostream& operator<<(ostream &flux, const Point &p);
		
		Point cloner(const Point &p);

		~Point();
};

#endif