#include <iostream>
#include "model/singletonecrans.h"
#include <graphics/home.h>
#include <graphics/connexion.h>


using namespace std;


singletonEcrans::singletonEcrans()
{
    unordered_map<string, int>* um = new unordered_map<string,int>();
    this->umap = *um;

    QVector<QDialog*> *v = new QVector<QDialog*>();
    this->lesEcrans = *v;

}

singletonEcrans singletonEcrans::m_instance=singletonEcrans();

singletonEcrans::~singletonEcrans()
{
    cout<<"Destruction singleton Ecran"<<endl;
}

singletonEcrans& singletonEcrans::Instance()
{
    return m_instance;
}


void singletonEcrans::ajouter_ecran(QDialog *ecran, string nom){
    if(this->current != ecran){
        this->umap[nom] = this->umap.size();
        this->lesEcrans.append(ecran);
    }
}

void singletonEcrans::afficher_ecran(string nom){
    int i ;
    for(i=0; i<this->lesEcrans.size(); i++){
        std::cout << lesEcrans[i] << std::endl;

    }
    std::cout << "hereAAA\n";
    std::cout << this->umap["home"] << std::endl;
    std::cout << this->umap["connexion"] << std::endl;
    std::cout << this->umap[nom] << std::endl;
    if(this->current != nullptr){
        this->current->hide();
    }
    i = this->umap[nom];
    assert(lesEcrans[i]!=nullptr);
    this->lesEcrans[i]->setResult(true);
    //this->lesEcrans[i]->show();
    this->current = this->lesEcrans[i];
    //this->lesEcrans[i]->exec();
}

void singletonEcrans::set_current(QDialog *ecran){
    this->current = ecran;
}

void singletonEcrans::update(){
    Home home;
    ajouter_ecran(&home, "home");

    Connexion connexion;
    ajouter_ecran(&connexion, "connexion");

}
