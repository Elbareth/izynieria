#include "stankonta.h"

StanKonta::StanKonta()
{

}
void StanKonta::setMap(int id, int kwota){
    wszystko[id]=kwota;
}
int StanKonta::getMap(int id){
    return wszystko[id];
}
void StanKonta::dodaj(){
    o = new ObserwatorKont();
}

void StanKonta::powiadom(int id, int kwota){
    o->aktualizuj(id,kwota);
}
