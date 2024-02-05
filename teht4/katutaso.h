#ifndef KATUTASO_H
#define KATUTASO_H
#include "asunto.h"
#include "kerros.h"
using namespace std;

class Katutaso : public Kerros {
public:
    Katutaso() {
        cout<<"Katutaso luotu"<<endl;
    }
    void maaritaAsunnot() override;
    double laskeKulutus(double);
private:
    Asunto as1;
    Asunto as2;
};

#endif // KATUTASO_H
