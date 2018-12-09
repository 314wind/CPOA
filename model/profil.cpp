#include <model/profil.h>
//#include <string>


Profil::Profil(): _nom(""), _moDePasse("") {}           //constructeur vide

Profil::Profil(const string &nom, const string& mdp, gestionnairePaquets *gp):   // Constructeur stand
    _nom(nom), _moDePasse(mdp), gestionpak(gp)
{
}

Profil::Profil(const Profil & p) :                      //constructeur par recopie
    _nom(p._nom), _moDePasse(p._moDePasse), gestionpak(p.gestionpak)
{
}

/* Destructeur */
Profil::~Profil()
{
    delete [] gestionpak;
}

/*Getters et setters*/
const string& Profil::getNom() const
{
    return _nom;
}

const string& Profil::getMdp() const
{
    return _moDePasse;
}

void Profil::setNom(string& nom)
{
    this->_nom = nom;
}

bool Profil::contientGestionPaquet() const
{
    return gestionpak != NULL;
}

int Profil::getNbPaquet()const
{
    return gestionpak->getNbPaquet();
}

gestionnairePaquets* Profil::getGestionPaquet() const
{
    return gestionpak;
}

const Paquet *Profil::getPaquet(int i) const
{
    return gestionpak->getPaquet(i);
}

void Profil::supprimerPaquet()
{
    if(contientGestionPaquet())
    {
        delete gestionpak;
        gestionpak = NULL;
    }
}

/*void Profil::ajoutPaquet(const Paquet &p)
{
    supprimerPaquet();
    this->gestionpak = new Paquet(p.getNom(), p.getDescription(), p.getGestionCarte());

}*/

const Profil & Profil::operator=(const Profil &p)
{
    if(this != &p)
    {
        _nom = _nom;
        _moDePasse = p._moDePasse;
        gestionpak = p.gestionpak;
    }
    return *this;
}

bool Profil::operator==(const Profil &p) const
{
    return (_nom == p._nom && _moDePasse == p._moDePasse);
}

void Profil::afficher(ostream & flux) const
{
    flux << "Profil [ \n Nom:" << _nom << "\n Mot de passe :" << _moDePasse << (*gestionpak) << "\n ]" << endl;
}

