#include <stdio.h>
using namespace std;
#include <iostream>
#include <string.h>


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

//void tableauEcriture(int t)


void exo3()
{

}

int main(int argc, char const *argv[])
{
	exo1();

	int a=5;
	int b=10;
	cout<<a<<" "<<b<<endl;
	exo2(a,b);
	cout<<a<<" "<<b<<endl;

	exo3();



	exit(0);
}