#include "gestionnairecartes.h"

GestionnaireCartes::GestionnaireCartes()
{

}

GestionnaireCartes::~GestionnaireCartes() {

    for(unsigned int i = 0; i < cartes.size(); i++) {
        delete cartes[i];
    }
}

int GestionnaireCartes::getNbCarte() const
{
    return (int)cartes.size();
}

void GestionnaireCartes::supprimer(const Carte *c)
{
    cartes.erase(cartes.begin() + getIndexCarte(c));
}

 const Carte *GestionnaireCartes::getCarte(const int index)
 {

     if(index < 0 || index > getNbCarte())
     {
         throw Erreur("La carte n'existe pas dans la collection des cartes \n");
     }

    return cartes[index];
}

const int GestionnaireCartes::getIndexCarte(const Carte *c) const
{

    if(c == NULL) {

        throw Erreur("La carte ne doit pas être vide \n");
    }

    for(unsigned int i = 0; i < cartes.size(); i++)
    {

        if(cartes[i] == c) {

            return i;
        }
    }

    return NULL;
}

void GestionnaireCartes::ajouter( Carte *c)
{
    if(c == NULL)
    {
         printf("Impossible d'ajouter la carte \n");
    }

    cartes.push_back(c);
}

Carte* GestionnaireCartes::operator[](const int i) const
{
    return cartes[i];
}


void GestionnaireCartes::afficher (ostream &os) const
{
    os << "Cartes : [ \n";
    for(unsigned int i = 0; i < cartes.size(); i++)
        os << (*cartes[i])  << endl;

    os << "]";
}

