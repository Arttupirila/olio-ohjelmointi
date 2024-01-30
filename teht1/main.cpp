#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(nullptr));
    int satluku = rand() % 21;
    int annettuluku;
    cout<<"Arvaa satunnaisesti valittu luku valilta 0-20."<<endl;
    cin>>annettuluku;

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

    }
    cout<<"Arvauksesi on oikein!"<<endl;
    return 0;
}
