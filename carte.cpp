#include "carte.h"

Carte::Carte(): _front(""), _back("")
{

}

Carte::Carte(std::string  front, std::string back):
    _front(front), _back(back)
{

}

Carte::Carte(Carte &c):
    _front(c._front), _back(c._back)
{

}

Carte::~Carte()
{

}

const std::string & Carte::getFront() const
{
    return _front;
}

const std::string & Carte::getback() const
{
    return _back;
}

int Carte::getNbfoisrev() const
{
    /*****************************/
    return 0;
}

time_t Carte::getdateRev() const
{

    time_t now = time(0);

       // convert now to string form
       char* dt = ctime(&now);

       std::cout << "A la date du jour " << dt << std::endl;

}


void Carte::setFront(std::string & front)
{
    this->_front = front;
}

void Carte::setBack(std::string & back)
{
    this->_back = back;
}

bool Carte::operator==(const Carte & c) const
{
    if ((_front == c._front) && (_back == c._back))
        return true;
    else
        return false;
}

void Carte::afficher(std::ostream & flux ) const
{
    flux << "Carte [ \n Front : " << getFront() << "\n Back : " << getback() << " \t ] \n\n";
}








