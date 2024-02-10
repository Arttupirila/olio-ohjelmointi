#include "kerrostalo.h"
#include "kerros.h"
#include "katutaso.h"

double Kerrostalo::laskeKulutus(double hinta)
{
    return eka->laskeKulutus(hinta) + toka->laskeKulutus(hinta) + kolmas->laskeKulutus(hinta);

}


