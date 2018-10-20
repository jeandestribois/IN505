struct list
{
	int val;
	struct list* suiv;		
};

class CList
{
	private:
		int taille;
		struct list *l;
	public:
		CList();
		CList(int taille);
		CList(const CList &c);

		int getTaille() const;
		void operator=(const CList &c);
		int& operator[](int indice) const;
		friend ostream& operator<<(ostream &flux, const CList &c);
		struct list* delList(struct list *l);

		~CList();
};