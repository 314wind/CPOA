#ifndef CARTE_H
#define CARTE_H

#include <iostream>
#include <string>
#include <ctime>
#include <stdlib.h>
//#include <vector>


class Carte
{

private:

    std::string _front;
    std::string _back;
    int nb_fois_reviser;
    //time_t date_revision = time(0);

    // Constructeurs

public:
    Carte(); // Constructeur Vide()
    Carte(std::string front, std::string back);
    Carte(std::string & front, std::string &back, int nbrev, time_t prochain_rev);
    Carte(Carte & c); // Le constructeur par recopie

    // Destructeur
    ~Carte();
    
    //Getters et setters
    const  std::string & getFront() const;
    const  std::string & getback() const;
    int                  getNbfoisrev() const;
    time_t               getdateRev() const;

    void setFront(std::string & );
    void setBack(std::string &);
    void setNbfoisRev(int nbrev);
    //on ne peut pas changer la date

    //compare si deux cartes son identique
    bool operator ==(const Carte & c) const;


    //La fonction d'affichage
    friend std::ostream & operator<<(std::ostream &flux, Carte &c)
    {
        c.afficher(flux);
        return flux;
    }
    void afficher(std::ostream& flux) const;


};

#endif // CARTE_H
