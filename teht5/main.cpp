#include <iostream>

#include "kerrostalo.h"


using namespace std;

int main() {
    Kerrostalo *kt;
    kt = new Kerrostalo;

    cout<<"Kerrostalon kulutus = "<<kt->laskeKulutus(1)<<endl;
    delete kt;
    return 0;

}
