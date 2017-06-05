#include "odczytzpliku.h"
#include "polecenie.h"
#include "przelejnakonto.h"
#include "sciagnijzkonta.h"
#include "stankonta.h"
#include "transakcja.h"
#include <iostream>

using namespace std;

int main()
{
    OdczytZPliku *od = new OdczytZPliku();
    od->odczyt();
    return 0;
}
