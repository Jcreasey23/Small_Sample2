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
    cout << "-------------------" << endl;
    cout << "BOULDER, CO  Population: 108,777" << endl;
    cout << "-------------------" << endl;
    readFile(openBoul,boulder);
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
    cout << "-------------------" << endl;
    cout << "CHICAGO, IL  Population: 2.7 Million" << endl;
    cout << "-------------------" << endl;
    readFile(openCic,chicago);
    openCic.close();
    cout << endl;

    sortByMurder(chicago);
    vector<City> sortedChicMur, sortedChicGtA, sortChicRob, sortChicThef;
    sortedChicMur = chicago;
    sortByGtA(chicago);
    sortedChicGtA = chicago;
    sortByRobbery(chicago); 
    sortChicRob =chicago;
    sortByTheft(chicago);
    sortChicThef = chicago;

    ifstream openNew("NewYork.txt");
    vector<City> newyork;
    cout << "-------------------" << endl;
    cout << "NEWYORK, NY  Population: 8.38 Million" << endl;
    cout << "-------------------" << endl;
    readFile(openNew,newyork);
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

    
    ifstream openSac("Sacramento.txt"); //reads file
    vector<City> sacramento; 
    cout << "-------------------" << endl;
    cout << "SACRAMENTO, CA  Population: 503,482" << endl;
    cout << "-------------------" << endl;
    readFile(openSac,sacramento);
    openSac.close();
    cout << endl;

    vector<City> sortedSacMur, sortedSacGtA, sortedSacRob, sortedSacThef;
    sortByMurder(sacramento);
    sortedSacMur = sacramento;
    sortByGtA(sacramento);
    sortedSacGtA = sacramento;
    sortByRobbery(sacramento);
    sortedSacRob =sacramento;
    sortByTheft(sacramento);
    sortedSacThef = sacramento;

    
    ifstream openSea("Seattle.txt");
    vector<City> seattle;
    cout << "-------------------" << endl;
    cout << "SEATTLE, WA  Population: 741,251" << endl;
    cout << "-------------------" << endl;
    readFile(openSea,seattle);
    openSea.close();
    cout << endl << endl;
    
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
    for(int i = 0; i < 12; i++)
    {
        allMur << sortedAusMur[i].getMonth() << sortedAusMur[i].getNumTemp() << " " << sortedAusMur[i].getNumMurder() << " " << sortedAusGtA[i].getNumGtA() << " " << sortAusRob[i].getNumRobbery() << " " << sortAusThef[i].getNumTheft() << " ";
        allMur << sortedBouldMur[i].getMonth() << sortedBouldMur[i].getNumTemp() << " " << sortedBouldMur[i].getNumMurder() << " " << sortedBouldMur[i].getNumGtA() << " " << sortedBouldMur[i].getNumRobbery() << " " << sortedBouldMur[i].getNumTheft() << " ";
        allMur << sortedChicMur[i].getMonth() << sortedChicMur[i].getNumTemp() << " " << sortedChicMur[i].getNumMurder() << " " << sortedChicMur[i].getNumGtA() << " " << sortedChicMur[i].getNumRobbery() << " " << sortedChicMur[i].getNumTheft() << " ";
        allMur << sortedNewYorkMur[i].getMonth() << sortedNewYorkMur[i].getNumTemp() << " " << sortedNewYorkMur[i].getNumMurder() << " " << sortedNewYorkMur[i].getNumGtA() << " " << sortedNewYorkMur[i].getNumRobbery() << " " << sortedNewYorkMur[i].getNumTheft() << " ";
        allMur << sortedSacMur[i].getMonth() << sortedSacMur[i].getNumTemp() << " " << sortedSacMur[i].getNumMurder() << " " << sortedSacMur[i].getNumGtA() << " " << sortedSacMur[i].getNumRobbery() << " " << sortedSacMur[i].getNumTheft() << " ";
        allMur << sortedSeatacMur[i].getMonth() << sortedSeatacMur[i].getNumTemp() << " " << sortedSeatacMur[i].getNumMurder() << " " << sortedSeatacMur[i].getNumGtA() << " " << sortedSeatacMur[i].getNumRobbery() << " " << sortedSeatacMur[i].getNumTheft() << endl;
    }

    // ofstream allGtA;
    // allGtA.open("AllCitiesByGtA.txt");
    // for(int i = 0; i < 12; i++)
    // {
    //     allGtA << sortedAusGtA[i].getMonth() << sortedAusGtA[i].getNumTemp() << " " << sortedAusGtA[i].getNumGtA() << " " << sortedAusGtA[i].getNumGtA() << " " << sortedAusGtA[i].getNumRobbery() << " " << sortedAusGtA[i].getNumTheft() << " ";
    //     allGtA << sortedBouldGtA[i].getMonth() << sortedBouldGtA[i].getNumTemp() << " " << sortedBouldGtA[i].getNumGtA() << " " << sortedBouldGtA[i].getNumGtA() << " " << sortedBouldGtA[i].getNumRobbery() << " " << sortedBouldGtA[i].getNumGtA() << " ";
    //     allGtA << sortedChicGtA[i].getMonth() << sortedChicGtA[i].getNumTemp() << " " << sortedChicGtA[i].getNumGtA() << " " << sortedChicGtA[i].getNumGtA() << " " << sortedChicGtA[i].getNumRobbery() << " " << sortedChicGtA[i].getNumTheft() << " ";
    //     allGtA << sortedNewYorkGtA[i].getMonth() << sortedNewYorkGtA[i].getNumTemp() << " " << sortedNewYorkGtA[i].getNumGtA() << " " << sortedNewYorkGtA[i].getNumGtA() << " " << sortedNewYorkMur[i].getNumRobbery() << " " << sortedNewYorkGtA[i].getNumTheft() << " ";
    //     allGtA << sortedSacGtA[i].getMonth() << sortedSacGtA[i].getNumTemp() << " " << sortedSacGtA[i].getNumGtA() << " " << sortedSacMur[i].getNumGtA() << " " << sortedSacGtA[i].getNumRobbery() << " " << sortedSacGtA[i].getNumTheft() << " ";
    //     allGtA  << sortedSeaGtA[i].getMonth() << sortedSeaGtA[i].getNumTemp() << " " << sortedSeaGtA[i].getNumGtA() << " " << sortedSeaGtA[i].getNumGtA() << " " << sortedSeaGtA[i].getNumRobbery() << " " << sortedSeaGtA[i].getNumTheft() << endl;
    // }

    // ofstream allRobbery;
    // allMur.open("AllCitiesByMurder.txt");
    // for(int i = 0; i < 12; i++)
    // {
    //     allRobbery << sortedAusMur[i].getMonth() << sortedAusMur[i].getNumTemp() << " " << sortedAusMur[i].getNumMurder() << " " << sortedAusGtA[i].getNumGtA() << " " << sortAusRob[i].getNumRobbery() << " " << sortAusThef[i].getNumTheft() << " ";
    //     allRobbery << sortedBouldMur[i].getMonth() << sortedBouldMur[i].getNumTemp() << " " << sortedBouldMur[i].getNumMurder() << " " << sortedBouldMur[i].getNumGtA() << " " << sortedBouldMur[i].getNumRobbery() << " " << sortedBouldMur[i].getNumTheft() << " ";
    //     allRobbery<< sortedChicMur[i].getMonth() << sortedChicMur[i].getNumTemp() << " " << sortedChicMur[i].getNumMurder() << " " << sortedChicMur[i].getNumGtA() << " " << sortedChicMur[i].getNumRobbery() << " " << sortedChicMur[i].getNumTheft() << " ";
    //     allRobbery << sortedNewYorkMur[i].getMonth() << sortedNewYorkMur[i].getNumTemp() << " " << sortedNewYorkMur[i].getNumMurder() << " " << sortedNewYorkMur[i].getNumGtA() << " " << sortedNewYorkMur[i].getNumRobbery() << " " << sortedNewYorkMur[i].getNumTheft() << " ";
    //     allRobbery << sortedSacMur[i].getMonth() << sortedSacMur[i].getNumTemp() << " " << sortedSacMur[i].getNumMurder() << " " << sortedSacMur[i].getNumGtA() << " " << sortedSacMur[i].getNumRobbery() << " " << sortedSacMur[i].getNumTheft() << " ";
    //     allRobbery << sortedSeatacMur[i].getMonth() << sortedSeatacMur[i].getNumTemp() << " " << sortedSeatacMur[i].getNumMurder() << " " << sortedSeatacMur[i].getNumGtA() << " " << sortedSeatacMur[i].getNumRobbery() << " " << sortedSeatacMur[i].getNumTheft() << endl;
    // }

    // ofstream allTheft;
    // allMur.open("AllCitiesByMurder.txt");
    // for(int i = 0; i < 12; i++)
    // {
    //     allTheft << sortedAusMur[i].getMonth() << sortedAusMur[i].getNumTemp() << " " << sortedAusMur[i].getNumMurder() << " " << sortedAusGtA[i].getNumGtA() << " " << sortAusRob[i].getNumRobbery() << " " << sortAusThef[i].getNumTheft() << " ";
    //     allTheft << sortedBouldMur[i].getMonth() << sortedBouldMur[i].getNumTemp() << " " << sortedBouldMur[i].getNumMurder() << " " << sortedBouldMur[i].getNumGtA() << " " << sortedBouldMur[i].getNumRobbery() << " " << sortedBouldMur[i].getNumTheft() << " ";
    //     allTheft << sortedChicMur[i].getMonth() << sortedChicMur[i].getNumTemp() << " " << sortedChicMur[i].getNumMurder() << " " << sortedChicMur[i].getNumGtA() << " " << sortedChicMur[i].getNumRobbery() << " " << sortedChicMur[i].getNumTheft() << " ";
    //     allTheft << sortedNewYorkMur[i].getMonth() << sortedNewYorkMur[i].getNumTemp() << " " << sortedNewYorkMur[i].getNumMurder() << " " << sortedNewYorkMur[i].getNumGtA() << " " << sortedNewYorkMur[i].getNumRobbery() << " " << sortedNewYorkMur[i].getNumTheft() << " ";
    //     allTheft << sortedSacMur[i].getMonth() << sortedSacMur[i].getNumTemp() << " " << sortedSacMur[i].getNumMurder() << " " << sortedSacMur[i].getNumGtA() << " " << sortedSacMur[i].getNumRobbery() << " " << sortedSacMur[i].getNumTheft() << " ";
    //     allTheft << sortedSeatacMur[i].getMonth() << sortedSeatacMur[i].getNumTemp() << " " << sortedSeatacMur[i].getNumMurder() << " " << sortedSeatacMur[i].getNumGtA() << " " << sortedSeatacMur[i].getNumRobbery() << " " << sortedSeatacMur[i].getNumTheft() << endl;
    // }
    


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