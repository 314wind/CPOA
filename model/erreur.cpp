#include "model/erreur.h"

std::ostream & operator << (std::ostream & flux, const Erreur & e)
{
    flux << e.getMsg();
    return flux;
}
