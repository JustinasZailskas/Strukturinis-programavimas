#include <iostream>
using namespace std;
int main() {
    int masyvas [100];
    int n, temp;
    cout <<"Iveskite masyvo elementu skaiciu \n";
    cin >> n;
    cout <<"Iveskite masyvo elementus: \n";
    for (int i = 0; i < n; i++) {
        cout<<i+1<<" -aji masyvo elementa ";
        cin>>masyvas[i];
        cout<<"Ivestas "<<i+1<<" elementas "<<masyvas[i]<<endl;
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if( masyvas[i] > masyvas[j]) {
                temp = masyvas[i];
                masyvas[i] = masyvas[j];
                masyvas[j] = temp;
            }
        }
    }
    cout<<"Isrikiuoti elementai: "<<endl;
    for ( int i = 0; i < n; i++) {
        cout<<masyvas[i] <<"\t";
    }

    return 0;
}