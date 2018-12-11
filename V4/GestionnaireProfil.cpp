#include "V4/GestionnaireProfil.hpp"

/** @brief
 **
 ** @version 2.0
 **
 ** @author LAMBERT Emilien
 **/

GestionnaireProfil::GestionnaireProfil(){
}

GestionnaireProfil::~GestionnaireProfil(){
}

void GestionnaireProfil::ajoutProfil(std::string n, std::string mdp){
  Profil* p= new Profil (n,mdp);
  std::pair<std::string, Profil*> couple(n,p);
  lesProfils.insert(couple);
}

Profil* GestionnaireProfil::getProfil(std::string nom){
  Profil* retour;
  std::map<std::string,Profil*>::iterator it = lesProfils.find(nom);

  if(it == lesProfils.end() ){
    std::cout << "erreur" << std::endl;
  }else{
    retour = it->second;
  }
  return retour;
}

void GestionnaireProfil::afficher(std::ostream &os){
  std::string s = "Il existe les profils: ";
  for(std::map<std::string,Profil*>::iterator it=lesProfils.begin() ;
      it!=lesProfils.end() ; ++it)
    {
      s+=it->first;
      s+=",";
    }
  os << s << std::endl;
}
