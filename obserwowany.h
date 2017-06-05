#ifndef OBSERWOWANY_H
#define OBSERWOWANY_H
#include "obserwator.h"
#include <iostream>

using namespace std;

class Obserwowany
{
public:
    Obserwowany();
    virtual void dodaj()=0;
    virtual void powiadom(int, int)=0;

};

#endif // OBSERWOWANY_H
