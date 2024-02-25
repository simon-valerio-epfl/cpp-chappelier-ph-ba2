#include <iostream>
using namespace std;

/*******************************************
 * Complétez le programme à partir d'ici.
 *******************************************/
class Tirelire
{
	double montant;

public:
	double getMontant()
	{
		return montant;
	}
	void afficher()
	{
		string etat = montant <= 0 ? " Vous etes sans le sou." : " Vous avez : " + to_string((int) montant) + " euros dans votre tirelire.";
		cout << etat << endl;
	}
	void secouer()
	{
		if (montant > 0)
		{
			cout << " Bing bing " << endl;
		}
	}
	void remplir(double argent_entrant)
	{
		if (argent_entrant > 0)
		{
			montant = argent_entrant; // on part du principe que la tirelire est vide //
		}
	}
	void vider()
	{
		montant = 0;
	}
	void puiser(double argent_demande)
	{
		if (argent_demande > montant)
		{
			montant = 0;
		}
		else if (argent_demande > 0)
		{
			montant = montant - argent_demande;
		}
	}
	bool montant_suffisant(double budget, double &solde)
	{
		bool suffisant;
		if (budget <= 0)
		{
			suffisant = true;
			solde = montant;
		}
		else if (budget <= montant)
		{
			suffisant = true;
			solde = montant - budget;
		}
		else
		{
			suffisant = false;
			solde = budget - montant;
		}
		return suffisant;
	}
	double calculerSolde(double budget)
	{
		return montant - budget;
	}
};

/*******************************************
 * Ne rien modifier après cette ligne.
 *******************************************/

int main()
{
  Tirelire piggy;

  piggy.vider();
  piggy.secouer();
  piggy.afficher();

  piggy.puiser(20.0);
  piggy.secouer();
  piggy.afficher();

  piggy.remplir(550.0);
  piggy.secouer();
  piggy.afficher();

  piggy.puiser(10.0);
  piggy.puiser(5.0);
  piggy.afficher();

  cout << endl;

  // le budget de vos vacances de rève.
  double budget;

  cout << "Donnez le budget de vos vacances : ";
  cin >> budget;

  // ce qui resterait dans la tirelire après les
  // vacances
  double solde(0.0);

  if (piggy.montant_suffisant(budget, solde)) {
    cout << "Vous êtes assez riche pour partir en vacances !"
         << endl
         << "Il vous restera " << solde << " euros"
         << " à la rentrée." << endl << endl;
    piggy.puiser(budget);
  } else {
    cout << "Il vous manque " << solde << " euros"
         << " pour partir en vacances !" << endl << endl;
  }
  return 0;
}
