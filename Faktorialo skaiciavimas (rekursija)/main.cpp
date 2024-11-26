#include <iostream>
using namespace std;

int faktorialas(int skaicius) {
    int faktorialio_sk;
    if (skaicius == 1) {
        faktorialio_sk = 1;
    } else {
        faktorialio_sk = faktorialas(skaicius - 1) * skaicius;
    }
    return faktorialio_sk;
}

int main() {
    int skaicius;
    cout << "Kokio skaiciaus faktoriala norite apskaiciuoti?" << endl;
    cin >> skaicius;
    cout << faktorialas(skaicius);
    return 0;
}
