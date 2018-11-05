#include <stdlib.h>
#include <iostream>
using namespace  std;
#include "PointColor.h"
#include "Forme.h"
#include "CList.h"
#include "PileFile.h"

void exo1()
{
	cout<<"\nEXERCICE 1 :\n";
	PointColor p1;
	PointColor p2(10, 10, "blanc");
	p1.afficher();
	p2.afficher();
}

void afficherForme(Forme &f)
{
	f.deplacer(3,6);
	f.afficher();
}
void exo2()
{
	cout<<"\nEXERCICE 2 :\n";
	Triangle t(Point(10,20),Point(10,20),Point(10,20),"blanc");
	Rectangle r(Point(30,40),Point(30,40),"rouge");
	Cercle c(Point(50,60),"bleu");
	afficherForme(t);
	afficherForme(r);
	afficherForme(c);
}

void exo3()
{
	cout<<"\nEXERCICE 3 :\n";
	CPile pile;
	CFile file;

	CList *ptList=&pile;
	*ptList < 0;
	*ptList < 1;
	cout<<*ptList<<endl;
	int i;
	*ptList > i;
	cout<<*ptList<<endl<<"i="<<i<<endl;
	
	ptList = &file;
	*ptList < 0;
	*ptList < 1;
	cout<<*ptList<<endl;
	*ptList > i;
	cout<<*ptList<<endl<<"i="<<i<<endl;
}

int main(int argc, char const *argv[])
{
	exo1();
	exo2();
	exo3();
	return 0;
}