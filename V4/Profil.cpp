#include "V4/Profil.hpp"

/** @brief
 **
 ** @version 1.0
 **
 ** @author LAMBERT Emilien
 **/

Profil::Profil(std::string n, std::string mdp): nom(n), mot_de_passe(mdp) {
    gestionnaireP = new GestionnairePaquet();
  }

Profil::~Profil() {

}

std::string Profil::getNom(){
  return nom;
}

void Profil::afficher(std::ostream &os){
  os << "Le nom de mon profil est: " << getNom() << " et " ;
  gestionnaireP->afficher(os);
  os << std::endl;
}

int Profil::getNbPaquet()const{
    return gestionnaireP->getNbPaquet();
}

void Profil::ajouterPaquet(std::string nom, std::string description){
  gestionnaireP->ajouterPaquet(nom,description);
}
