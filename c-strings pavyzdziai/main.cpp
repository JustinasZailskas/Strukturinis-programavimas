#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char nameOfChar[16] = {'J', 'o', 'n', 'a', 's'};
    char nameOfString[] = "Jonas";

    // for (int i = 0; i < 16; i++) {
    //     cout<<nameOfChar[i];
    // }
    // cout<<endl;
    // for (int i =0; i < strlen(nameOfString); i++ ) {
    //     cout<<nameOfString[i];
    // }

    // char myname[16];
    //
    // strcpy(myname, "Jonas Jonaitis");
    // cout<<myname<<"Simboliu kiekis: "<<strlen(myname);

    // char fullname[30];
    // cout<<"Iveskite pilna varda ";
    // cin.get(fullname, 30);
    //
    // cout<<"Vardas "<<fullname;

    string nameList[4];

    for(int i =0; i < 4; i++) {
        cin >>nameList[i];
    }
    for(int i = 0; i < 4; i++) {
        cout<<nameList[i]<<" "<<(nameList[i]).length()<<endl;
    }

    // char secondNameList[4][30];
    // for(int i =0; i < 4; i++) {
    //     cin.getline(secondNameList[i], 30);
    // }
    //
    // for(int i =0; i < 4; i++) {
    //     cout<<secondNameList[i]<<" turi "<<strlen(secondNameList[i])<<" simboliu"<<endl;
    // }

    return 0;
}
