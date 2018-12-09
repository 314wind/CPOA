#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <model/singletonecrans.h>
#include <graphics/home.h>
#include <mainwindow.h>
#include <QApplication>
#include <ostream>
#include <QPushButton>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;

    w.show();

    /*
    QPushButton *button = new QPushButton(
    QApplication::translate("childwidget", "Press me"), &w);
    button->move(100, 100);
    button->show();
    */

    std::cout << "here\n";
    return a.exec();

}
