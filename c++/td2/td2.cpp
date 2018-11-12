#include <stdlib.h>
using namespace std;
#include <iostream>
#include "Vecteur.h"
#include "CList.h"

void exo2()
{
	Vecteur v1;
	Vecteur v2(20);
	for(int i=0; i<v1.getTaille(); i++) v1[i]=1;
	for(int i=0; i<v2.getTaille(); i++) v2[i]=2;
	cout<<v1<<v2;
	
	Vecteur v3=v1+v2;

	cout<<"Valeur de v3 apres avoir fait v3=v1+v2"<<endl<<v3;


}

void exo3()
{
	CList c1;
	CList c2(20);
	for(int i=0; i<c1.getTaille(); i++) c1[i]=3;
	for(int i=0; i<c2.getTaille(); i++) c2[i]=3;
	cout<<c1<<c2<<endl;
}


int main(int argc, char const *argv[])
{
	exo2();
	exo3();
	return 0;
}