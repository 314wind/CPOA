#ifndef GESTIONNAIREPAQUETS_H
#define GESTIONNAIREPAQUETS_H

#include <iostream>
#include <string>
#include <vector>
#include "erreur.h"
#include "paquet.h"

using namespace std;

class gestionnairePaquets
{

private:
    vector <Paquet*> paquets;

public:
    gestionnairePaquets();
    ~gestionnairePaquets();

    int getNbPaquet() const;// renvoi le nombre de paquets
    const Paquet *getPaquet(const int index); // affiche une carte donnée
    int getIndexCarte(const Paquet *p) const; // Donne l'index d'une carte
    //Suppresson d'une carte
    void supprimer(const Paquet *p);

    //Ajouter une carte
    void ajouter ( Paquet *p);

    Paquet* operator[](const int i) const;

    void afficher (ostream &os) const;


};

/*Afficher toutes les carte dans gestionnaire de carte*/
inline ostream &operator<<(ostream &os, const gestionnairePaquets &g) {

    g.afficher(os);

    return os;
}

#endif // GESTIONNAIREPAQUETS_H
