#include <iostream>
using namespace std;

int main() {
    int choice = 0;


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
                break;
            case 2:
                cout<<"Jus pasirinkote antra opcija"<<endl;
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
