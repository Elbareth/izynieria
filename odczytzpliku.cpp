#include "odczytzpliku.h"

OdczytZPliku::OdczytZPliku()
{

}
void OdczytZPliku::odczyt(){
    fstream plik1,plik2;
    StanKonta cokolwiek;
    Transakcja transt = Transakcja::getTransakcja();
    plik1.open("C:\\Users\\Boruch\\Desktop\\konta.txt",std::ios::in);
    if(plik1.good()==false){
        cout<<"Pliku nie udalo sie otworzyc"<<endl;
    }
    plik2.open("C:\\Users\\Boruch\\Desktop\\transakcje.txt",std::ios::in);
    if(plik2.good()==false){
        cout<<"Pliku nie udalo sie otworzyc"<<endl;
    }
    int id,nr,stan;
    while(!plik1.eof()){
        plik1>>id;
        plik1>>nr;
        plik1>>stan;
        cokolwiek.setMap(nr,stan);
        cokolwiek.dodaj();
        cokolwiek.powiadom(nr,stan);
    }
    int id1,id2,kwota,nr2;
    while(!plik2.eof()){
        plik2>>nr2;
        plik2>>id1;
        plik2>>id2;
        plik2>>kwota;
        transt.wykonaj(cokolwiek,id1,id2,kwota);
        transt.dodaj();
        transt.powiadom(nr2,kwota);
    }
    plik1.close();
    plik2.close();
}
