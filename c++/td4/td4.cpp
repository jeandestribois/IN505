#include <iostream>
#include <string>
using namespace std;

#include "Pair.h"



template <class type> type GetMax(type &i, type &j)
{
	return (i>j)? i : j;
}

void exo1()
{
int i=5, j=6, k;
float l=10.5, m=5.5, n;
string s1="boujour", s2="toto", s3;

k = GetMax(i, j);
n = GetMax(l, m);
s3 = GetMax(s1, s2);

cout << k << endl;
cout << n << endl;
cout << s3 << endl;
}

void exo2()
{
	int i=5, j=6;
	float l=10.5, m=5.5;

	Pair <int>myInts (i,j);
	Pair <float>myFloats (l,m);

	cout << myInts.getMax()<< endl;
	cout << myFloats.getMax()<<endl;
}

int main(int argc, char const *argv[])
{
	exo1();
	exo2();
	return 0;
}