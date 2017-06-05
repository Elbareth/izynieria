#include "obserwatortransakcji.h"

ObserwatorTransakcji::ObserwatorTransakcji()
{

}
void ObserwatorTransakcji::aktualizuj(int id, int kwota){
    fstream plik;
    plik.open("C:\\Users\\Boruch\\Desktop\\atransakcje.txt",std::ios::app);
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
