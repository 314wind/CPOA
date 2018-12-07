#ifndef GESTIONNAIRECARTES_H
#define GESTIONNAIRECARTES_H

#include <iostream>
#include <stdlib.h>
#include <vector>
#include "carte.h"
#include "erreur.h"
#include <sstream>
#include <string>
#include <cstdlib>
#include <cstdio>

using namespace std;

class GestionnaireCartes
{

private:

    vector<Carte*> cartes;
    //int nbCartes ;

    //constructeurs
public:
    GestionnaireCartes();
    ~GestionnaireCartes();


    int getNbCarte() const;// renvoi le nombre de carte
    const Carte *getCarte(const int index);
    const int getIndexCarte(const Carte *c) const;
    //Suppresson d'une carte
    void supprimer(const Carte *c);

    //Ajouter une carte
    void ajouter ( Carte *c);

    Carte* operator[](const int i) const;

    void afficher (ostream &os) const;


};

/*Afficher toutes les carte dans gestionnaire de carte*/
inline ostream &operator<<(ostream &os, const GestionnaireCartes &g) {

    g.afficher(os);

    return os;
}
#endif // GESTIONNAIRECARTES_H
