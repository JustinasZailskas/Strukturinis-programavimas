#include <iostream>
#include <iomanip>
using namespace std;
const int EILUTES = 3;
const int STULPELIAI = 2;

int main()
{
    
    int masyvas[EILUTES][STULPELIAI];

    //Ivedimas 5x3 dydzio masyvo
    cout << "Iveskite 5 eiluciu ir 3 stulpeliu masyvo elementus \n";
    for (int i = 0; i < EILUTES; i++) {
        for (int j = 0; j < STULPELIAI; j++) {
            cout << "Masyvo [" << i + 1 << "][" << j + 1 << "] elementas \n";
            cin >> masyvas[i][j];
        }
    }
    //Masyvo spausdinimas
    cout << "Masyvo spausdinimas" << endl;
    for (int i = 0; i < EILUTES; i++) {
        for (int j = 0; j < STULPELIAI; j++) {
            cout <<setw(5) <<masyvas[i][j]<<" ";
        }
        cout << endl;
    }
    cout << "Masyvo spausdinimas ir eilutes elementu suma" << endl;
    for (int i = 0; i < EILUTES; i++) {
        int eilutes_suma = 0;
        for (int j = 0; j < STULPELIAI; j++) {
            cout << setw(5) << masyvas[i][j] << " ";
            eilutes_suma += masyvas[i][j];
        }
        cout << setw(5) << eilutes_suma;
        cout << endl;
    }

    cout << "Masyvo spausdinimas ir stulpelio elementu suma" << endl;
    for (int j = 0; j < STULPELIAI; j++) {
        int stulpelio_suma = 0;
        for (int i = 0; i < EILUTES
            ; i++) {
            cout << setw(5) << masyvas[i][j] << " ";
            stulpelio_suma += masyvas[i][j];
        }

        cout << endl;
        cout<<setw(5) << "Stulpelio elementu suma " << stulpelio_suma;
    }

}

//neveikia
int gautiStulpelioElemSuma(int masyvas[][STULPELIAI], int eilutes, int stulpeliai) {
    for (int j = 0; j < stulpeliai; j++) {
        int stulpelio_suma = 0;
        for (int i = 0; i < eilutes; i++) {
            stulpelio_suma += masyvas[i][j];
        }
    }
}

