#ifndef PILEFILE_H
#define PILEFILE_H

#include "../td2/CList.h"

class CPile : public CList
{
	public:
		void operator<(int i);
		int operator>(int i);
};

class CFile : public CList
{
	public:
		void operator<(int i);
		int operator>(int i);
};

#endif