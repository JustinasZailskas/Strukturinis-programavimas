#include <iostream>
using namespace std;

int main() {
    int choice = 0;
    int number1, number2, sum;
    int number3 = 0;


    while(choice != 4) {
        cout<<"Paprastas meniu"<<endl;
        cout<<"1. Pirma opcija"<<endl;
        cout<<"2. Antra opcija"<<endl;
        cout<<"3. Trecia opcija"<<endl;
        cout<<"4. Baigti darba"<<endl;
        cout<<"Jusu pasirinkimas "<<endl;
        cin >> choice;
        switch (choice) {
            case 1:
                cout<<"Jus pasirinkote pirma opcija"<<endl;
                cout<<"Iveskite pirma skaiciu"<<endl;
                cin>>number1;
                cout<<"Iveskite antra skaiciu"<<endl;
                cin>>number2;

                sum = number1 + number2;
                cout<<"Dvieju skaiciu suma yra lygi "<<sum<<endl;
                break;
            case 2:
                cout<<"Jus pasirinkote antra opcija"<<endl;
                while (number3 <= 20) {
                    if (number3 % 2 == 0) {
                        cout<<"Skaicius "<<number3<<" yra lyginis"<<endl;
                    } else {
                        cout<<"Skaicius "<<number3<<" yra nelyginis"<<endl;
                    }
                    //number3 = number3 +1;
                    number3++;
                }
                break;
            case 3:
                cout<<"Jus pasirinkote trecia opcija"<<endl;
                break;
            case 4:
                cout<<"Jus baigete programa"<<endl;
                break;
            default:
                cout<<"Tokios opcijos nera. Bandykite dar karta"<<endl;
        }
    }

    return 0;
}
