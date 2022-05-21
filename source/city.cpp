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
    month = "__";
    avgTemp = 0;
    numRobbery = 0;
    numGtA = 0;
    numMurder = 0;
    numTheft = 0;
}

// Both city name and city population will be set as constant variables in main
City::City(string mnth, int newAvgTemp, int newNumMurder, int newNumGtA, int newNumRobbery, int newNumTheft){
    month = mnth;               // assigns month to passed in string from file
    avgTemp = newAvgTemp;       // asssigns temp to passed in value from file
    numRobbery = newNumRobbery; // assigns robberies to passed in value from file
    numGtA = newNumGtA;         // assigns gta to passed in value fromm file
    numMurder = newNumMurder;   // assigns murder to passed in value from file
    numTheft = newNumTheft;     // assigns theft to passed in value from file
}

int City::getNumRobbery(){
    return numRobbery;  // retunrs number of robberies
}

int City::getNumGtA(){
    return numGtA;      // returns number of Grand theft auto
}

int City::getNumMurder(){
    return numMurder;   // returns number of murders
}

int City::getNumTheft(){
    return numTheft;    // returns number of theft
}

int City::getNumTemp()
{
    return avgTemp;     // returns avg temp for a month
}

string City::getMonth()
{
    return month;   // returns month of the year
}