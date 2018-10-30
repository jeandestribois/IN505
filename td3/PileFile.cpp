using namespace std;
#include <stdlib.h>
#include <iostream>
#include "../td2/CList.h"
#include "PileFile.h"

void CPile::operator<(int i)
{
	struct list* tmp;
	tmp=new struct list;
	tmp->val=i;
	tmp->suiv=this->l;
	this->l=tmp;
	this->taille++;
}

int CPile::operator>(int i)
{
	if(this->l==NULL) return -1;
	else
	{
		i=this->l->val;
		struct list* tmp=this->l;
		this->l=this->l->suiv;
		this->taille--;
		delete tmp;
	}
	return i;
}

void CFile::operator<(int i)
{
	if(this->l==NULL)
	{
		struct list *tmp=new struct list;
		tmp->val=i;
		tmp->suiv=NULL;
		this->l=tmp;
		this->taille++;
	}
	else
	{
		struct list *tmp, *tmp2;
		tmp=new struct list;
		tmp->val=i;
		tmp->suiv=NULL;
		tmp2=this->l;
		while(tmp2->suiv!=NULL) tmp2=tmp2->suiv;
		tmp2->suiv=tmp;
		this->taille++;
	}
}

int CFile::operator>(int i)
{
	if(this->l==NULL) return -1;
	else
	{
		i=this->l->val;
		struct list* tmp=this->l;
		this->l=this->l->suiv;
		this->taille--;
		delete tmp;
	}
	return i;
}