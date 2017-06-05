#ifndef SCIAGNIJZKONTA_H
#define SCIAGNIJZKONTA_H
#include "polecenie.h"

class SciagnijZKonta:public Polecenie
{
public:
    SciagnijZKonta();
    StanKonta kasa (StanKonta, int, int);
};

#endif // SCIAGNIJZKONTA_H
