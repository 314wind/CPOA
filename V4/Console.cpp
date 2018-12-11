/** @brief Le programme main de l'application
 **
 ** @version 3
 **
 ** @author LAMBERT Emilien
 **/
#include <string>
#include "Application.hpp"

int main(int argc, char *argv[]) {

  Application appli;//Classe Application au coeur de toute l'application
  int run = 0;
  std::string l, nom, mdp, desc;

  do{ //Fase d'inscription/connection
    std::cout << "q a tout moment pour quitter" << std::endl;
    std::cout << "=====Application de carte de Révision=====\ni : Inscription" << std::endl;
    std::cin >> l;

    if(l=="q"){//EXIT
      run=1;
    }else if(l=="i"){//Inscription
      std::cout << "-nom:" << std::endl;
      std::cin >> nom;
      std::cout << "-mot de passe:" << std::endl;
      std::cin >> mdp;
      appli.inscription(nom, mdp);
      std::cout << "Création effectué de "<< appli.getUserName() << "\n" << std::endl;
      run=1;
    }else{
      std::cout << "* MAUVAISE TOUCHE ! *\n" << std::endl;
    }
  }while(run==0);

  std::cout << "\t Bienvenue " << appli.getUserName() << " !\n" << std::endl;
  appli.getUser()->afficher(std::cout);
  std::cout << "Avec pour l'instant " << appli.getUser()->getNbPaquet() << " paquets\n" << std::endl;
  run=0;

  do{//Action sur le profil connecté
    std::cout << "=== Dans Profil " << appli.getUserName() << " ===" << std::endl;
    std::cout << "a : Ajouter paquet" << std::endl;
    std::cin >> l;

    if(l=="q"){//EXIT
      run=1;
    }else if(l=="a"){//Ajout Paquet
      std::cout << "-nom du paquet:" << std::endl;
      std::cin >> nom;
      std::cout << "-description:" << std::endl;
      std::cin >> desc;
      appli.getUser()->ajouterPaquet(nom,desc);
      std::cout << "Création effectuée car nous avonc maintenant " << appli.getUser()->getNbPaquet() << " paquets.\n" << std::endl;
    }else{
      std::cout << "* MAUVAISE TOUCHE ! *\n" << std::endl;
    }
  }while(run==0);

  return 0;
}
