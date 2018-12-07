#ifndef SINGLETONECRANS_H
#define SINGLETONECRANS_H

#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;

class singletonEcrans
{
public:
    static singletonEcrans& Instance();
private:
    singletonEcrans();
    static singletonEcrans m_instance;
    ~singletonEcrans();

    unordered_map<string, int> umap; //permet de retrouver les ecrans par nom
    vector<> lesEcrans; //les ecrans;


};

#endif // SINGLETONECRANS_H
