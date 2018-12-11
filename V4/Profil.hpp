#ifndef PROFIL
#define PROFIL

#include <string>
#include <iostream>

#include "V4/GestionnairePaquet.hpp"

/** @brief La classe Profil repertorie toutes les données d'un Utilisateur. Plus tard elle gerera les paquets de carte.
 **
 ** @version 2.0
 **
 ** @author LAMBERT Emilien
 **/

class Profil{

  ///Nom de l'Utilisateur
  std::string nom;
  ///Mot de passe pour se connecter à ce Profil
  std::string mot_de_passe;
  ///La classe qui va gérer la collection de paquet du Profil
  GestionnairePaquet* gestionnaireP;

public:
  ///@brief Constructeur d'un Profil
  ///
  ///@param n Le nom de l'utilisateur
  ///
  ///@param mdp Le mot de passe de ce Profil
  Profil(std::string n, std::string mdp);

  ///@brief Deconstrusteur
  ~Profil();

  ///@biref Fonction qui retourne le nom du Profil
  ///
  ///@return une string qui est le nom du Profil
  std::string getNom();

  ///@brief Procédure qui met dans le flot de sortie un affichage des données du Profil
  ///
  ///@param os Le flot de sortie dans lequel on écrit
  void afficher(std::ostream &os);

  ///@brief Fonction qui retourne le nombre de paquet de ce Profil
  int getNbPaquet() const;

  ///@brief Procédure qui ajoute un paquet à la collection de paquet du Profil avec les paramêtres donnés
  void ajouterPaquet(std::string nom, std::string description);

};

#endif
