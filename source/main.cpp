// CS 172 - 1 Final Project
// Josh Creasey, Tianna Mitzel, Angel Ainembabazi
// The Effects of Weather on Crime in Major Cities


#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "city.h"
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
    //int numVandalism; //trespassing in a given month
    string month;
    int counter = 0;

    ifstream openAus("Austin.txt");
    vector<City> austin;
    cout << "Austin Data" << endl;
    readFile(openAus,austin);
    openAus.close();

    ifstream openBoul("Boulder.txt");
    vector<City> boulder;
    cout << "Boulder Data" << endl;
    readFile(openBoul,boulder);
    openBoul.close();

    ifstream openCic("Chicago.txt");
    vector<City> chicago;
    cout << "Chicago Data" << endl;
    readFile(openCic,chicago);
    openCic.close();

    ifstream openNew("NewYork.txt");
    vector<City> newyork;
    cout << "New York Data" << endl;
    readFile(openNew,newyork);
    openNew.close();

    ifstream openSac("Sacramento.txt");
    vector<City> sacramento;
    cout << "Sacramento Data" << endl;
    readFile(openSac,sacramento);
    openSac.close();

    ifstream openSea("Seattle.txt");
    vector<City> seattle;
    cout << "Seattle Data" << endl;
    readFile(openSea,seattle);
    openSea.close();
 
return 0;
}   // End of main

//function header
void readFile(ifstream &openAus, vector<City> cityName)
{

    string month; 
    int avgTemp, numMurder, numGtA, numRobbery, numTheft;
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
