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

void sortbyMurder(vector<City> name);

void printVec(vector<City> name);

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
    cout << "-------------------" << endl;
    cout << "AUSTIN, TX" << endl;
    cout << "-------------------" << endl;
    readFile(openAus,austin);



    //sortbyMurder(austin);

    // ofstream newAus;
    // newAus.open("SortedAustinMurder.txt");
    // for(int i = 0; i < 12; i++)
    // {
    //     newAus << austin[i].getNumTemp() << " " << austin[i].getNumMurder() << " " << austin[i].getNumGtA() << " " << austin[i].getNumRobbery() << " " << austin[i].getNumTheft() << endl;
    // }

    // //while()

    // newAus.close();

    // ifstream openBoul("Boulder.txt");
    // vector<City> boulder;
    // cout << "-------------------" << endl;
    // cout << "BOULDER, CO" << endl;
    // cout << "-------------------" << endl;
    // readFile(openBoul,boulder);
    // //openBoul.close();
    // cout << endl;

    
    // ifstream openCic("Chicago.txt");
    // vector<City> chicago;
    // cout << "-------------------" << endl;
    // cout << "CHICAGO, IL" << endl;
    // cout << "-------------------" << endl;
    // readFile(openCic,chicago);
    // //openCic.close();
    // cout << endl;

    // ifstream openNew("NewYork.txt");
    // vector<City> newyork;
    // cout << "-------------------" << endl;
    // cout << "NEWYORK, NY" << endl;
    // cout << "-------------------" << endl;
    // readFile(openNew,newyork);
    // //openNew.close();
    // cout << endl;

    
    // ifstream openSac("Sacramento.txt");
    // vector<City> sacramento;
    // cout << "-------------------" << endl;
    // cout << "SACRAMENTO, CA" << endl;
    // cout << "-------------------" << endl;
    // readFile(openSac,sacramento);
    // //openSac.close();
    // cout << endl;


    // ifstream openSea("Seattle.txt");
    // vector<City> seattle;
    // cout << "-------------------" << endl;
    // cout << "SEATTLE, WA" << endl;
    // cout << "-------------------" << endl;
    // readFile(openSea,seattle);
    // //openSea.close();
 
    
   //sortbyMurder(austin);
    // for(int i = 0; i < 12; i++)
    // {
    //     cout << austin[i].getNumTemp() << " " << austin[i].getNumMurder() << " " << austin[i].getNumGtA() << " " << austin[i].getNumRobbery() << " " << austin[i].getNumTheft() << endl;
    // }
    // vector<City> murSortAus;
    // murSortAus = austin;
    // printVec(murSortAus);

return 0;
}   // End of main

//function header
void readFile(ifstream &openAus, vector<City> cityName)
{

    string month; 
    int avgTemp, numMurder, numGtA, numRobbery, numTheft;
    int counter = 0;
    while(counter < 12)
    {
        openAus >> month >> avgTemp >> numMurder >> numGtA >> numRobbery >> numTheft ;   // Reads one line from txt file
        cityName.push_back(City(month,avgTemp,numMurder,numGtA,numRobbery,numTheft));   
        cout << month << " " << avgTemp << " " << numMurder << " " << numGtA << " " << numRobbery << " " <<  numTheft << endl;  
        counter++;
    }
}


void sortbyMurder(vector<City> name)
{
    for(int i = 0; i < name.size(); i++)
    {
        int curmin = name[i].getNumMurder();
        int curminIndex = i;
        for(int j = i + 1; j < name.size(); j++)
        {
            if(curmin > name[j].getNumMurder())
            {
                curmin = name[j].getNumMurder();
                curminIndex = j;
            }
        }
        if(curminIndex != i)
        {
            name[curminIndex] = name[i];
            name[i].set_Mur(curmin);
        }

    }

}
void printVec(vector<City> name)
{
    for(int i = 0; i < name.size(); i++)
    {
        cout << name[i].getNumTemp() << " " << name[i].getNumMurder() << " " << name[i].getNumGtA() << " " << name[i].getNumRobbery() << " " << name[i].getNumTheft() << endl;
    }
}