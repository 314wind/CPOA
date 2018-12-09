#include "model/partie.h"
#include "model/carte.h"
#include "model/erreur.h"
#include "model/gestionnairecartes.h"
#include "model/paquet.h"
#include "model/gestionnairepaquets.h"
#include "model/profil.h"

Partie::Partie()
{

    Carte *c1 = new Carte("Ecole","Savoir");
    Carte *c2 = new Carte("Argent","Pouvoir");
    Carte *c3 = new Carte("Cpp","Casse-couille");
    Carte *c4 = new Carte("1+1","2");

    //test de la classe Gestionnaire de carte ---------------------------------------------
    GestionnaireCartes *gestionnaireCartes = new GestionnaireCartes();
    GestionnaireCartes *gestioncartess = new GestionnaireCartes();
    gestionnairePaquets *gestionPaquets = new gestionnairePaquets();
    gestionnaireCartes->ajouter(c1);
    gestionnaireCartes->ajouter(c2);
    gestionnaireCartes->ajouter(c3);
    gestioncartess->ajouter(c4);

    //test de la clase paquet --------------------------------------------------------------
    _paquet = new Paquet("Etude", "du tout et de rien \n", gestionnaireCartes);
    p1 = new Paquet ("Geographie", "Science de la vie et de la terre \n", gestionnaireCartes);
    p2 = new Paquet ("Informatique", "Pour les fous \n");

    /*gestionPaquets->ajouter(p1);
    gestionPaquets->ajouter(p2);
    gestionPaquets->ajouter(_paquet);

    for(int i = 0; i < gestionPaquets->getNbPaquet(); i++)
    {
        cout << gestionPaquets->getPaquet(i) << endl;
    }*/

    //test de la classe Profil
    pf1 = new Profil("diallo", "diallo \n", gestionPaquets);
}

void Partie::lancer1()
{

   cout << "Vous etes dans le paquet :" << p1->getNom() << endl << endl;

    for(int i = 0; i < p1->getGestionCarte()->getNbCarte(); i++) {

        cout << "Question: " << (p1->getGestionCarte()->getCarte(i))->getFront() << endl;

        cout << "continuer...";

           int j;
        cin >> j;

        cout << "Reponse: " << (p1->getGestionCarte()->getCarte(i))->getback() << endl << endl;

        int n = 0;
        //do {

        for (int i = 0; i < N; i++) {
            cout << (i+1) << "." << _choix[i] << endl;
        }
        cout << "Reponse: ";
        cin >> n;

        cout << "Reponse choisie : " << n << endl << endl;

        _nombre_choix[n-1]++;

        //} while(n < 1 || n >= N);
    }

    cout << endl << endl << "Recap";

    for (int i = 0; i < N; i++) {

        cout << _choix[i] << ": " << _nombre_choix[i] << endl << endl;
    }

    char rep;
    cout << "Voulez vous continuer sur ce paquet ? O/N ? \n" << endl;
    cin >> rep;
    if(rep == 'O') lancer1();
    else lancer2();

}


/********************** Lancer 2*************************** */
void Partie::lancer2()
{
   cout << "Vous etes dans le paquet :" << p2->getNom() << endl << endl;

    for(int i = 0; i < p2->getGestionCarte()->getNbCarte(); i++) {

        cout << "Question: " << (p2->getGestionCarte()->getCarte(i))->getFront() << endl;

        cout << "continuer...";

           int j;
        cin >> j;

        cout << "Reponse: " << (p2->getGestionCarte()->getCarte(i))->getback() << endl << endl;

        int n = 0;
        //do {

        for (int i = 0; i < N; i++) {
            cout << (i+1) << "." << _choix[i] << endl;
        }
        cout << "Reponse: ";
        cin >> n;

        cout << "Reponse choisie : " << n << endl << endl;

        _nombre_choix[n-1]++;

        //} while(n < 1 || n >= N);
    }

    cout << endl << endl << "Recap";

    for (int i = 0; i < N; i++) {

        cout << _choix[i] << ": " << _nombre_choix[i] << endl << endl;
    }

}




Partie::~Partie()
{
}
