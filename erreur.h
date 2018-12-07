#ifndef ERREUR_H
#define ERREUR_H

#include <ostream>
#include <stdlib.h>
#include <string>

class Erreur
{

    char* _message;

public:
    Erreur(char* msg): _message(msg)
    {

    }

    Erreur(const Erreur &e)
    {
        _message = (e._message);
    }

    virtual ~Erreur(void)
    {
        delete (_message);
    }

    const char * getMsg() const
    {
        return _message;
    }

    const Erreur & operator = (const Erreur & e)
    {
        if(this != &e)
        {
            delete (_message);
            _message = (e._message);
        }

        return *this;
    }

};

extern std::ostream & operator << (std::ostream & flux, const Erreur &e);

#endif // ERREUR_H
