#include <iostream>
using namespace std;
int main() {
    int masyvas [100];
    int n;
    cout <<"Iveskite masyvo elementu skaiciu \n";
    cin >> n;
    cout <<"Iveskite masyvo elementus: \n";
    for (int i = 0; i < n; i++) {
        cout<<i+1<<" -aji masyvo elementa ";
        cin>>masyvas[i];
        cout<<"Ivestas "<<i+1<<" elementas "<<masyvas[i]<<endl;
    }
    int max = masyvas[0]; //prielaida didziausiam elementui
    int imax = 0; //jei pirmas elementas toks ir bus - jo vieta yra 0
    int min = masyvas[0]; //prielaida maziausiam elementui
    int imin = 0; //ir jo vieta masyve

    for( int i = 1; i < n; i++) {
        if (masyvas[i] > max) {
            max = masyvas[i];
            imax = i;
        }
        if (masyvas[i] < min) {
            min = masyvas[i];
            imin = i;
        }
    }
    cout <<"\n Rezultatai\n";
    cout <<"Didziausias elementas yra "<<max<<" jo vieta yra "<<imax+1<<endl;
    cout <<"Maziausias elementas yra "<<min<<" jo vieta yra "<<imin+1<<endl;
}