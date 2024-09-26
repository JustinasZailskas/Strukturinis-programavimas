#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

void getPlayerInfo() { //prototipo nereikia, nes funkcija aprasyta pries main dali
    string name = "Domantas";
    string surname = "Sabonis";
    string team = "Sacramento Kings";

    cout <<"Zaidejas "<<name<<" "<<surname<<" zaidzia "<<team<<endl;
}

int getRandomNumber(); //funkcijos getRandonNumber prototipas
double getAverage(double, double); //funkcijos prototipas, svarbu nurodyti funkcijos kintamuju tipus

int main()
{
    getPlayerInfo();
    cout <<"Atsitiktinis skaicius: "<< getRandomNumber()<<endl;
    cout <<"Skaiciu vidurkis: "<< getAverage(45, 125.8)<<endl;
    return 0;
}

int getRandomNumber() {
    int randomNum = rand() % 100 ;
    return randomNum;
}

double getAverage(double num1, double num2) {
    return (num1 +num2)/2;
}
