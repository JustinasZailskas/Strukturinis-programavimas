#include <iostream>
using namespace std;

struct komanda{
    string pavadinimas;
    string miestas;
    bool zaidziaEurolygoje;
};

int main() {
    komanda komandos[10];
    komanda temp;
    int kiekis, trinamasElem;
    string ieskomaKomanda;
    cout<<"Kiek komandu norite ivesti? Ne daugiau kaip 10"<<endl;
    cin>>kiekis;
    for( int i = 0; i < kiekis; i++)
    {
        cout<<"Iveskite komandos pavadinima"<<endl;
        cin>>komandos[i].pavadinimas;
        cout<<endl;
        cout<<"Kokiame mieste isikurus"<<endl;
        cin>>komandos[i].miestas;
        cout<<endl;
        cout<<"Ar zaidzia Eurolygoje? Jei taip spauskite 1, jei ne - 0"<<endl;
        cin>>komandos[i].zaidziaEurolygoje;
    }

    //rikiavimas
    for( int i = 0; i < kiekis; i++)
    {
        for( int j = i + 1; j < kiekis; j++)
        {
            if (komandos[i].miestas > komandos[j].miestas){
                temp = komandos[i];
                komandos[i] = komandos[j];
                komandos[j] = temp;
            }
        }
    }

    cout<<"Iveskite komandos pavadinima"<<endl;
    cin>>komandos[kiekis].pavadinimas;
    cout<<endl;
    cout<<"Kokiame mieste isikurus"<<endl;
    cin>>komandos[kiekis].miestas;
    cout<<endl;
    cout<<"Ar zaidzia Eurolygoje? Jei taip spauskite 1, jei ne - 0"<<endl;
    cin>>komandos[kiekis].zaidziaEurolygoje;
    kiekis++;
    for(int i = 0; i < kiekis; i++)
        cout<<"Komanda "<<komandos[i].pavadinimas<<" "<<komandos[i].miestas<<endl;

    cout<<"--------------------Trynimas-------------------------"<<endl;
    cout<<"Iveskite trinama elementa. Pasirinkite skaiciu nuo 1 iki "<<kiekis<<endl;
    cin>>trinamasElem;
    for(int i = trinamasElem - 1; i < kiekis; i++){
        komandos[i] = komandos[i+1];
        komandos[kiekis].pavadinimas = "";
        komandos[kiekis].miestas = "";
        komandos[kiekis].zaidziaEurolygoje = false;
    }
    kiekis--;
    for(int i = 0; i < kiekis; i++)
        cout<<"Komanda "<<komandos[i].pavadinimas<<" "<<komandos[i].miestas<<endl;

    cout<<"Iveskite ieskomos komandos pavadinima "<<endl;
    cin>>ieskomaKomanda;
    for (int i = 1; i < kiekis; i++){
        if (komandos[i].pavadinimas == ieskomaKomanda){
            string rez = komandos[i].zaidziaEurolygoje == 1 ? "zaidzia Eurolygoje" : "nezaidzia Eurolygoje";
            cout<<"Informacija apie komanda "<<komandos[i].pavadinimas<<" "<<komandos[i].miestas<<" "<<rez<<endl;
        }
    }
    return 0;
}
