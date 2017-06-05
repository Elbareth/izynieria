#ifndef OBSERWATORTRANSAKCJI_H
#define OBSERWATORTRANSAKCJI_H
#include <obserwator.h>

class ObserwatorTransakcji:public Obserwator
{
public:
    ObserwatorTransakcji();
    void aktualizuj(int,int);
};

#endif // OBSERWATORTRANSAKCJI_H
