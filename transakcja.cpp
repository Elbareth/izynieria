#include "transakcja.h"

Transakcja::Transakcja()
{

}
Transakcja &Transakcja::getTransakcja(){
    static Transakcja pole;
    return pole;
}
void Transakcja::wykonaj(StanKonta cos, int skad, int dokad, int ile){
    pol=new PrzelejNaKonto();
    pol->kasa(cos,dokad,ile);
    pol=new SciagnijZKonta();
    pol->kasa(cos,skad,ile);
}
void Transakcja::dodaj(){
    o = new ObserwatorTransakcji();
}

void Transakcja::powiadom(int id, int kwota){
    o->aktualizuj(id,kwota);
}
