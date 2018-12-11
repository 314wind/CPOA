#include "V4/GestionnairePaquet.hpp"

/** @brief
 **
 ** @version 2.0
 **
 ** @author LAMBERT Emilien, DIALLO Youssouf
 **/

GestionnairePaquet::GestionnairePaquet(){}

GestionnairePaquet::~GestionnairePaquet(){}

void GestionnairePaquet::afficher(std::ostream &os){
  os << " le gestionnaire Paquet est présent" << std::endl;
}

int GestionnairePaquet::getNbPaquet(){
  return lesPaquets.size();
}

void GestionnairePaquet::ajouterPaquet(std::string nom, std::string description){
  Paquet* p= new Paquet (nom,description);
  std::pair<std::string, Paquet*> couple(nom,p);
  lesPaquets.insert(couple);
  std::cout << "--ajout affectuée de "<< nom << " avec succée !" << std::endl;
}
