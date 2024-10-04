#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

void getPlayerInfo(string);
int getRandomNumber();

int main()
{
    getPlayerInfo("Toronto Raptors");
    cout <<"Atsitiktinis skaicius "<<getRandomNumber()<<endl;
    cout <<"Atsitiktinis skaicius "<<getRandomNumber()<<endl;
    cout <<"Atsitiktinis skaicius "<<getRandomNumber()<<endl;
    return 0;
}

void getPlayerInfo(string playerTeam) {
    string name = "Jonas";
    string surname = "Valanciunas";
    string team = playerTeam;

    cout <<"Zaidejas "<<name<<" "<<surname<<" zaidzia "<<team<<endl;

}

int getRandomNumber() {
    srand(time(0));
    int randNum = rand() % 100;
    return randNum;
}