#ifndef POLECENIE_H
#define POLECENIE_H
#include <iostream>
#include "stankonta.h"

using namespace std;

class Polecenie
{
public:
    Polecenie();
    virtual StanKonta kasa(StanKonta, int, int)=0;
};

#endif // POLECENIE_H
