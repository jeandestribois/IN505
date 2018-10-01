class Segment
{
	private:
		Point p1,p2;
	
	public:
		Segment();

		Segment(const Point &p1, const Point &p2);

		Segment(const Segment &s);

		void afficher();

		~Segment(); 
};