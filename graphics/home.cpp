#include "graphics/home.h"
#include <ui_home.h>
#include <model/singletonecrans.h>
#include <graphics/connexion.h>


Home::Home(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Home)
{
    ui->setupUi(this);

}

Home::~Home()
{
    delete ui;
}

void Home::on_inscription_clicked()
{
    singletonEcrans& ptr1 = singletonEcrans::Instance();
    ptr1.afficher_ecran("connexion");
}
