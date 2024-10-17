#include <iostream>
#include <iomanip>
using namespace std;
const int EILUTES = 3;
const int STULPELIAI = 3;

int main()
{
    int masyvas[EILUTES][STULPELIAI];
    int determinantas = 0;
    //Duomenu ivedimas 
    cout << "Iveskite "<<EILUTES<<" ir "<<STULPELIAI<<" stulpeliu masyvo elementus \n";
    for (int i = 0; i < EILUTES; i++) {
        for (int j = 0; j < STULPELIAI; j++) {
            cout << "Masyvo [" << i + 1 << "][" << j + 1 << "] elementas \n";
            cin >> masyvas[i][j];
        }
    }
    //Masyvo atspausdinimas
    cout << "Masyvo atspausdinimas \n";
    for (int i = 0; i < EILUTES; i++) {
        for (int j = 0; j < STULPELIAI; j++) {
            cout <<setw(5)<<masyvas[i][j];
        }
        cout << endl;
    }

    cout << "Masyvo eilutes elementu sudetis \n";
    for (int i = 0; i < EILUTES; i++) {
        int eilutesSuma = 0;
        for (int j = 0; j < STULPELIAI; j++) {
            cout << setw(5) << masyvas[i][j];
            eilutesSuma += masyvas[i][j];
        }
        cout<<setw(5) << eilutesSuma;
        cout << endl;
    }
   
    //Masyvo stulpelio elementu sudetis
    int stulpeliuSumaMasyvas[STULPELIAI] = {0};
    for (int j = 0; j < STULPELIAI; j++) {
        int stulpelioSuma = 0;
        for (int i = 0; i < EILUTES; i++) {
            stulpelioSuma += masyvas[i][j];
        }
        stulpeliuSumaMasyvas[j] = stulpelioSuma;
    }
    for (int i = 0; i < STULPELIAI; i++) {
        cout << setw(5) << stulpeliuSumaMasyvas[i];
    }
    cout << endl;
    determinantas = (masyvas[0][0] * masyvas[1][1] * masyvas[2][2]) + (masyvas[0][1] * masyvas[1][2] * masyvas[2][0]) + (masyvas[0][2] * masyvas[1][0] * masyvas[2][1]) - (masyvas[0][2] * masyvas[1][1] * masyvas[2][0]) - (masyvas[0][1] * masyvas[1][0] * masyvas[2][2]) - (masyvas[0][0] * masyvas[1][2] * masyvas[2][1]);
    cout <<"Determinantas"<< setw(5) << determinantas;
}



