#ifndef SINGLETONECRANS_H
#define SINGLETONECRANS_H

#include <iostream>
#include <unordered_map>
#include <string>
#include <QVector>
#include <QtWidgets/QDialog>

using namespace std;

class singletonEcrans
{
public:
    //instance
    static singletonEcrans& Instance();

    //methode
    void ajouter_ecran(QDialog* ecran, string nom);
    void afficher_ecran(string nom);
    void set_current(QDialog* ecran);
    void update();
private:    
    //attributs
    unordered_map<string, int> umap; //permet de retrouver les ecrans par nom
    QVector<QDialog*> lesEcrans; //les ecrans;
    QDialog* current;
    //constructeurs/destructeurs
    singletonEcrans();
    static singletonEcrans m_instance;
    ~singletonEcrans();


};

#endif // SINGLETONECRANS_H
