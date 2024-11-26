#include <iostream>
using namespace std;

int seka(int skaicius) {
    int sekos_sk;
    if (skaicius == 1) {
        sekos_sk = 1;
    } else if (skaicius == 0) {
        sekos_sk = 0;
    } else {
        sekos_sk = (seka(skaicius - 2) + seka(skaicius - 1));
    }
    return sekos_sk;
}

int main() {
    int sekos_elem_kiekis, i = 0;
    cout << "Kiek Fibonacio sekos nariu atspausdinti?" << endl;
    cin >> sekos_elem_kiekis;
    while (i < sekos_elem_kiekis) {
        cout << " " << seka(i);
        i++;
    }
    return 0;
}
