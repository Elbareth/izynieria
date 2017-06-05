#include "przelejnakonto.h"

PrzelejNaKonto::PrzelejNaKonto()
{

}
StanKonta PrzelejNaKonto::kasa(StanKonta cos, int dokad, int kwota){
    cos.setMap(dokad,cos.getMap(dokad)+kwota);
    cout<<"Na koncie "<<dokad<<" jest tyle srodkow "<<cos.getMap(dokad)<<endl;
    return cos;
}
