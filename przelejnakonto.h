#ifndef PRZELEJNAKONTO_H
#define PRZELEJNAKONTO_H
#include "polecenie.h"

class PrzelejNaKonto:public Polecenie
{
public:
    PrzelejNaKonto();
    StanKonta kasa(StanKonta, int, int);
};

#endif // PRZELEJNAKONTO_H
