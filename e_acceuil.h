#ifndef E_ACCEUIL_H
#define E_ACCEUIL_H

#include <QDialog>

namespace Ui {
class E_Acceuil;
}

class E_Acceuil : public QDialog
{
    Q_OBJECT

public:
    explicit E_Acceuil(QWidget *parent = nullptr);
    ~E_Acceuil();

private:
    Ui::E_Acceuil *ui;
};

#endif // E_ACCEUIL_H
