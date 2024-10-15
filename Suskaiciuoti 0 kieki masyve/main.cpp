#include <iostream>
using namespace std;

int main() {
    int masyvas [100];
    int n;
    int q = 0;
    cout <<"Iveskite masyvo elementu skaiciu \n";
    cin >> n;
    cout <<"Iveskite masyvo elementus: \n";
    for (int i = 0; i < n; i++) {
        cout<<i+1<<" -aji masyvo elementa ";
        cin>>masyvas[i];
        cout<<"Ivestas "<<i+1<<" elementas "<<masyvas[i]<<endl;
    }
    for (int i = 0; i < n; i++) {
        if (masyvas[i] == 0) {
            q++;
        }
    }
    cout <<"Nuliu kiekis masyve yra: "<<q;
}