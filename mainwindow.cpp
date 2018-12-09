#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <model/singletonecrans.h>
#include <graphics/home.h>
#include <ostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{
    ui->setupUi(this);


}

void MainWindow::run(){

    //1er appel de Instance: on alloue le pointeur SoundManager::m_instance
    singletonEcrans& ptr1=singletonEcrans::Instance();

    ptr1.update();
    std::string nom = "home";
    ptr1.afficher_ecran(nom);


}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    run();
}
