#include <iostream>
using namespace std;

class Asunto {
public:
    int asukasMaara;
    int neliot;
    void maarita(int,int);
    double laskeKulutus(double);
};

class Kerros {
public:
    Asunto as1;
    Asunto as2;
    Asunto as3;
    Asunto as4;
    virtual void maaritaAsunnot();
    double laskeKulutus(double);
};

class Katutaso : public Kerros {
public:
    Asunto as1;
    Asunto as2;
    void maaritaAsunnot() override;
    double laskeKulutus(double);
};

void Asunto::maarita(int a, int b) {
    asukasMaara = a;
    neliot = b;
    cout << "Asunto maaritetty asukkaita = " << asukasMaara << " nelioita = " << neliot << endl;
}

double Asunto::laskeKulutus(double hinta) {
    double result = asukasMaara * neliot;
    return result * hinta;
}

void Kerros::maaritaAsunnot() {
    cout << "Maaritetaan katutason kerrokselta perittyja asuntoja" << endl;
    cout << "Maaritetaan 4 kpl kerroksen asuntoja" << endl;
    as1.maarita(2, 100);
    as2.maarita(2, 100);
    as3.maarita(2, 100);
    as4.maarita(2, 100);
}

void Katutaso::maaritaAsunnot() {
    cout << "Maaritetaan 2 kpl katutason asuntoja" << endl;
    as1.maarita(2, 100);
    as2.maarita(2, 100);
}

int main() {
    cout << "asunto luotu" << endl;
    cout << "asunto luotu" << endl;
    cout << "asunto luotu" << endl;
    cout << "asunto luotu" << endl;

    Kerros kerros;

    cout << "Kerros luotu" << endl;

    cout << "asunto luotu" << endl;
    cout << "asunto luotu" << endl;

    Katutaso katutaso;

    cout << "Katutaso luotu" << endl;

    katutaso.maaritaAsunnot();
    kerros.maaritaAsunnot();

    double hinta = 1;
    double total_consumption = katutaso.as1.laskeKulutus(hinta);
    total_consumption += katutaso.as2.laskeKulutus(hinta);
    total_consumption += kerros.as1.laskeKulutus(hinta);
    total_consumption += kerros.as2.laskeKulutus(hinta);
    total_consumption += kerros.as3.laskeKulutus(hinta);
    total_consumption += kerros.as4.laskeKulutus(hinta);

    cout << "Katutason ja perityn kerroksen kulutus, kun hinta = " << hinta << " on " << total_consumption << endl;

    return 0;
}
