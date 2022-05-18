#include <iostream>
#include <string>
#include <fstream>
#include "city.h"
using namespace std;

// Implementation of city functions

////////////////////////////////////////////
// Class functions
////////////////////////////////////////////

City::City(){
    cityName = " ";
    avgTemp = 0;
    //cityPop = 0;
    numRobbery = 0;
    numGtA = 0;
    numMurder = 0;
    numTheft = 0;
    //numVandalism = 0;
    //numTres = 0;
}

// Both city name and city population will be set as constant variables in main
City::City( int newAvgTemp, int newNumMurder, int newNumGtA, int newNumRobbery, int newNumTheft){
    //cityName = newCityName;
    avgTemp = newAvgTemp;
    //cityPop = newCityPop;
    numRobbery = newNumRobbery;
    numGtA = newNumGtA;
    numMurder = newNumMurder;
    numTheft = newNumTheft;
    //numVandalism = newNumVand;
    //numTres = newNumTres;
}

/*
string City::getCityName(){
    return cityName;
}
*/
int City::getNumRobbery(){
    return numRobbery;
}

int City::getNumGtA(){
    return numGtA;
}

int City::getNumMurder(){
    return numMurder;
}

int City::getNumTheft(){
    return numTheft;
}
/*
int City::getNumVand(){
    return numVandalism;
}
*/
// int City::getNumTres(){
//     return numTres;
// }

//void City::print();

// void City::readFile(ifstream &cityFile, vector<City> cityName)
// {
//     int counter = 0;

//     while(counter < 12) // ** Problem ** Infinite loop as it reads the last line over again at the end of the file when using (!input.eof())
//     {
//         cityFile >> month >> avgTemp >> numMurder >> numGtA >> numRobbery >> numTheft;   // Reads one line from txt file
//         cityName.push_back(City(avgTemp,numMurder,numGtA,numRobbery,numTheft));   // Adds runner object to vector of runner objects
//         cout << month << " " << avgTemp << " " << numMurder << " " << numGtA << " " << numRobbery << " " <<  numTheft << endl;  // Prints string of runner first name, last name, and pace per mile in seconds
//         counter++;
//     }
// }
