#include "V4/Application.hpp"

/** @brief La classe Application fait le lien entre l'Utilisateur et l'Application en elle meme
 **
 ** @version 1.0
 **
 ** @author LAMBERT Emilien
 **/

Application::Application() : utilisateur(NULL){
    inscription("Emilien", "123");
    inscription("Youssouf", "123");
    inscription("Pierre", "123");
}

Application::~Application(){
  delete[](utilisateur);
}


void Application::inscription(std::string nom, std::string mdp){
  lesProfils.ajoutProfil(nom,mdp);
  utilisateur = lesProfils.getProfil(nom);
}


void Application::connexion(std::string nom, std::string mdp){
    utilisateur = lesProfils.getProfil(nom);
}

std::string Application::getUserName(){
  return utilisateur->getNom();
}

Profil* Application::getUser(){
  return utilisateur;
}
