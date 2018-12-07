#include "gestionnairepaquets.h"

gestionnairePaquets::gestionnairePaquets()
{

}

gestionnairePaquets::~gestionnairePaquets()
{

    for(unsigned int i = 0; i < paquets.size(); i++)
    {
        delete paquets[i];
    }
}

int gestionnairePaquets::getNbPaquet() const
{
    return paquets.size();
}

const Paquet *gestionnairePaquets::getPaquet(const int index)
{
    if(index < 0 || index > getNbPaquet())
    {
        throw Erreur("La carte n'existe pas dans la collection des cartes \n");
    }

   return paquets[index];
}

 int gestionnairePaquets::getIndexCarte(const Paquet *p) const
{

    if(p == NULL) {

        throw Erreur("Le Paquet ne doit pas être vide \n");
    }

    for(unsigned int i = 0; i < getNbPaquet(); i++)
    {

        if(paquets[i] == p) {

            return i;
        }
    }

    return NULL;
}

void gestionnairePaquets::supprimer(const Paquet *p)
{
    paquets.erase(paquets.begin() + getIndexCarte(p));
}

void gestionnairePaquets::ajouter( Paquet *p)
{
    if(p == NULL)
    {
        throw Erreur("Impossible d'ajouter le Paquet \n");
    }

    paquets.push_back(p);
}

Paquet* gestionnairePaquets::operator[](const int i) const
{
    return paquets[i];
}

void gestionnairePaquets::afficher (ostream &os) const
{
    os << "Paquet : [ \n";
    for(unsigned int i = 0; i < getNbPaquet(); i++)
        os << (*paquets[i])  << endl;

    os << "]";
}







