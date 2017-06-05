#ifndef TRANSAKCJA_H
#define TRANSAKCJA_H
#include <iostream>
#include "polecenie.h"
#include "przelejnakonto.h"
#include "sciagnijzkonta.h"
#include "obserwator.h"
#include "obserwowany.h"
#include "obserwatortransakcji.h"

using namespace std;

class Transakcja:public Obserwowany
{
    Transakcja();
    Polecenie *pol;
    Obserwator *o;
public:
    static Transakcja &getTransakcja();
    void wykonaj(StanKonta, int, int, int);
    void dodaj();
    void powiadom(int, int);
};

#endif // TRANSAKCJA_H
