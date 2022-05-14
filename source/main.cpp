// CS 172 - 1 Final Project
// Josh Creasey, Tianna Mitzel, Angel Ainembabazi
// The Effects of Weather on Crime in Major Cities

#include "city.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

int main(){
    //create objects
    //2d array of city with pop and crimes?
    ifstream data("Austin.txt");
    string cityName; //name of city being observed
    int avgTemp; //Average temperature of the city in a given month
    int cityPop; //population of the city
    int numRobbery; //robberies in a given month
    int numGtA; //grand theft auto in a given month
    int numMurder; //murder in a given month
    int numTheft; //theft in a given month
    int numVandalism; //trespassing in a given month
    //int getNumTres(); //returns the number of trespassing cases
    
    data >> cityName >> avgTemp >> cityPop >> numRobbery >> numGtA >> numMurder >> numTheft >> numVandalism;
    cout << cityName << " " << avgTemp << " " << cityPop << " " << numRobbery << " " << numTheft << " " << numVandalism << endl;

    data.close();
    return 0;
}