#include <iostream>
#include <string>
#include <fstream>
#include "individu.h"

using namespace std;

int main() {
	int nb, lignedem,i;
	string ligne;
	nb = -1;
	lignedem = -1;

	individu i1;
	i1.setProf("001");

	individu i2;
	i2.setProf("002");


	while (nb < 1 || nb>3) {
		cout << "Pgm individus" << endl;
		cout << "1 : Ajouter un individu" << endl;
		cout << "2 : Lire tout" << endl;
		cout << "3 : Lire un individu" << endl;

		cin >> nb;
	}

	ifstream fichier("info.txt", ios::in);

	if (nb == 1) {
		if (fichier) {

			fichier << i1.getNom << i1.getPrenom << i1.getNumSecu << i1.getDateNaiss << endl;

			fichier.close;
		
	}else if (nb == 2) {

		if (fichier) 
		{			 
			while (getline(fichier, ligne))
			{
				cout << ligne << endl;
			}
		}
	}
	else if (nb == 3) {
		cout << "Ligne demandee ?" << endl;
		
		while (lignedem < 0) {
			cin >> lignedem;
		}

		if (fichier)
		{
			while (i!=lignedem)
			{
				getline(fichier, ligne);
				i++;
			}

			getline(fichier, ligne);
			cout << ligne << endl;

		}

	}





	system("pause");
	return 0;
}










