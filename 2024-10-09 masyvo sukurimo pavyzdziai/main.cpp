#include <iostream>
using namespace std;
int main()
{
    //Paprastas masyvo sukurimas. Elementu priskyrimas nurodant indeksa.
    // int numbers[5];
    // numbers[3] = 10;
    // numbers[0] = 15;
    // numbers[1] = numbers[0] + numbers[3];
    // numbers[2] = numbers[1] * numbers[3];
    // numbers[4] = numbers[2];
    //
    // cout << numbers[0] << endl;
    // cout << numbers[1] << endl;
    // cout << numbers[2] << endl;
    // cout << numbers[3] << endl;
    // cout << numbers[4] << endl;
    //Ciklo panaudojimas
    // for (int i = 0; i < 5; i++) {
    //     cout <<"Masyvo "<<i<<" elemento reiksme "<< numbers[i] << endl;
    // }

    // int newNumberArray[3];
    // for (int i = 0; i < 3; i++) {
    //     cout<<"Iveskite "<<i<<" elemento reiksme"<<endl;
    //     cin >> newNumberArray[i];
    // }
    // for (int i = 0; i < 3; i++) {
    //     cout <<"Masyvo "<<i<<" elemento reiksme "<< newNumberArray[i] << endl;
    // }

    //Iseina is reziu ir gaunama klaida
    // int list[10];
    // for (int i = 0; i <= 10; i++) {
    //     list[i] = 0;
    // }

    //galima deklaruoti masyva ir taip
    double averagePoints[3] = {7.48, 2.65, 10.58};

    double avgPoints[] = { 7.48, 2.65, 10.58 };

    //galimas dalinis iniciavimas
    int randomNum[10] = {0}; //visos reiksmes bus tik 0
    int randomNumb[10] = {8, 5, 4}; //tik pirmi trys skaiciai bus nurodyti, o likusieji 0

    //negalima vieno masyvo priskirti kitam
    //randomNum = randomNumb; //bus klaida
    //jei nurodysime taip, viskas veiks. Galima naudoti cikla
    randomNum[0] = randomNumb[0];
    randomNum[1] = randomNumb[1];
    randomNum[2] = randomNumb[2];

    return 0;
}