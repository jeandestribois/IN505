#ifndef DEFINITION_H
#define DEFINITION_H

class Definition
{
private:
	char *clef, *def;
public:
	Definition(const char *clef, const char *def);
	~Definition();
	
	char* getClef();
	char* getDef();

#endif