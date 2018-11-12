#ifndef CLIST_H
#define CLIST_H

struct list
{
	int val;
	struct list* suiv;		
};

class CList
{
	protected:
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
		virtual void operator<(int);
		virtual int operator>(int&);

		~CList();
};

#endif