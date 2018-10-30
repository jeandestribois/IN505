using namespace std;
#include <stdlib.h>
#include <iostream>
#include "CList.h"

CList::CList()
{
	this->l=NULL;
	this->taille=0;
}

CList::CList(int taille)
{
	if(taille==0)
	{
		this->l=NULL;
		this->taille=0;		
	}
	else
	{
		struct list* tmp;
		tmp=new struct list;
		tmp->val=0;
		this->l=tmp;
		this->taille=taille;
		for(int i=1; i<taille; i++)
		{
			tmp->suiv=new struct list;
			tmp->suiv->val=0;
			tmp=tmp->suiv;
		}
		tmp->suiv=NULL;
	}
}

CList::CList(const CList &c)
{
	if(c.getTaille()==0)
	{
		this->l=NULL;
		this->taille=0;	
	}
	else
	{
		struct list* tmp;
		tmp=new struct list;
		tmp->val=c[0];
		this->l=tmp;
		this->taille=c.taille;
		for(int i=1; i<this->taille; i++)
		{
			tmp->suiv=new struct list;
			tmp->suiv->val=c[i];
			tmp=tmp->suiv;
		}
		tmp->suiv=NULL;
	}
}

int CList::getTaille() const {return this->taille;}

int& CList::operator[](int indice) const
{
	if(this->taille<=indice)
	{
		cerr<<"Erreur : indice superieur à la taille du tableau"<<endl;
		exit(0);
	}
	int ret;
	struct list *tmp;
	tmp=this->l;
	for(int i=0; i<indice; i++) tmp=tmp->suiv;
	return tmp->val;
}

struct list* CList::delList(struct list* l)
{
	if(l!=NULL)
	{
		l->suiv=CList::delList(l->suiv);
		delete l;
	}
	return NULL;
}

ostream& operator<<(ostream &flux, const CList &c)
{
	struct list *tmp=c.l;
	for(int i=0; i<c.taille; i++)
	{
		flux<<tmp->val<<", ";
		tmp=tmp->suiv;
	}
	return flux;
}

void CList::operator<(int) {cout<<"Je ne sais pas quoi faire pour l'operateur < pour la classe CLIST"<<endl;}

int CList::operator>(int) {cout<<"Je ne sais pas quoi faire pour l'operateur > pour la classe CLIST"<<endl;}

CList::~CList()
{
	cout<<"Appel au destructeur de CList"<<endl;
	this->l=CList::delList(this->l);
}