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

Chef::Chef(string a) {
    name = a;
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
    italianChef(string);
    ~italianChef();
    string getName;
    void makePasta();
};

italianChef::italianChef(string a) : Chef(a) {
}



italianChef::~italianChef() { }


int main() {
    Chef chef("Gordon Ramsay");
    chef.makeSalad();
    chef.makeSoup();
    italianChef chef2("Anthony Bourdain");
    chef2.makeSalad();
    chef2.makeSoup();
    return 0;
}
