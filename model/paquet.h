#ifndef PAQUET_H
#define PAQUET_H

#include <iostream>
#include <stdlib.h>
#include <string>
#include <model/gestionnairecartes.h>

using namespace std;

class Paquet
{

private:
    string _nom;
    string _description;
    int nbFoisRevise;
    GestionnaireCartes *gestionCartes;
    int nbCarte;


    //constructeurs
public:
    Paquet(); //constructeur vide()
    Paquet(const string nom,const string des, GestionnaireCartes *gc);
    Paquet(const string nom,const string des);
    Paquet(const Paquet & p);

    //Destructeur
    ~Paquet();

    //Getters et Setters
    const string getNom() const;
    const string getDescription() const;
          int    getNbFoisRev() const;
    GestionnaireCartes* getGestionCarte() const;
    int getNbCarte() const;
    void ajouterGestionnaireCarte(const GestionnaireCartes&);
    void supprimerGestionnaireCarte();
    bool contientGestionnaireCarte() const;

    void setNom(const string &nom);
    void setDescription(const string &des);


    bool operator == (const Paquet & p) const; // renvoie true si deux paquet sont identique
    const Paquet &operator = (const Paquet & p);

    // affichage des cartes
    void afficher (ostream &) const;

    friend ostream & operator << (ostream & flux, const Paquet & p)
    {
        p.afficher(flux);
        return flux;
    }

    void revision() const; //revision des cartes se trouvant dans un paquet


};

#endif // PAQUET_H


