using namespace std;
#include <stdio.h>
#include <iostream>
#include <string.h>
#include "CString.h"

int CString::nbrChaines=0;

CString::CString()
{
	this->s=new char[1];
	this->s[0]='\0';
	this->size=0;
	nbrChaines++;
}
CString::CString(char c)
{
	this->s=new char[2];
	this->s[0]=c, this->s[1]='\0';
	this->size=1;
	nbrChaines++;
}
CString::CString(const char *s)
{
	this->s=new char[strlen(s)+1];
	for(int i=0; i<strlen(s)+1; i++) this->s[i]=s[i];
	this->size=strlen(s);
	nbrChaines++;
}
char* CString::getString()
{
	return this->s;
}
void CString::plus(char c)
{
	char* s=new char[strlen(this->s)+1];
	for(int i=0; i<strlen(this->s); i++) s[i]=this->s[i];
	s[strlen(this->s)]=c, s[strlen(this->s)+1]='\0';
	this->s=s;
	this->size++;
}
bool CString::plusGrandQue(const CString &s)
{
	return (this->size > s.getSize())? 1 : 0;
}
bool CString::infOuEgal(const CString &s)
{
	return (this->size <= s.getSize())? 1 : 0;
}
int CString::getSize() const
{
	return this->size;
}
CString::~CString()
{
	cout<<"Appel au destructeur de CString"<<endl;
	delete[] this->s;
}