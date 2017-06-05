#ifndef OBSERWATORKONT_H
#define OBSERWATORKONT_H
#include "obserwator.h"

class ObserwatorKont:public Obserwator
{
public:
    ObserwatorKont();
    void aktualizuj(int,int);
};

#endif // OBSERWATORKONT_H
