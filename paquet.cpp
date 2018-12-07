#include "paquet.h"

Paquet::Paquet(): _nom(""), _description(""), nbFoisRevise(0), nbCarte(0)
{

}

Paquet::Paquet(const string nom,const string des, GestionnaireCartes *gc)
    : _nom(nom), _description(des), nbFoisRevise(0), nbCarte(0), gestionCartes(gc)
{
}

Paquet::Paquet(const Paquet & p)
    : _nom(p._nom), _description(p._description), nbFoisRevise(p.nbFoisRevise), nbCarte(p.nbCarte)
{

}

Paquet::Paquet(const string nom,const string des)
     : _nom(nom), _description(des), nbFoisRevise(0), nbCarte(0), gestionCartes(NULL)
{
}

Paquet::~Paquet()
{

    delete gestionCartes;
}

// implementation des getters et setters
const string Paquet::getNom() const
{
    return _nom;
}

const string Paquet::getDescription() const
{
    return _description;
}

int Paquet::getNbFoisRev()const
{
    return nbFoisRevise;
}

bool Paquet::contientGestionnaireCarte() const
{
    return gestionCartes != NULL;
}

int Paquet::getNbCarte() const
{
    return gestionCartes->getNbCarte();
}

GestionnaireCartes* Paquet::getGestionCarte() const
{
    return gestionCartes;
}

void Paquet::ajouterGestionnaireCarte(const GestionnaireCartes& gc)
{
    supprimerGestionnaireCarte();
    this->gestionCartes = new GestionnaireCartes(gc);
}

void Paquet::supprimerGestionnaireCarte()
{
    if(contientGestionnaireCarte())
    {
        delete gestionCartes;
        gestionCartes = NULL;
    }
}

void Paquet::setNom(const string & nom)
{
    this->_nom = nom;

}

void Paquet::setDescription(const string & des)
{
    this ->_description = des;
}

const Paquet & Paquet::operator=(const Paquet & p)
{
    if(this != &p)
    {
        _nom = p._nom;
        _description = p._description;
        nbFoisRevise = p.nbFoisRevise;
    }
    return *this;
}

bool Paquet::operator == (const Paquet & p) const
{
    return (_nom == p._nom && _description == p._description && nbFoisRevise == p.nbFoisRevise);
}

void Paquet::afficher(ostream & flux) const
{
    flux << "Paquet [ \n Nom : " << _nom << "\n Description :" << _description << "\n]" << (*gestionCartes) << "/n";
}

