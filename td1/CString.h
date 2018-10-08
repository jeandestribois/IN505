class CString
{
	private:
		char *s;
		int size;

	public:
		static int nbrChaines;
		
		CString();

		CString(char c);

		CString(const char *s);

		char* getString();

		void plus(char c);

		bool plusGrandQue(const CString &s);

		bool infOuEgal(const CString &s);

		int getSize() const;

		~CString();
};