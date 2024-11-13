#include <iostream>
#include <fstream>


using namespace std;

const char ABECELE[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };

int main()
{
    char tekstas[50];
    char rezultatas[50];
    char uzsifruotasTekstas[50];
    char desifruotasTekstas[50];
    int poslinkis, tekstoIlgis, rezultatoIndeksas, k = 0, l = 0;
    int uzsifruotoTekstoIlgis;

    ifstream duomenuFailas;
    ifstream desifravimoFailas;
    ofstream rezultatuFailas;
    duomenuFailas.open("duomenys.txt");
    duomenuFailas >> tekstas;
    duomenuFailas.close();

    tekstoIlgis = strlen(tekstas);
    poslinkis = 12;

    for(int i = 0; i < tekstoIlgis; i++) {
        for(int j=0; j < sizeof(ABECELE); j++) {
            if(toupper(tekstas[i]) == ABECELE[j]) {
                rezultatoIndeksas = (j + poslinkis) % sizeof(ABECELE);
                rezultatas[k] = ABECELE[rezultatoIndeksas];
                k++;
            }
        }
    }
    cout<<endl;
    cout<<rezultatas;

    rezultatuFailas.open("rezultatas.txt");
    rezultatuFailas<<rezultatas;
    rezultatuFailas.close();

    desifravimoFailas.open("rezultatas.txt");
    desifravimoFailas>>uzsifruotasTekstas;
    desifravimoFailas.close();

    uzsifruotoTekstoIlgis = strlen(uzsifruotasTekstas);
    for(int i = 0; i < uzsifruotoTekstoIlgis; i++) {
        for(int j=0; j < sizeof(ABECELE); j++) {
            if(toupper(uzsifruotasTekstas[i]) == ABECELE[j]) {
                rezultatoIndeksas = (j - poslinkis + sizeof(ABECELE)) % sizeof(ABECELE);
                desifruotasTekstas[l] = ABECELE[rezultatoIndeksas];
                l++;
            }
        }
    }
    cout<<endl;
    cout<<"Desifruotas tekstas: "<<desifruotasTekstas;

    return 0;
}
