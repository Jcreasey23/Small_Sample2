#include "city.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Implementation of city functions

////////////////////////////////////////////
// Class functions
////////////////////////////////////////////

City::City(){
    cityName = " ";
    avgTemp = 0;
    cityPop = 0;
    numRobbery = 0;
    numGtA = 0;
    numMurder = 0;
    numTheft = 0;
    numVandalism = 0;
}

City::City(string newCityName, int newAvgTemp, int newCityPop, int newNumRobbery, int newNumGtA, int newNumMurder, int newNumTheft, int newNumVand){
    cityName = newCityName;
    avgTemp = newAvgTemp;
    cityPop = newCityPop;
    numRobbery = newNumRobbery;
    numGtA = newNumGtA;
    numMurder = newNumMurder;
    numTheft = newNumTheft;
    numVandalism = newNumVand;
}

string City::getCityName(){
    return cityName;
}

int City::getNumRobbery(){
    return numRobbery;
}

int City::getNumGtA(){
    return numGtA;
}

int City::getNumMurder(){
    return numGtA;
}

int City::getNumTheft(){
    return numTheft;
}

int City::getNumVand(){
    return numVandalism;
}

int City::getNumTres(){
    return getNumTres;
}

//void City::print();
