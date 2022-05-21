// CS 172 - 1 Final Project
// Josh Creasey, Tianna Mitzel, Angel Ainembabazi
// The Effects of Weather on Crime in Major Cities

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <fstream>
#include "city.h"
using namespace std;

void readFile(ifstream &openAus, vector<City> &cityName);

void sortByMurder(vector<City> &name);

void sortByGtA(vector<City> name);

void sortByRobbery(vector<City> name);

void sortByTheft(vector<City> name);

void printVec(vector<City> name);

void printSidetoSide(vector<City> city1, vector<City> city2);

int main()
{
    string cityName; // name of city being observed
    int avgTemp;     // Average temperature of the city in a given month
    int cityPop;     // population of the city
    int numRobbery;  // robberies in a given month
    int numGtA;      // grand theft auto in a given month
    int numMurder;   // murder in a given month
    int numTheft;    // theft in a given month
    // int numVandalism; //trespassing in a given month
    string month;
    int counter = 0;

    ifstream openAus("Austin.txt");
    vector<City> austin;
    cout << "--------------------------------" << endl;
    cout << "AUSTIN, TX  Population: 965,872" << endl;
    cout << "--------------------------------" << endl;
    readFile(openAus, austin);
    // sortbyMurder(austin);
    // for(int i = 0; i < 12; i++)
    // {
    //     cout << austin[i].getNumTemp() << " " << austin[i].getNumMurder() << " " << austin[i].getNumGtA() << " " << austin[i].getNumRobbery() << " " << austin[i].getNumTheft() << endl;
    // }
    openAus.close();
    cout << endl;

    // sortbyMurder(austin);
    vector<City> sortedAusMur, sortedAusGtA, sortAusRob, sortAusThef;
    sortByMurder(austin);
    sortedAusMur = austin;
    sortByGtA(austin);
    sortedAusGtA = austin;
    sortByRobbery(austin);
    sortAusRob = austin;
    sortByTheft(austin);
    sortAusThef = austin;

    // //while()
    // newAus.close();

    ifstream openBoul("Boulder.txt");
    vector<City> boulder;
    cout << "--------------------------------" << endl;
    cout << "BOULDER, CO  Population: 108,777" << endl;
    cout << "--------------------------------" << endl;
    readFile(openBoul, boulder);
    openBoul.close();
    cout << endl;

    vector<City> sortedBouldMur, sortedBouldGtA, sortedBouldRob, sortedBouldThef;
    sortByMurder(boulder);
    sortedBouldMur = boulder;
    sortByGtA(boulder);
    sortedBouldGtA = boulder;
    sortByRobbery(boulder);
    sortedBouldRob = boulder;
    sortByTheft(boulder);
    sortedBouldThef = boulder;

    ifstream openCic("Chicago.txt");
    vector<City> chicago;
    cout << "------------------------------------" << endl;
    cout << "CHICAGO, IL  Population: 2.7 Million" << endl;
    cout << "------------------------------------" << endl;
    readFile(openCic, chicago);
    openCic.close();
    cout << endl;

    sortByMurder(chicago);
    vector<City> sortedChicMur, sortedChicGtA, sortChicRob, sortChicThef;
    sortedChicMur = chicago;
    sortByGtA(chicago);
    sortedChicGtA = chicago;
    sortByRobbery(chicago);
    sortChicRob = chicago;
    sortByTheft(chicago);
    sortChicThef = chicago;

    ifstream openNew("NewYork.txt");
    vector<City> newyork;
    cout << "------------------------------------" << endl;
    cout << "NEWYORK, NY  Population: 8.38 Million" << endl;
    cout << "------------------------------------" << endl;
    readFile(openNew, newyork);
    openNew.close();
    cout << endl;

    vector<City> sortedNewYorkMur, sortedNewYorkGtA, sortedNewYorkRob, sortedNewYorkThef;
    sortByMurder(newyork);
    sortedNewYorkMur = newyork;
    sortByGtA(newyork);
    sortedNewYorkGtA = newyork;
    sortByRobbery(newyork);
    sortedNewYorkRob = newyork;
    sortByTheft(newyork);
    sortedNewYorkThef = newyork;

    ifstream openSac("Sacramento.txt"); // reads file
    vector<City> sacramento;
    cout << "-----------------------------------" << endl;
    cout << "SACRAMENTO, CA  Population: 503,482" << endl;
    cout << "-----------------------------------" << endl;
    readFile(openSac, sacramento);
    openSac.close();
    cout << endl;

    vector<City> sortedSacMur, sortedSacGtA, sortedSacRob, sortedSacThef;
    sortByMurder(sacramento);
    sortedSacMur = sacramento;
    sortByGtA(sacramento);
    sortedSacGtA = sacramento;
    sortByRobbery(sacramento);
    sortedSacRob = sacramento;
    sortByTheft(sacramento);
    sortedSacThef = sacramento;

    ifstream openSea("Seattle.txt");
    vector<City> seattle;
    cout << "--------------------------------" << endl;
    cout << "SEATTLE, WA  Population: 741,251" << endl;
    cout << "--------------------------------" << endl;
    readFile(openSea, seattle);
    openSea.close();
    cout << endl
         << endl;

    vector<City> sortedSeatacMur, sortedSeaGtA, sortedSeaRob, sortedSeaThef;
    sortByMurder(seattle);
    sortedSeatacMur = chicago;
    sortByGtA(seattle);
    sortedSeaGtA = seattle;
    sortByRobbery(seattle);
    sortedSeaRob = seattle;
    sortByTheft(seattle);
    sortedSeaThef = seattle;

    ofstream allMur;
    allMur.open("AllCitiesByMurder.txt");
    for (int i = 0; i < 12; i++)
    {
        //allMur << "Austin, TX \n";
        allMur << "Austin, TX " << setw(10) << sortedAusMur[i].getMonth() << " " << setw(4) << sortedAusMur[i].getNumTemp() << " " << setw(4) << sortedAusMur[i].getNumMurder() << " ";
        // allMur << "Boulder, CO \n";
        allMur << "Boulder, CO " << setw(10) << sortedBouldMur[i].getMonth() << " " << setw(4) << sortedBouldMur[i].getNumTemp() << " " << setw(4) << sortedBouldMur[i].getNumMurder() << " ";
        //allMur << "Chicago, IL \n";
        allMur << "Chicago, IL " << setw(10) << sortedChicMur[i].getMonth() << " " << setw(4) << sortedChicMur[i].getNumTemp() << " " << setw(4) << sortedChicMur[i].getNumMurder() << " ";
        //allMur << "NewYork, NY \n";
        allMur << "NewYork, NY " << setw(10) << sortedNewYorkMur[i].getMonth() << " " << setw(4) << sortedNewYorkMur[i].getNumTemp() << " " << setw(4) << sortedNewYorkMur[i].getNumMurder() << " ";
        //allMur << "Sacramento, CA \n";
        allMur << "Sacramento, CA " << setw(10) << sortedSacMur[i].getMonth() << " " << setw(4) << sortedSacMur[i].getNumTemp() << " " << setw(4) << sortedSacMur[i].getNumMurder() << " ";
        //allMur << "Seattle, WA \n";
        allMur << "Seattle, WA " << setw(10) << sortedSeatacMur[i].getMonth() << " " << setw(4) << sortedSeatacMur[i].getNumTemp() << " " << setw(4) << sortedSeatacMur[i].getNumMurder() << endl;
    }

    //<< sortedAusGtA[i].getNumGtA() << " " << sortAusRob[i].getNumRobbery() << " " << sortAusThef[i].getNumTheft() << " ";
    ofstream allGtA;
    allGtA.open("AllCitiesByGtA.txt");
    for (int i = 0; i < 12; i++)
    {
        //allGtA << "Austin, TX \n";
        allGtA << sortedAusGtA[i].getMonth() << " " << sortedAusGtA[i].getNumTemp() << " " << sortedAusGtA[i].getNumGtA() << " ";
        //allGtA << "Boulder, CO \n";
        allGtA << sortedBouldGtA[i].getMonth() << " " << sortedBouldGtA[i].getNumTemp() << " " << sortedBouldGtA[i].getNumGtA() << " ";
        //allGtA << "Chicago, IL \n";
        allGtA << sortedChicGtA[i].getMonth() << " " << sortedChicGtA[i].getNumTemp() << " " << sortedChicGtA[i].getNumGtA() << " ";
        //allGtA << "NewYork, NY\n";
        allGtA << sortedNewYorkGtA[i].getMonth() << " " << sortedNewYorkGtA[i].getNumTemp() << " " << sortedNewYorkGtA[i].getNumGtA() << " ";
        //allGtA << "Sacramento, CA\n";
        allGtA << sortedSacGtA[i].getMonth() << " " << sortedSacGtA[i].getNumTemp() << " " << sortedSacGtA[i].getNumGtA() << " ";
        //allGtA << "Seattle, WA \n";
        allGtA << sortedSeaGtA[i].getMonth() << " " << sortedSeaGtA[i].getNumTemp() << " " << sortedSeaGtA[i].getNumGtA() << endl;
    }

    ofstream allRobbery;
    allRobbery.open("AllCitiesByRobbery.txt");
    for (int i = 0; i < 12; i++)
    {
        //allRobbery << "Austin, TX \n";
        allRobbery << sortAusRob[i].getMonth() << " " << sortAusRob[i].getNumTemp() << " " << sortAusRob[i].getNumRobbery() << " ";
        //allRobbery << "Boulder, CO \n";
        allRobbery << sortedBouldRob[i].getMonth() << " " << sortedBouldRob[i].getNumTemp() << " " << sortedBouldRob[i].getNumRobbery() << " ";
        //allRobbery << "Chicago, IL \n";
        allRobbery << sortChicRob[i].getMonth() << " " << sortChicRob[i].getNumTemp() << " " << sortChicRob[i].getNumRobbery() << " ";
        //allRobbery << "NewYork, NY \n";
        allRobbery << sortedNewYorkRob[i].getMonth() << " " << sortedNewYorkRob[i].getNumTemp() << " " << sortedNewYorkRob[i].getNumRobbery() << " ";
        //allRobbery << "Sacramento, CA \n";
        allRobbery << sortedSacRob[i].getMonth() << " " << sortedSacRob[i].getNumTemp() << " " << sortedSacRob[i].getNumRobbery() << " ";
        //allRobbery << "Seattle, WA \n";
        allRobbery << sortedSeaRob[i].getMonth() << " " << sortedSeaRob[i].getNumTemp() << " " << sortedSeaRob[i].getNumRobbery() << endl;
    }
    cout << endl;
    ofstream allTheft;
    allTheft.open("AllCitiesByTheft.txt");
    for (int i = 0; i < 12; i++)
    {
        //allTheft << "Austin, TX \n";
        allTheft << sortAusThef[i].getMonth() << " " << sortAusThef[i].getNumTemp() << " " << sortAusThef[i].getNumTheft() << " ";
        //allTheft << "Boulder, CO \n";
        allTheft << sortedBouldMur[i].getMonth() << " " << sortedBouldMur[i].getNumTemp() << " " << sortedBouldMur[i].getNumTheft() << " " ;
        //allTheft << "Chicago, IL \n";
        allTheft << sortedChicMur[i].getMonth() << " " << sortedChicMur[i].getNumTemp() << " " << sortedChicMur[i].getNumTheft() << " ";
        //allTheft << "NewYork, NY \n";
        allTheft << sortedNewYorkMur[i].getMonth() << " " << sortedNewYorkMur[i].getNumTemp() << " " << sortedNewYorkMur[i].getNumTheft() << " ";
        //allTheft << "Sacramento, CA \n";
        allTheft << sortedSacMur[i].getMonth() << " " << sortedSacMur[i].getNumTemp() << " " << sortedSacMur[i].getNumTheft() << " ";
        //allTheft << "Seattle, WA \n";
        allTheft << sortedSeatacMur[i].getMonth() << " " << sortedSeatacMur[i].getNumTemp() << " " << sortedSeatacMur[i].getNumTheft() << endl;
    }
   
   //add a cout statement?
    printSidetoSide(austin, chicago);

    return 0;
} // End of main

// function header
// prints each files information to the terminal
void readFile(ifstream &openAus, vector<City> &cityName)
{
    string mnth;
    int avgTmp, numMur, nmGtA, numRob, numThft;
    int counter = 0;
    while (counter < 12)
    {
        openAus >> mnth >> avgTmp >> numMur >> nmGtA >> numRob >> numThft; // Reads one line from txt file
        cityName.push_back(City(mnth, avgTmp, numMur, nmGtA, numRob, numThft));
        cout << mnth << " " << avgTmp << " " << numMur << " " << nmGtA << " " << numRob << " " << numThft << endl;
        counter++;
    }
}

// sorts each city's data by crime - murder
void sortByMurder(vector<City> &name)
{
    for (int i = 0; i < name.size(); i++)
    {
        int curmin = name[i].getNumMurder();
        int curminIndex = i;
        for (int j = 0; j < name.size(); j++)
        {
            curmin = name[i].getNumMurder();
            curminIndex = i;
            if (curmin > name[j].getNumMurder())
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
    for (int i = 0; i < name.size(); i++)
    {
        int curmin = name[i].getNumGtA();
        int curminIndex = i;
        for (int j = 0; j < name.size(); j++)
        {
            curmin = name[i].getNumGtA();
            curminIndex = i;
            if (curmin > name[j].getNumGtA())
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
    for (int i = 0; i < name.size(); i++)
    {
        int curmin = name[i].getNumRobbery();
        int curminIndex = i;
        for (int j = 0; j < name.size(); j++)
        {
            curmin = name[i].getNumRobbery();
            curminIndex = i;
            if (curmin > name[j].getNumRobbery())
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
    for (int i = 0; i < name.size(); i++)
    {
        int curmin = name[i].getNumTheft();
        int curminIndex = i;
        for (int j = 0; j < name.size(); j++)
        {
            curmin = name[i].getNumTheft();
            curminIndex = i;
            if (curmin > name[j].getNumTheft())
            {
                City temp = name[i];
                name[i] = name[j];
                name[j] = temp;
            }
        }
    }
}

// prints
void printVec(vector<City> name)
{
    for (int i = 0; i < name.size(); i++)
    {
        cout << name[i].getMonth() << " " << name[i].getNumTemp() << " " << name[i].getNumMurder() << " " << name[i].getNumGtA() << " " << name[i].getNumRobbery() << " " << name[i].getNumTheft() << endl;
    }
}

void printSidetoSide(vector<City> city1, vector<City> city2)
{
    for (int i = 0; i < city1.size(); i++)
    {
        cout << setw(10) << city1[i].getMonth() << "    " << setw(4) << city1[i].getNumTemp() << "    " << setw(4) << city1[i].getNumMurder() << "    " << setw(4) << city1[i].getNumGtA() << "   " << setw(4) << city1[i].getNumRobbery() << "   " << setw(4) << city1[i].getNumTheft() << "    ";
        cout << setw(10) << city2[i].getMonth() << "    " << setw(4) << city2[i].getNumTemp() << "    " << setw(4) << city2[i].getNumMurder() << "   " << setw(4) << city2[i].getNumGtA() << "   " << setw(4) << city2[i].getNumRobbery() << "    " << setw(4) << city2[i].getNumTheft() << endl;
    }
}