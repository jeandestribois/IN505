class Point
{
	private:
		int x, y;
		
	public:
		Point();

		Point(int x, int y);
	
		Point(const Point &p);

		int getX();

		int getY();
	
		void afficher();
		
		Point cloner(const Point &p);

		~Point();
};