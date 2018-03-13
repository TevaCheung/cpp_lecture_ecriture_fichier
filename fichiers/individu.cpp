#include "individu.h"

individu::individu()
{
}


individu::~individu()
{
}

string individu::getNom()const
{
	return nom;
}

string individu::getPrenom()const
{
	return prenom;
}

string individu::getNumSecu()const
{
	return numSecuSoc;
}

string individu::getProf()const
{
	return profession;
}

void individu::setProf(string mprof)
{
	profession = mprof;
}
