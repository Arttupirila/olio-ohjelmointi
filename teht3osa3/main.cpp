#include <iostream>
#include <string>

using namespace std;

class Chef {
public:
    Chef(string);
    ~Chef();

    void makeSalad();
    void makeSoup();

protected:
    string name;
};

Chef::Chef(string a) : name(a) {
    cout << "Chef " << name << " konstruktori" << endl;
}

Chef::~Chef() {
    cout << "Chef " << name << " destruktori" << endl;
}

void Chef::makeSoup() {
    cout << "Chef " << name << " makes soup" << endl;
}

void Chef::makeSalad() {
    cout << "Chef " << name << " makes salad" << endl;
}

class italianChef : public Chef {
public:
    italianChef(string, int, int);
    ~italianChef();
    string getName();
    void makePasta(int, int);
private:
    int vesi;
    int jauhot;
};

italianChef::italianChef(string a, int v, int j) : Chef(a) {
    vesi = v;
    jauhot = j;

}

italianChef::~italianChef() {
}

string italianChef::getName() {
    return name;
}

void italianChef::makePasta(int v, int j) {
    cout << "Chef " << getName() << " makes pasta with special recipe" << endl;
    cout << "Chef " << getName() << " uses jauhot = "<< j << endl;
    cout << "Chef " << getName() << " uses vesi = "<< v << endl;
}

int main() {

    italianChef chef2("Mario", 100, 250);
    chef2.makePasta(100, 250);
    return 0;
}
