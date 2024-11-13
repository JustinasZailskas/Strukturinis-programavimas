#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

struct nameType{
    string firstname;
    string lastname;
};
struct statisticType{
    int pointsScored;
    int assists;
    int steals;
    int turnovers;
};
struct averagesType{
    double avgPointsPerGame;
    double avgAsPerGame;
    double avgStPerGame;
    double avgToPerGame;
};
struct playerType{
    nameType name;
    string position;
    double height;
    statisticType statistic;
    int gamesPlayed;
    averagesType averages;
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
        infile  >> players[counter].name.firstname
                >> players[counter].name.lastname
                >> players[counter].position
                >> players[counter].height
                >> players[counter].gamesPlayed
                >> players[counter].statistic.pointsScored
                >> players[counter].statistic.assists
                >> players[counter].statistic.steals
                >> players[counter].statistic.turnovers;
        players[counter].averages.avgPointsPerGame = (double)players[counter].statistic.pointsScored/players[counter].gamesPlayed;
        players[counter].averages.avgAsPerGame = (double)players[counter].statistic.assists/players[counter].gamesPlayed;
        players[counter].averages.avgStPerGame = (double)players[counter].statistic.steals/players[counter].gamesPlayed;


    }

    infile.close();

    for(counter = 0; counter < 4; counter++){
        cout<<players[counter].name.lastname<<" "<<fixed<<setprecision(1)<<players[counter].averages.avgPointsPerGame<<endl;
    }
    return 0;
}