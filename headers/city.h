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
    int numGtA; //grand theft auto cases in a given month
    int numMurder; //murder cases in a given month
    int numTheft; //theft cases in a given month
    //int numTres; //trespassing cases in a given month
    int numVandalism; //vandalism cases in a given month
    string month;

    //string city[12][7]; //create a template
    
    public:
        City(); 
        City(int newAvgTemp, int newNumMurder, int newNumGtA, int newNumRobbery, int newNumTheft);
        //string getCityName(); //returns city name
        //int getCityPop();//returns city population
        int getNumRobbery();//returns the number of robbery cases
        int getNumGtA();//returns the number of grand theft auto cases
        int getNumMurder(); //returns the number of murder cases
        int getNumTheft(); //returns the number of theft cases
        int getNumVand(); //returns the number of vandalism cases
        //int getNumTres(); //returns the number of trespassing cases
        //void print(); //print each city with weather temp and crimes respectively
        //void readFile(ifstream &cityFile, vector<City> cityName);
//         string getMonth();
//         int getAvgTemp();
 };
#endif

//do we need attributes for month or year?