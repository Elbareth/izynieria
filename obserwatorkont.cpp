#include "obserwatorkont.h"

ObserwatorKont::ObserwatorKont()
{

}
void ObserwatorKont::aktualizuj(int id, int kwota){
    fstream plik;
    plik.open("C:\\Users\\Boruch\\Desktop\\akonta.txt",std::ios::app);
    if(plik.good()==false){
        cout<<"Nie udalo sie otowrzyc pliku"<<endl;
    }
    time_t czas;
    struct tm *data;
    char godzina [80];
    time (&czas);
    data = localtime(&czas);
    strftime( godzina, 80, "%H:%M:%S.", data );
    plik<<id<<" "<<godzina<<" "<<kwota<<endl;
}
