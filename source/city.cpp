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
    month = mnth;
    avgTemp = newAvgTemp;
    numRobbery = newNumRobbery;
    numGtA = newNumGtA;
    numMurder = newNumMurder;
    numTheft = newNumTheft;
}

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

int City::getNumTemp()
{
    return avgTemp;
}

string City::getMonth()
{
    return month;
}

int City :: set_Mur(int value)
{
    numMurder = value;
    return value;
}

