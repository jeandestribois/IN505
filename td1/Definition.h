class Definition
{
	private:
		CString *clef;
		CString *def;
	
	public:
		Definition(const char *clef, const char *def);

		char* getClef();

		char* getDef();

		~Definition();
};