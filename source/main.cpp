// CS 172 - 1 Final Project
// Josh Creasey, Tianna Mitzel, Angel Ainembabazi
// The Effects of Weather on Crime in Major Cities

#include "city.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

void readFile(ifstream &openAus,vector<City> cityName);

int main(){
    string cityName; //name of city being observed
    int avgTemp; //Average temperature of the city in a given month
    int cityPop; //population of the city
    int numRobbery; //robberies in a given month
    int numGtA; //grand theft auto in a given month
    int numMurder; //murder in a given month
    int numTheft; //theft in a given month
    int numVandalism; //trespassing in a given month
    string month;
    int counter = 0;

    ifstream openAus("Austin.txt");
    // if(openAus.fail()){
    //     cout << "file doesn't exist!" << endl;
    // }
    vector<City> austin;
    readFile(openAus,austin);
    openAus.close();
//     ifstream openBoul("Boulder.txt");
//     ifstream openCic("Chicago.txt");
//     ifstream openNew("NewYork.txt");
//     ifstream openSac("Sacramento.txt");
//     ifstream openSea("Seattle.txt");
    
    
// vector<City> boulder;
// vector<City> chicago;
// vector<City> newyork;
// vector<City> sacramento;
// vector<City> seattle;


// readFile(openBoul,boulder);
// readFile(openCic,chicago);

    //data >> cityName >> avgTemp >> cityPop >> numRobbery >> numGtA >> numMurder >> numTheft >> numVandalism;
    //cout <<  << " " << avgTemp << " " << cityPop << " " << numRobbery << " " << numTheft << " " << numVandalism << endl;

    
    return 0;
}   // End of main



void readFile(ifstream &openAus, vector<City> cityName)
{

    int month, avgTemp, numMurder, numGtA, numRobbery, numTheft;
    int counter = 0;
    while(counter < 12) // ** Problem ** Infinite loop as it reads the last line over again at the end of the file when using (!input.eof())
    {
        openAus >> month >> avgTemp >> numMurder >> numGtA >> numRobbery >> numTheft ;   // Reads one line from txt file
        cityName.push_back(City(avgTemp,numMurder,numGtA,numRobbery,numTheft));   // Adds runner object to vector of runner objects
        cout << month << " " << avgTemp << " " << numMurder << " " << numGtA << " " << numRobbery << " " <<  numTheft << endl;  // Prints string of runner first name, last name, and pace per mile in seconds
        counter++;
    }
}

//issues with readfile function
//could we possibly use a getline in main and print all lists? - Angel
//get help with function?
