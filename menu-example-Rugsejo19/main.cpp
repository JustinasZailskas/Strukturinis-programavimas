#include <iostream>

using namespace std;

int main() {
    int choise = 0;
    int number1, number2, sum;
    int i = 0;

    while (choise != 4) {
        cout <<"Paprastas meniu pasirinkimas"<<endl;
        cout <<"1. Pirma opcija"<<endl;
        cout <<"2. Antra opcija"<<endl;
        cout <<"3. Trecia opcija"<<endl;
        cout <<"4. Iseiti"<<endl;
        cout <<"Jusu pasirinkimas"<<endl;
        cin >> choise;
        switch (choise) {
            case 1:
                cout <<"Jus pasirinkote pirma opcija"<<endl;
                cout <<"Iveskite pirma skaiciu"<<endl;
                cin >> number1;
                cout <<"Iveskite antra skaiciu"<<endl;
                cin >> number2;
                sum = number1 + number2;
                cout <<"Ivestu dvieju skaiciu suma "<<sum <<endl;
            break;
            case 2:
                cout <<"Jus pasirinkote antra opcija"<<endl;
                while (i <= 20) {
                    if ( i % 2 == 1) {
                        cout <<"Skaitmuo nelyginis "<<i<<endl;
                    }
                    i = i +1; //i++;
                }
            break;
            case 3:
                cout <<"Jus pasirinkote trecia opcija"<<endl;
                for (int j = 0; j <= 20; j++ ) {
                    cout <<"Skaitmuo "<<j<<endl;
                }
            break;
            case 4:
                cout <<"Jus isejote is programos"<<endl;
            break;
            default:
                cout <<"Tokio pasirinkimo nera. Bandykite dar karta"<<endl;
        }
    }

    return 0;
}
