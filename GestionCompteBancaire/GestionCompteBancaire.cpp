#include <iostream>
using namespace std;

class CompteBancaire
{
    string titulaire;
    double sold;

public:
    CompteBancaire()
    {
        this->titulaire = "Inconnu";
        this->sold = 0.0;
        cout << "objet est cree avec succee" << endl;
    }

    CompteBancaire(string titulaire, double sold)
    {
        this->titulaire = titulaire;
        this->sold = sold;
        cout << "objet est cree avec succee" << endl;
    }

    CompteBancaire(const CompteBancaire &c)
    {
        titulaire = c.titulaire;
        sold = c.sold;
        cout << "Constructeur de copie appelé" << endl;
        cout << "objet est cree avec succee" << endl;
    }

    void afficher()
    {
        cout << "Titulaire : " << titulaire << endl
             << " Solde : " << sold << endl;
    }

    ~CompteBancaire()
    {
        cout << "objet est dertruite" << endl;
    }
};

int main(int argc, char const *argv[])
{
    CompteBancaire compte1;                  // constructeur par défaut
    CompteBancaire compte2("Alice", 1500.0); // constructeur paramétré
    CompteBancaire compte3 = compte2;        // constructeur de copie

    compte1.afficher();
    compte2.afficher();
    compte3.afficher();

    return 0;
}
