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
    int numRobbery; //robberies in a given month
    int gta; //grand theft auto in a given month
    int numMurder; //murder in a given month
    int numTheft; //theft in a given month
    int numVandalism; //trespassing in a given month
    //string crimes[6] = {"Murder", "Robbery", "grand theft auto", "theft", "Vandalism", "Trespassing"};

    public:
    string getCityName(); //returns city name
    int getCityPop();//returns city population
    int getNumRobbery();//returns the number of robbery cases
    int getGtA();//returns the number of grand theft auto cases
    int getNumMurder(); //returns the number of murder cases
    int getNumTheft(); //returns the number of theft cases
    int getNumVand();
    int getNumTres();
    void print();


////////////////////////////////////////////
// Class functions
////////////////////////////////////////////
    
    //Stuff

};
#endif

//do we need attributes for month or year?