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
    int numRobbery; //robberies in a given month
    int numGtA; //grand theft auto cases in a given month
    int numMurder; //murder cases in a given month
    int numTheft; //theft cases in a given month
    string month;
    
    public:
        City(); 
        City(string month, int newAvgTemp, int newNumMurder, int newNumGtA, int newNumRobbery, int newNumTheft);

        int getNumRobbery();//returns the number of robbery cases
        int getNumGtA();//returns the number of grand theft auto cases
        int getNumMurder(); //returns the number of murder cases
        int getNumTheft(); //returns the number of theft cases
        int getNumVand(); //returns the number of vandalism cases
        int getNumTemp(); //returns the temperature for a month
        string getMonth();

        int set_Mur(int value);
        void set_GtA(int value);
        void set_Robbery(int value);
        void set_Theft(int value);

};
#endif

//do we need attributes for month or year?