#include <iostream>
#include <fstream>
using namespace std;
int main() {
    int masyvas[15];
    int k = 0;
    ifstream failasSuSkaiciais;
    failasSuSkaiciais.open("skaiciai.txt");
    while(!failasSuSkaiciais.eof()) {
        failasSuSkaiciais>>masyvas[k];
        k++;
    }
    failasSuSkaiciais.close();
    cout<<endl;
    for (int i = 0; i< 12; i++) {
        cout<<masyvas[i]<<" ";
    }
    return 0;
}
