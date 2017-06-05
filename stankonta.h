#ifndef STANKONTA_H
#define STANKONTA_H
#include <iostream>
#include <map>
#include "obserwowany.h"
#include "obserwatorkont.h"

using namespace std;

class StanKonta:public Obserwowany
{
    map<int,int> wszystko;
    Obserwator *o;
public:
    StanKonta();
    void setMap(int, int);
    int getMap(int);
    void dodaj();
    void powiadom(int, int);
};

#endif // STANKONTA_H
