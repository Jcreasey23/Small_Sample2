// City Header file
#ifndef CITY_H
#define CITY_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class City{
    private:
    string cityName; //name of city being observed
    int avgTemp; //Average temperature of the city in a given month
    int cityPop; //population of the city
    int numRoberry; //
    int gta;
    int numMurder;
    int numTheft;
    int numVandalism;
    //string crimes[6] = {"Murder", "Robbery", "grand theft auto", "theft", "Vandalism", "Trespassing"};

    public:
    string getCityName();
    int getCityPop();
    int getNumRoberry();
    int getGtA();
    int getNumMurder();
    int getNumTheft();
    int getNumVand();
    int getNumTres();
    void print();


////////////////////////////////////////////
// Class functions
////////////////////////////////////////////
    
    //Stuff

};
#endif