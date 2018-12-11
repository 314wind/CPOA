#ifndef APPLICATION
#define APPLICATION


/** @brief Classe qui va gérer le profil actuellement entrain
 ** d'utiliser l'application
 **
 ** @version 1.0
 **
 ** @author LAMBERT EMilien
 **/

#include "V4/Profil.hpp"
#include "V4/GestionnaireProfil.hpp"

class Application{

  //Profil actuellement en cour d'utilisation de l'application
  Profil* utilisateur;

  //Collection des Profils
  GestionnaireProfil lesProfils;

public :
  ///@brief Constructeur
  Application();

  ///@brief Deconstructeur
  ~Application();

  ///@brief Procédure qui va créer un nouveau Profil
  ///
  ///@param nom   Le nom du nouveau Profil
  ///
  ///@param mdp   Le mot de passe pour pouvoir se connecter à ce compte
  void inscription(std::string nom, std::string mdp);

  ///@brief Procédure qui va instansier l'attribut utilisateur du nom "nom" si le mot de passe "mdp" est correct
  void connexion(std::string nom, std::string mdp);

  ///@brief Fonction qui retourne le nom de l'utilisateur actuel
  std::string getUserName();

  ///@brief Fonction qui renvoie le Profil actuel
  Profil* getUser();

};

#endif
