#ifndef GESTIONNAIREPAQUET
#define GESTIONNAIREPAQUET

#include <string>
#include <map>
#include <iostream>

#include "V4/Paquet.hpp"

/** @brief La classe GestionnaireProfil est chargé de gérer un collection de profil, donc de les créer, ajouter et supprimer
 **
 ** @version 1.0
 **
 ** @author DIALLO Youssouf, LAMBERT Emilien
 **/

class GestionnairePaquet{

  ///Collection de Paquets
  std::map<std::string, Paquet*> lesPaquets;

public :

///@brief Constructeur
GestionnairePaquet();

///@brief Deconstructeur
~GestionnairePaquet();

///@brief Procédure qui affiche les informations sur le Gestionnaire
///
///@param os le flot de sortie
void afficher(std::ostream &os);

///@brief Fonction qui renvoie le nombre de paquet
int getNbPaquet();

///@brief Procédure qui crée et ajoute un paquet à la collection
///
///@param nom le nom du nouveau paquet
///
///@param description La description du paquet
void ajouterPaquet(std::string nom, std::string description);

};

#endif
