#include "e_acceuil.h"
#include "ui_e_acceuil.h"

E_Acceuil::E_Acceuil(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::E_Acceuil)
{
    ui->setupUi(this);
}

E_Acceuil::~E_Acceuil()
{
    delete ui;
}
