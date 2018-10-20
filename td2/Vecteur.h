class Vecteur
{
	private:
		int *t;
		int taille;
	public:
		Vecteur();
		Vecteur(int taille);
		Vecteur(const Vecteur &v);

		int getTaille() const;
		void operator=(const Vecteur &v);
		int& operator[](int i);
		Vecteur operator+(const Vecteur &v);
		friend ostream& operator<<(ostream &flux, const Vecteur &v);

		~Vecteur();
	
};