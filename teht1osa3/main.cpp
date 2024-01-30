#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int game(int maxnum)
{

    srand(time(nullptr));
    int satluku = rand() % maxnum + 1;
    int annettuluku;
    int arvaukset;
    cout<<"Arvaa satunnaisesti valittu luku valilta 0-"<<maxnum<<endl;
    cin>>annettuluku;
    arvaukset++;
    while(annettuluku != satluku)
    {
        if (annettuluku > satluku)
        {
            cout<<"Arvauksesi on liian suuri. Yrita uudelleen."<<endl;
        }
        else if (annettuluku < satluku)
        {
            cout<<"Arvauksesi on liian pieni. Yrita uudelleen."<<endl;
        }

        cin>>annettuluku;
        arvaukset++;
    }
    cout<<"Arvauksesi on oikein!"<<endl;
    return arvaukset;
}
int main()
{
    int maxnumber;
    cout<<"Valitse korkein etsittava luku:"<<endl;
    cin>>maxnumber;
    int arvaustenmaara = game(maxnumber);
    cout<<"Arvausten maara: "<<arvaustenmaara<<endl;
}
