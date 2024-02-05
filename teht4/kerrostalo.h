#ifndef KERROSTALO_H
#define KERROSTALO_H


#include "katutaso.h"
class Kerrostalo
{
public:
    Kerrostalo() {
        cout<<"Kerrostalo luotu"<<endl;
        cout<<"Maaritellaan koko kerrostalon kaikki asunnot"<<endl;
        eka.maaritaAsunnot();
            toka.maaritaAsunnot();
            kolmas.maaritaAsunnot();
    }
    double laskeKulutus(double);
private:
    Katutaso eka;
    Kerros toka;
    Kerros kolmas;
};


#endif // KERROSTALO_H
