
#include <iostream>
#include <string>

using namespace std;

class individu
{
private:
	string numSecuSoc;
	string nom;
	string prenom;
	int j_naiss;
	int m_naiss;
	int a_naiss;
	string profession;

public:
	individu();
	~individu();
	string getNom()const;
	string getPrenom()const;
	string getNumSecu()const;
	string getDateNaiss()const;
	string getProf()const;
	void setProf(string mprof);
};

