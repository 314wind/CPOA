#ifndef GEST_PROFIL
#define GEST_PROFIL

#include <string>
#include <iostream>
#include <map>

#include "V4/Profil.hpp"

/** @brief La classe GestionnaireProfil est chargé de gérer un collection de profil, donc de les créer, ajouter et supprimer
 **
 ** @version 2.0
 **
 ** @author LAMBERT Emilien
 **/

class GestionnaireProfil{

  ///Collection de Profil
  std::map<std::string, Profil*> lesProfils;

public :
  ///@brief Constructeur par défaut
  GestionnaireProfil();

  ///@brief Destructeur par défaut
  ~GestionnaireProfil();

  ///@brief Focntion qui créait un Profil à partir des parametres et l'ajoute à la collection de Profil
  ///
  ///@param n Le nom du nouveau Profil
  ///
  ///@param mdp Le mot de passe de ce nouveau Profil(Aucune sécurité bien sur)
  ///
  ///@see Profil::Profil(std::string n, std::string mdp)
  void ajoutProfil(std::string n, std::string mdp);

  ///@brief Fonction qui retourne un pointeur sur un Profil à partir de son nom, donné en parametre, qui sera comparé aux clé dans la collection (map) de Profils
  ///
  ///@param nom Le nom du profil recherché
  ///
  ///@return Un pointeur sur le profil demandé
  Profil* getProfil(std::string nom);

  ///@brief Fonction qui affiche tous les Profils de la collection
  ///
  ///@param os le flot de sortie dans lequel on affiche les noms de tous les Profils
  void afficher(std::ostream &os);

};

#endif
