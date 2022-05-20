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

void sortbyMurder(vector<City>& name);

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
    cout << "AUSTIN, TX" << endl;
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

    // ofstream newAus;
    // newAus.open("SortedAustinMurder.txt");
    // for(int i = 0; i < 12; i++)
    // {
    //     newAus << austin[i].getNumTemp() << " " << austin[i].getNumMurder() << " " << austin[i].getNumGtA() << " " << austin[i].getNumRobbery() << " " << austin[i].getNumTheft() << endl;
    // }

    // //while()

    // newAus.close();

    ifstream openBoul("Boulder.txt");
    vector<City> boulder;
    cout << "-------------------" << endl;
    cout << "BOULDER, CO" << endl;
    cout << "-------------------" << endl;
    readFile(openBoul,boulder);
    openBoul.close();
    cout << endl;

    
    ifstream openCic("Chicago.txt");
    vector<City> chicago;
    cout << "-------------------" << endl;
    cout << "CHICAGO, IL" << endl;
    cout << "-------------------" << endl;
    readFile(openCic,chicago);
    openCic.close();
    cout << endl;

    ifstream openNew("NewYork.txt");
    vector<City> newyork;
    cout << "-------------------" << endl;
    cout << "NEWYORK, NY" << endl;
    cout << "-------------------" << endl;
    readFile(openNew,newyork);
    openNew.close();
    cout << endl;

    
    ifstream openSac("Sacramento.txt"); //reads file
    vector<City> sacramento; 
    cout << "-------------------" << endl;
    cout << "SACRAMENTO, CA" << endl;
    cout << "-------------------" << endl;
    readFile(openSac,sacramento);
    openSac.close();
    cout << endl;

    
    ifstream openSea("Seattle.txt");
    vector<City> seattle;
    cout << "-------------------" << endl;
    cout << "SEATTLE, WA" << endl;
    cout << "-------------------" << endl;
    readFile(openSea,seattle);
    openSea.close();
    cout << endl << endl;
 
    // vector<City> userIn1;
    // vector<City> userIn2;
    // cout << "Please Enter 2 cities to compare monthly data. *Caps sensitive*" << endl;
    // cout << "austin, boulder, chicago, newyork, sacramento, seattle" << endl;
    // cin >> userIn1;
    cout<<"########### TEST #############\n";
    printVec(austin);
    sortbyMurder(austin);
    cout<<"\n\n";
    printVec(austin);
    cout<<"############## TEST##########\n";
    vector<City> sortedAusMur;
    sortedAusMur = austin;
    cout << sortedAusMur[0].getMonth() << endl;
    printVec(sortedAusMur);

   
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
void sortbyMurder(vector<City>& name)
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

void sortbyGtA(vector<City> name)
{
    // Format labels here for columns

        for(int i = 0; i < name.size(); i++)
    {
        int curmin = name[i].getNumGtA();
        int curminIndex = i;
        for(int j = i + 1; j < name.size(); j++)
        {
            if(curmin > name[j].getNumGtA())
            {
                curmin = name[j].getNumGtA();
                curminIndex = j;
            }
        }
        if(curminIndex != i)
        {
            name[curminIndex] = name[i];
            name[i].set_GtA(curmin);
        }

    }

}

void sortbyRobbery(vector<City> name)
{
    // Format labels here for columns

        for(int i = 0; i < name.size(); i++)
    {
        int curmin = name[i].getNumRobbery();
        int curminIndex = i;
        for(int j = i + 1; j < name.size(); j++)
        {
            if(curmin > name[j].getNumRobbery())
            {
                curmin = name[j].getNumRobbery();
                curminIndex = j;
            }
        }
        if(curminIndex != i)
        {
            name[curminIndex] = name[i];
            name[i].set_Robbery(curmin);
        }

    }

}

void sortbyTheft(vector<City> name)
{
    // Format labels here for columns

        for(int i = 0; i < name.size(); i++)
    {
        int curmin = name[i].getNumTheft();
        int curminIndex = i;
        for(int j = i + 1; j < name.size(); j++)
        {
            if(curmin > name[j].getNumTheft())
            {
                curmin = name[j].getNumTheft();
                curminIndex = j;
            }
        }
        if(curminIndex != i)
        {
            name[curminIndex] = name[i];
            name[i].set_Theft(curmin);
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
        cout << city1[i].getMonth() << "    " << city1[i].getNumTemp() << "  " << city1[i].getNumMurder() << "    " <<city1[i].getNumGtA() << "   " << city1[i].getNumRobbery() << "   " << city1[i].getNumTheft() << " " << city2[i].getMonth() << "    "  << city2[i].getNumTemp() <<  "    " << city2[i].getNumMurder() << "   " << city2[i].getNumGtA() << "   " << city2[i].getNumRobbery() << " " << city2[i].getNumTheft() << endl;
    }
}