using namespace std;
#include <stdio.h>
#include <iostream>
#include "CString.h"
#include "Definition.h"

Definition::Definition(const char *clef, const char *def)
{
	this->clef=new CString(clef);
	this->def=new CString(def);
}
char* Definition::getClef()
{
	return this->clef->getString();
}
char* Definition::getDef()
{
	return this->def->getString();
}
Definition::~Definition()
{
	cout<<"Appel au destructeur de Definition"<<endl;
	delete this->clef;
	delete this->def;
}