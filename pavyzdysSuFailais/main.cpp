#include <iostream>
#include <fstream>
using namespace std;
int main() {
    int masyvas[15];
    ifstream failasSuSkaiciais;
    failasSuSkaiciais.open("skaiciai.txt");
    for(int i=0; i < 10; i++) {
        failasSuSkaiciais>>masyvas[i];
    }
    failasSuSkaiciais.close();
    cout<<endl;
    for (int i = 0; i< 10; i++) {
        cout<<masyvas[i]<<" ";
    }
    return 0;
}
