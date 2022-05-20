// CS 172 - 1 Final Project
// Josh Creasey, Tianna Mitzel, Angel Ainembabazi
// The Effects of Weather on Crime in Major Cities


#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "city.h"
using namespace std;

void readFile(ifstream &openAus,vector<City>& cityName);

void sortByMurder(vector<City>& name);

void sortByGtA(vector<City> name);

void sortByRobbery(vector<City> name);

void sortByTheft(vector<City> name);

void printVec(vector<City> name);

void printSidetoSide(vector<City> city1, vector<City> city2);

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
    cout << "AUSTIN, TX  Population: 965,872" << endl;
    cout << "-------------------" << endl;
    readFile(openAus,austin);
    // sortbyMurder(austin);
    // for(int i = 0; i < 12; i++)
    // {
    //     cout << austin[i].getNumTemp() << " " << austin[i].getNumMurder() << " " << austin[i].getNumGtA() << " " << austin[i].getNumRobbery() << " " << austin[i].getNumTheft() << endl;
    // }
    openAus.close();
    cout << endl;

    //sortbyMurder(austin);

    ofstream newAus;
    newAus.open("SortedAustinMurder.txt");
    for(int i = 0; i < 12; i++)
    {
        newAus << austin[i].getNumTemp() << " " << austin[i].getNumMurder() << " " << austin[i].getNumGtA() << " " << austin[i].getNumRobbery() << " " << austin[i].getNumTheft() << endl;
    }

    // //while()

    // newAus.close();

    ifstream openBoul("Boulder.txt");
    vector<City> boulder;
    cout << "-------------------" << endl;
    cout << "BOULDER, CO  Population: 108,777" << endl;
    cout << "-------------------" << endl;
    readFile(openBoul,boulder);
    openBoul.close();
    cout << endl;

    
    ifstream openCic("Chicago.txt");
    vector<City> chicago;
    cout << "-------------------" << endl;
    cout << "CHICAGO, IL  Population: 2.7 Million" << endl;
    cout << "-------------------" << endl;
    readFile(openCic,chicago);
    openCic.close();
    cout << endl;

    ifstream openNew("NewYork.txt");
    vector<City> newyork;
    cout << "-------------------" << endl;
    cout << "NEWYORK, NY  Population: 8.38 Million" << endl;
    cout << "-------------------" << endl;
    readFile(openNew,newyork);
    openNew.close();
    cout << endl;

    
    ifstream openSac("Sacramento.txt"); //reads file
    vector<City> sacramento; 
    cout << "-------------------" << endl;
    cout << "SACRAMENTO, CA  Population: 503,482" << endl;
    cout << "-------------------" << endl;
    readFile(openSac,sacramento);
    openSac.close();
    cout << endl;

    
    ifstream openSea("Seattle.txt");
    vector<City> seattle;
    cout << "-------------------" << endl;
    cout << "SEATTLE, WA  Population: 741,251" << endl;
    cout << "-------------------" << endl;
    readFile(openSea,seattle);
    openSea.close();
    cout << endl << endl;
 
    // sortbyMurder(austin), sortByGtA(austin), sortbyRobbery(austin), sortByTheft(austin);
    // vector<City> sortedAusMur, sortedAusGTA, sortAusRob, sortAusThef;
    //sortedAusMur = austin, sortedAusGTA = austin, sortAusRob = austin, sortAusThef;
    vector<City> sortedAusMur, sortedAusGTA, sortAusRob, sortAusThef;
    sortByMurder(austin);
    sortedAusMur = austin;
    sortByGtA(austin);
    sortedAusGTA = austin;
    sortByRobbery(austin);
    sortAusRob = austin;
    sortByTheft(austin);
    sortAusThef = austin;

    //sortBY
    //sorted austin murder = austin
    // SortedGTA() =
    // sorted austin gta = austin

    vector<City> sortedBouldMur, sortedBouldGTA, sortedBouldRob, sortedBouldThef;
    sortByMurder(boulder);
    sortedBouldMur = boulder;
    sortByGtA(boulder);
    sortedBouldGTA = boulder;
    sortByRobbery(boulder);
    sortedBouldRob = boulder;
    sortByTheft(boulder);
    sortedBouldThef = boulder;

    sortByMurder(chicago);
    vector<City> sortedChicMur, sortedChicGTA, sortChicRob, sortChicThef;
    sortedChicMur = chicago;
    sortByGtA(chicago);
    sortedChicGTA = chicago;
    sortByRobbery(chicago); 
    sortChicRob =chicago;
    sortByTheft(chicago);
    sortChicThef = chicago;
    
    vector<City> sortedSeatacMur, sortedSaeGtA, sortedSeaRob, sortedSeaThef;
    sortByMurder(seattle);
    sortedSeatacMur = chicago;
    sortByGtA(seattle);
    sortedSaeGtA = seattle;
    sortByRobbery(seattle);
    sortedSeaRob = seattle;
    sortByTheft(seattle);
    sortedSeaThef = seattle;

    vector<City> sortedNewYorkMur, sortedNewYorkGTA, sortedNewYorkRob, sortedNewYorkThef;
    sortByMurder(newyork);
    sortedNewYorkMur = newyork;
    sortByGtA(newyork);
    sortedNewYorkGTA = newyork;
    sortByRobbery(newyork);
    sortedNewYorkRob = newyork;
    sortByTheft(newyork);
    sortedNewYorkThef = newyork;


    vector<City> sortedSacMur, sortedSacGTA, sortedSacRob, sortedSacThef;
    sortByMurder(sacramento);
    sortedSacMur = sacramento;
    sortByGtA(sacramento);
    sortedSacGTA = sacramento;
    sortByRobbery(sacramento);
    sortedSacRob =sacramento;
    sortByTheft(sacramento);
    sortedSacThef = sacramento;

    printSidetoSide(austin, chicago);

   
return 0;
}   // End of main

//function header
//prints each files information to the terminal
void readFile(ifstream &openAus, vector<City> &cityName)
{
    string mnth; 
    int avgTmp, numMur, nmGtA, numRob, numThft;
    int counter = 0;
    while(counter < 12)
    {
        openAus >> mnth >> avgTmp >> numMur >> nmGtA >> numRob >> numThft ;   // Reads one line from txt file
        cityName.push_back(City(mnth,avgTmp,numMur,nmGtA,numRob,numThft));   
        cout << mnth << " " << avgTmp << " " << numMur << " " << nmGtA << " " << numRob << " " <<  numThft << endl;  
        counter++;
    }
}

//sorts each city's data by crime - murder
void sortByMurder(vector<City>& name)
{
    for(int i = 0; i < name.size(); i++)
    {
        int curmin = name[i].getNumMurder();
        int curminIndex = i;
        for(int j = 0; j < name.size(); j++)
        {
            curmin = name[i].getNumMurder();
            curminIndex = i;
            if(curmin > name[j].getNumMurder())
            {
                City temp = name[i];
                name[i] = name[j];
                name[j] = temp;
            }
         }

    }

}

void sortByGtA(vector<City> name)
{
    for(int i = 0; i < name.size(); i++)
    {
        int curmin = name[i].getNumGtA();
        int curminIndex = i;
        for(int j = 0; j < name.size(); j++)
        {
            curmin = name[i].getNumGtA();
            curminIndex = i;
            if(curmin > name[j].getNumGtA())
            {
                City temp = name[i];
                name[i] = name[j];
                name[j] = temp;
            }
         }

    }

}

void sortByRobbery(vector<City> name)
{
    for(int i = 0; i < name.size(); i++)
    {
        int curmin = name[i].getNumRobbery();
        int curminIndex = i;
        for(int j = 0; j < name.size(); j++)
        {
            curmin = name[i].getNumRobbery();
            curminIndex = i;
            if(curmin > name[j].getNumRobbery())
            {
                City temp = name[i];
                name[i] = name[j];
                name[j] = temp;
            }
         }

    }

}

void sortByTheft(vector<City> name)
{
    for(int i = 0; i < name.size(); i++)
    {
        int curmin = name[i].getNumTheft();
        int curminIndex = i;
        for(int j = 0; j < name.size(); j++)
        {
            curmin = name[i].getNumTheft();
            curminIndex = i;
            if(curmin > name[j].getNumTheft())
            {
                City temp = name[i];
                name[i] = name[j];
                name[j] = temp;
            }
         }

    }

}

//prints 
void printVec(vector<City> name)
{
    for(int i = 0; i < name.size(); i++)
    {
        cout << name[i].getMonth() << " " << name[i].getNumTemp() << " " << name[i].getNumMurder() << " " << name[i].getNumGtA() << " " << name[i].getNumRobbery() << " " << name[i].getNumTheft() << endl;
    }
}

void printSidetoSide(vector<City> city1, vector<City> city2)
{
    for(int i = 0; i < city1.size(); i++)
    {
        cout << setw(10) << city1[i].getMonth() << "    " << setw(4) << city1[i].getNumTemp() << "    " << setw(4) << city1[i].getNumMurder() << "    " << setw(4) << city1[i].getNumGtA() << "   " << setw(4) << city1[i].getNumRobbery() << "   " << setw(4) << city1[i].getNumTheft() << "    ";
        cout << setw(10) << city2[i].getMonth() << "    " << setw(4) << city2[i].getNumTemp() <<  "    " << setw(4) << city2[i].getNumMurder() << "   " << setw(4) << city2[i].getNumGtA() << "   " << setw(4) << city2[i].getNumRobbery() << "    " << setw(4) << city2[i].getNumTheft() << endl;
    }
}