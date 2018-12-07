#ifndef PARTIE_H
#define PARTIE_H


#include <iostream>
#include <string>
#include <ctime>
#include <stdlib.h>
#include <paquet.h>
#include "profil.h"

using namespace std;

class Partie {

private:

    const static int N = 3;

    string _choix[N]= {"Facile", "Moyen", "Difficle"};

    int _nombre_choix[N] = {0};

    Paquet *_paquet;
    Paquet *p1;
    Paquet *p2;

    Profil *pf1;
    Profil *pf2;

public:
    Partie(); // Constructeur

    void lancer1();
    void lancer2();

    // Destructeur
    ~Partie();
};

#endif // PARTIE_H
