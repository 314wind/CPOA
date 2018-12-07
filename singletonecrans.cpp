#include <iostream>
#include "singletonecrans.h"

using namespace std;


singletonEcrans::singletonEcrans()
{

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

int main(void)
{
    //1er appel de Instance: on alloue le pointeur SoundManager::m_instance
    singletonEcrans& ptr1=singletonEcrans::Instance();

    //2eme appel:on se contente de renvoyer le pointeur déjà allouer.
    singletonEcrans& ptr2=singletonEcrans::Instance();

    //ptr1 et ptr2 pointe sur la même adresse mémoire.
    //On voit donc qu'il ny a bien qu'un seul objet.
    cout<<&ptr1<<"|"<<&ptr2<<endl;

    return 0;
}
