// But : Calculer le montant qu'un individu devra débourser pour faire un voyage dans un automobile louée.
// Auteur : Pier-Charles Martin
// Date : 2020-09-17

#include <iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "");

	int nbjours;
	int km;

	const int coutlocation = 45;
	const float prixunlitresdessences = 1.25;
	const float consommationpar100 = 7.6;

	std::cout << "Nombre de kilomètres= ";
	std::cin >> km;

	std::cout << "Nombre de jours= ";
	std::cin >> nbjours;

	if (km / nbjours > 250)
	{
		float prixkm = ((km - (250 * nbjours)) * 0.05);
		float prixgaz = (km * (consommationpar100 / 100) * prixunlitresdessences);

		int prixlocation = (nbjours * coutlocation);

		std::cout << "Le cout total pour le voyage est de: " << prixkm + prixgaz + prixlocation << "$" << endl;
	}
	else
	{
		float prixkm_250;
		float prixunlitresdessences_250;
		float prixgaz_250 = (km * (consommationpar100 / 100)) * prixunlitresdessences;

		int prixlocation_250 = (nbjours * coutlocation);

		std::cout << "Le cout total du voyage va être de: " << prixgaz_250 + prixlocation_250 << "$" << endl;
	}

}
/*
Plan de tests

Nombre de kilomètres			Nombre de jours			Résultat

1000							25						1220$
200								10						469$
400								10						488$
300								20						928.5$

*/
