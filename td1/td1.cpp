#include <stdio.h>
using namespace std;
#include <iostream>
#include <string.h>
#include "Point.h"
#include "Segment.h"
//#include "CString.h"

void exo1()
{
	int t[10];
	int *p=t;
	for(int i=0; i<10; i++) t[i]=i+1, cout<<p[i]<<endl;

	char *tab[3];
	tab[0]=new char[strlen("truc")+1];
	strcpy(tab[0],"truc");
	tab[1]=new char[strlen("machin")+1];
	strcpy(tab[1],"machin");
	tab[2]=new char[strlen("chose")+1];
	strcpy(tab[2],"chose");
	for(int i=0; i<3; i++)
	{
		cout<<tab[i]<<endl;
		delete[] tab[i];
	}
}

void exo2(int &a, int &b)
{
	int c=a;
	a=b;
	b=c;
}

void tableauEcriture(int *t, int taille)
{
	for(int i=0; i<taille; i++) t[i]=i;
}

void tableauLecture(const int *t, const int taille)
{
	for (int i=0; i<taille; i++) cout<<t[i]<<endl;
}

void exo3()
{
	int t1[10];
	tableauEcriture(t1,10);
	tableauLecture(t1,10);
}

void exo4()
{
	Point p1;
	Point p2(3,4);
	Point p3(p2);
	p1.afficher();
	p2.afficher();
	p3.afficher();
	p3.cloner(p1);
	p3.afficher();
}

void exo5()
{
	Segment s1;
	Segment s2(s1);
	s1.afficher();
	s2.afficher();
}