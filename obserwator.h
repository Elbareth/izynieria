#ifndef OBSERWATOR_H
#define OBSERWATOR_H
#include <iostream>
#include <fstream>
#include <time.h>
#include <conio.h>

using namespace std;

class Obserwator
{
public:
    Obserwator();
    virtual void aktualizuj(int, int)=0;
};

#endif // OBSERWATOR_H
