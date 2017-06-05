#include "sciagnijzkonta.h"

SciagnijZKonta::SciagnijZKonta()
{

}
StanKonta SciagnijZKonta::kasa(StanKonta cos, int skad, int kwota){
    cos.setMap(skad,cos.getMap(skad)-kwota);
    cout<<"Na koncie "<<skad<<" pozostalo tyle srodkow "<<cos.getMap(skad)<<endl;
    return cos;
}
