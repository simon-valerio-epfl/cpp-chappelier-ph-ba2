#include <iostream>
using namespace std;

/*****************************************************
 * Compléter le code à partir d'ici
 *****************************************************/
class Patient
{
private:
	double masse;
	double hauteur;

public:
	void init(double poids_initial, double taille_initiale)
	{
		if (poids_initial < 0 or taille_initiale < 0)
		{
			masse = 0;
			hauteur = 0;
		}
		else
		{
			masse = poids_initial;
			hauteur = taille_initiale;
		}
	}
	void afficher() const
	{
		cout << "Patient :" << masse << "kg pour " << hauteur << "m" << endl;
	}
	double poids() const
	{
		return masse;
	}
	double taille() const
	{
		return hauteur;
	}
	double imc() const
	{
		return hauteur == 0 ? 0 : masse / (hauteur * hauteur);
	}
};
/*******************************************
 * Ne rien modifier après cette ligne.
 *******************************************/

int main()
{
  Patient quidam;
  double poids, taille;
  do {
    cout << "Entrez un poids (kg) et une taille (m) : ";
    cin >> poids >> taille;
    quidam.init(poids, taille);
    quidam.afficher();
    cout << "IMC : " << quidam.imc() << endl;
  } while (poids * taille != 0.0);
  return 0;
}
