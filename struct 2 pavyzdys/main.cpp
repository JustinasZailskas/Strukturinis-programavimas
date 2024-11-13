#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

struct playerType{
    string firstname;
    string lastname;
    string position;
    double height;
    int gamesPlayed;
    int pointsScored;
    double avgPointsPerGame;
};

int main() {
    playerType players[10];
    ifstream  infile;
    int counter;

    infile.open("players_data.txt");
    if(!infile){
        cout<<"Cannot open the input file";
        return 1;
    }

    for(counter = 0; counter < 4; counter++){
        infile  >> players[counter].firstname
                >> players[counter].lastname
                >> players[counter].position
                >> players[counter].height
                >> players[counter].gamesPlayed
                >> players[counter].pointsScored;
        players[counter].avgPointsPerGame = (double)players[counter].pointsScored/players[counter].gamesPlayed;
    }

    infile.close();

    for(counter = 0; counter < 4; counter++){
        cout<<players[counter].lastname<<" "<<fixed<<setprecision(1)<<players[counter].avgPointsPerGame<<endl;
    }
    return 0;
}