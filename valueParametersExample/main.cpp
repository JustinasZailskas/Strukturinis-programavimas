#include <iostream>
using namespace std;

void functionValueParameters(int num);
int main()
{
    int number = 6;
    cout<<"7 eilute pries kvieciant funkcija, fukcijai perduodama reiksme number = "<<number<<endl;
    cout<<"Adresas main dalyje "<<&number<<endl;
    functionValueParameters(number);
    cout<<"11 eilute po iskvieciant funkcija, number = "<<number<<endl;
    return 0;
}

void functionValueParameters(int num) {
    cout<<"16 eilute. Funkcijai perduoto kintamojo reiksme num = "<<num<<endl;
    num = 20;
    cout<<"18 eilute. Funkcijoje pakeista num reiksme, kuri darbar lugi "<<num<<endl;
    cout <<"Adresas funkcijoje "<<&num<<endl;
}
