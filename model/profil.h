#ifndef PROFIL_H
#define PROFIL_H

#include <string>
#include <iostream>
#include "erreur.h"
#include <model/gestionnairepaquets.h>
#include <model/carte.h>
#include <model/paquet.h>


using namespace std;

class Profil
{
private:
    string _nom;
    string _moDePasse;
    gestionnairePaquets *gestionpak;


    /*les constructeurs*/
public:

    Profil(); //constructeur vide
    Profil(const string &nom,  const string& mdp, gestionnairePaquets *gp); //constructeur standard
    Profil(const Profil & p); //constructeur par recopie

    /* Destructeur*/

    ~Profil();

    /*getters et setters*/
    const  string & getNom() const;
    const  string & getMdp() const;

    void setNom(string & nom);
    /*on ne peut ma modifier le mdp d'un user*/

    /*les methodes de la classe*/
    void ajoutPaquet(const Paquet &p);
    void supprimerPaquet();
    bool contientGestionPaquet() const;
    int getNbPaquet() const;
    gestionnairePaquets* getGestionPaquet() const;
    const Paquet *getPaquet(int i) const ;

    bool operator ==(const Profil &p) const; // compare deux profits
    const Profil &operator = (const Profil &p);
    /* Affichage*/
     void afficher(ostream& flux) const;

    friend ostream &operator <<(ostream& flux, const Profil &p)
    {
        p.afficher(flux);
        return flux;
    }

};

#endif // PROFIL_H
