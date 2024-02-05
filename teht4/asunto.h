#ifndef ASUNTO_H
#define ASUNTO_H
#include <iostream>
using namespace std;
#include <string>


class Asunto {
public:
    Asunto() {
        cout<<"asunto luotu"<<endl;
    }
    int asukasMaara;
    int neliot;
    void maarita(int,int);
    double laskeKulutus(double);
};

#endif // ASUNTO_H
