#include <iostream>

using namespace std;

void getFibonacciNumbers (int n) {
    int numb1, numb2, nextNum;
    numb1 = 0;
    numb2 = 1;
    for (int i = 1; i <= n; ++i) {
        if (i == 1) {
            cout << numb1 <<", ";
            continue;
        }
        if(i == 2) {
            cout << numb2 << ", ";
            continue;
        }
        nextNum = numb1 + numb2;
        numb1 = numb2;
        numb2 = nextNum;

        cout << nextNum << ", ";
    }
}

int main() {
    int n, m;

    cout <<"Kiek Fibonacio skaitmenu norite matyti sekoje? "<<endl;
    cin >> n;

    cout <<"Fibonacio seka: ";
    getFibonacciNumbers(n);
    cout <<endl;

    cout <<"Kiek Fibonacio skaitmenu norite matyti antroje sekoje? "<<endl;
    cin >> m;
    getFibonacciNumbers(m);



    return 0;
}


