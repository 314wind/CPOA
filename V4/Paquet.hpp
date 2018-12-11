#ifndef PAQUET
#define PAQUET

#include <string>
#include <iostream>

/** @brief La classe Paquet contient un nom, une description, et une collection de carte
**
** @version 2.0
**
** @author DIALLO Youssouf, LAMBERT Emilien
**/
class Paquet{

  ///Le nom du paquet
  std::string nom;

  ///La description de ce paquet de cartes
  std::string description;

public:
  ///@brief Constructeur par defaut
  Paquet();

  ///@rief Constructeur
  Paquet(std::string n, std::string desc);

  ///@brief Deconstructeur
  ~Paquet();
};

#endif
