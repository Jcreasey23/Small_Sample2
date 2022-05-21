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

///////////////////////
// Start of Main
//////////////////////
int main()
{
    string cityName; // name of city being observed
    int avgTemp;     // Average temperature of the city in a given month
    int cityPop;     // population of the city
    int numRobbery;  // robberies in a given month
    int numGtA;      // grand theft auto in a given month
    int numMurder;   // murder in a given month
    int numTheft;    // theft in a given month
    string month;    // Month of the Year
    int counter = 0;

    ifstream openAus("Austin.txt");                     // Reads file with Austin Data
    vector<City> austin;                                // Initializes vector of city objects for Austin's data
    cout << "--------------------------------" << endl;
    cout << "AUSTIN, TX  Population: 965,872" << endl;
    cout << "--------------------------------" << endl;
    readFile(openAus, austin);                          // Reads file and adds lines of file to austin vector
    openAus.close();                                    // Closes the file
    cout << endl;

    vector<City> sortedAusMur, sortedAusGtA, sortAusRob, sortAusThef;       // Initializes vectors to store data sorted highest to lowest for a given crime
    sortByMurder(austin);                                                   // Sorts city data by murder
    sortedAusMur = austin;                                                  // Places sorted data into murder vector
    sortByGtA(austin);                                                      // Sorts city data by Grand Theft Auto
    sortedAusGtA = austin;                                                  // Places sorted data into GTA vector
    sortByRobbery(austin);                                                  // Sorts city data by Robbery
    sortAusRob = austin;                                                    // Places sorted data into Robbery vector
    sortByTheft(austin);                                                    // Sorts city data by Theft
    sortAusThef = austin;                                                   // Places sorted data into Theft vector

    ifstream openBoul("Boulder.txt");                   // Reads file with Boulder data
    vector<City> boulder;                                // Initializes vector of city objects for boulder's data
    cout << "--------------------------------" << endl;
    cout << "BOULDER, CO  Population: 108,777" << endl;
    cout << "--------------------------------" << endl;
    readFile(openBoul, boulder);                          // Reads file and adds lines of file to boulder vector
    openBoul.close();                                    // Closes the file
    cout << endl;

    vector<City> sortedBouldMur, sortedBouldGtA, sortedBouldRob, sortedBouldThef;       // Initializes vectors to store data sorted highest to lowest for a given crime
    sortByMurder(boulder);                                                   // Sorts city data by murder
    sortedBouldMur = boulder;                                                  // Places sorted data into murder vector
    sortByGtA(boulder);                                                      // Sorts city data by Grand Theft Auto
    sortedBouldGtA = boulder;                                                  // Places sorted data into GTA vector
    sortByRobbery(boulder);                                                  // Sorts city data by Robbery
    sortedBouldRob = boulder;                                                    // Places sorted data into Robbery vector
    sortByTheft(boulder);                                                    // Sorts city data by Theft
    sortedBouldThef = boulder;                                                   // Places sorted data into Theft vector

    ifstream openCic("Chicago.txt");                      // Reads file with Chicago data
    vector<City> chicago;                                // Initializes vector of city objects for chicago's data
    cout << "------------------------------------" << endl;
    cout << "CHICAGO, IL  Population: 2.7 Million" << endl;
    cout << "------------------------------------" << endl;
    readFile(openCic, chicago);                          // Reads file and adds lines of file to chicago vector
    openCic.close();                                    // Closes the file
    cout << endl;

    vector<City> sortedChicMur, sortedChicGtA, sortChicRob, sortChicThef;       // Initializes vectors to store data sorted highest to lowest for a given crime
    sortByMurder(chicago);                                                      // Sorts city data by murder
    sortedChicMur = chicago;                                                  // Places sorted data into murder vector
    sortByGtA(chicago);                                                      // Sorts city data by Grand Theft Auto
    sortedChicGtA = chicago;                                                  // Places sorted data into GTA vector
    sortByRobbery(chicago);                                                  // Sorts city data by Robbery
    sortChicRob = chicago;                                                    // Places sorted data into Robbery vector
    sortByTheft(chicago);                                                    // Sorts city data by Theft
    sortChicThef = chicago;                                                   // Places sorted data into Theft vector

    ifstream openNew("NewYork.txt");                        // Reads file with New York data
    vector<City> newyork;                                   // initializes vector of city objects for New York's data
    cout << "------------------------------------" << endl;
    cout << "NEWYORK, NY  Population: 8.38 Million" << endl;
    cout << "------------------------------------" << endl;
    readFile(openNew, newyork);                             // Reads file and adds lines of file to New York Vector
    openNew.close();                                        // Closes the file
    cout << endl;

    vector<City> sortedNewYorkMur, sortedNewYorkGtA, sortedNewYorkRob, sortedNewYorkThef;       // Initializes vectors to store data sorted highest to lowest for a given crime
    sortByMurder(newyork);                                                      // Sorts city data by murder
    sortedNewYorkMur = newyork;                                                  // Places sorted data into murder vector
    sortByGtA(newyork);                                                      // Sorts city data by Grand Theft Auto
    sortedNewYorkGtA = newyork;                                                  // Places sorted data into GTA vector
    sortByRobbery(newyork);                                                  // Sorts city data by Robbery
    sortedNewYorkRob = newyork;                                                    // Places sorted data into Robbery vector
    sortByTheft(newyork);                                                    // Sorts city data by Theft
    sortedNewYorkThef = newyork;                                                   // Places sorted data into Theft vector

    ifstream openSac("Sacramento.txt");                     // Reads file with Sacramento data
    vector<City> sacramento;                                // initializes vector of city objects for Sacramento's data
    cout << "-----------------------------------" << endl;
    cout << "SACRAMENTO, CA  Population: 503,482" << endl;
    cout << "-----------------------------------" << endl;
    readFile(openSac, sacramento);                          // Reads file and adds lines of the file to Sacramento vector
    openSac.close();                                        // Closes the file
    cout << endl;

    vector<City> sortedSacMur, sortedSacGtA, sortedSacRob, sortedSacThef;       // Initializes vectors to store data sorted highest to lowest for a given crime
    sortByMurder(sacramento);                                                      // Sorts city data by murder
    sortedSacMur = sacramento;                                                  // Places sorted data into murder vector
    sortByGtA(sacramento);                                                      // Sorts city data by Grand Theft Auto
    sortedSacGtA = sacramento;                                                  // Places sorted data into GTA vector
    sortByRobbery(sacramento);                                                  // Sorts city data by Robbery
    sortedSacRob = sacramento;                                                    // Places sorted data into Robbery vector
    sortByTheft(sacramento);                                                    // Sorts city data by Theft
    sortedSacThef = sacramento;                                                   // Places sorted data into Theft vector

    ifstream openSea("Seattle.txt");                    // Reads file with Seattle data
    vector<City> seattle;                               // initializes vector of city objects for Seattle's data
    cout << "--------------------------------" << endl;
    cout << "SEATTLE, WA  Population: 741,251" << endl;
    cout << "--------------------------------" << endl;
    readFile(openSea, seattle);                         // Reads file and adds lines of the file to Seattle vector
    openSea.close();                                    // Closes the file
    cout << endl
         << endl;

    vector<City> sortedSeatacMur, sortedSeaGtA, sortedSeaRob, sortedSeaThef;        // Initializes vectors to store data sorted highest to lowest for a given crime
    sortByMurder(seattle);                                                      // Sorts city data by murder
    sortedSeatacMur = chicago;                                                  // Places sorted data into murder vector
    sortByGtA(seattle);                                                      // Sorts city data by Grand Theft Auto
    sortedSeaGtA = seattle;                                                  // Places sorted data into GTA vector
    sortByRobbery(seattle);                                                  // Sorts city data by Robbery
    sortedSeaRob = seattle;                                                    // Places sorted data into Robbery vector
    sortByTheft(seattle);                                                    // Sorts city data by Theft
    sortedSeaThef = seattle;                                                   // Places sorted data into Theft vector

    ofstream allMur;                            // initializes file output
    allMur.open("AllCitiesByMurder.txt");       // opens file for output of all murder data for each city as well as temperature
    for (int i = 0; i < 12; i++)
    {
        //allMur << "Austin, TX \n";
        allMur << "Austin, TX " << setw(10) << sortedAusMur[i].getMonth() << " " << setw(4) << sortedAusMur[i].getNumTemp() << " " << setw(4) << sortedAusMur[i].getNumMurder() << " ";         // Line adds month, temp, and murders for a given month in a city to output file
        // allMur << "Boulder, CO \n";
        allMur << "Boulder, CO " << setw(10) << sortedBouldMur[i].getMonth() << " " << setw(4) << sortedBouldMur[i].getNumTemp() << " " << setw(4) << sortedBouldMur[i].getNumMurder() << " ";         // Line adds month, temp, and murders for a given month in a city to output file
        //allMur << "Chicago, IL \n";
        allMur << "Chicago, IL " << setw(10) << sortedChicMur[i].getMonth() << " " << setw(4) << sortedChicMur[i].getNumTemp() << " " << setw(4) << sortedChicMur[i].getNumMurder() << " ";         // Line adds month, temp, and murders for a given month in a city to output file
        //allMur << "NewYork, NY \n";
        allMur << "NewYork, NY " << setw(10) << sortedNewYorkMur[i].getMonth() << " " << setw(4) << sortedNewYorkMur[i].getNumTemp() << " " << setw(4) << sortedNewYorkMur[i].getNumMurder() << " ";         // Line adds month, temp, and murders for a given month in a city to output file
        //allMur << "Sacramento, CA \n";
        allMur << "Sacramento, CA " << setw(10) << sortedSacMur[i].getMonth() << " " << setw(4) << sortedSacMur[i].getNumTemp() << " " << setw(4) << sortedSacMur[i].getNumMurder() << " ";         // Line adds month, temp, and murders for a given month in a city to output file
        //allMur << "Seattle, WA \n";
        allMur << "Seattle, WA " << setw(10) << sortedSeatacMur[i].getMonth() << " " << setw(4) << sortedSeatacMur[i].getNumTemp() << " " << setw(4) << sortedSeatacMur[i].getNumMurder() << endl;         // Line adds month, temp, and murders for a given month in a city to output file
    }

    
    ofstream allGtA;                            // initializes file output
    allGtA.open("AllCitiesByGtA.txt");       // opens file for output of all Grand Theft Auto data for each city as well as temperature
    for (int i = 0; i < 12; i++)
    {
        //allGtA << "Austin, TX \n";
        allGtA << "Austin, TX " << setw(10) << sortedAusGtA[i].getMonth() << " " << setw(4) << sortedAusGtA[i].getNumTemp() << " " << setw(4) << sortedAusGtA[i].getNumGtA() << " ";         // Line adds month, temp, and Grand Theft Auto for a given month in a city to output file
        //allGtA << "Boulder, CO \n";
        allGtA << "Boulder, CO " << setw(10) << sortedBouldGtA[i].getMonth() << " " << setw(4) << sortedBouldGtA[i].getNumTemp() << " " << setw(4) << sortedBouldGtA[i].getNumGtA() << " ";         // Line adds month, temp, and Grand Theft Auto for a given month in a city to output file
        //allGtA << "Chicago, IL \n";
        allGtA << "Chicago, IL " << setw(10) << sortedChicGtA[i].getMonth() << " " << setw(4) << sortedChicGtA[i].getNumTemp() << " " << setw(4) << sortedChicGtA[i].getNumGtA() << " ";         // Line adds month, temp, and Grand Theft Auto for a given month in a city to output file
        //allGtA << "NewYork, NY\n";
        allGtA << "NewYork, NY " << setw(10) << sortedNewYorkGtA[i].getMonth() << " " << setw(4) << sortedNewYorkGtA[i].getNumTemp() << " " << setw(4) << sortedNewYorkGtA[i].getNumGtA() << " ";         // Line adds month, temp, and Grand Theft Auto for a given month in a city to output file
        //allGtA << "Sacramento, CA\n";
        allGtA << "Sacramento, CA " << setw(10) << sortedSacGtA[i].getMonth() << " " << setw(4) << sortedSacGtA[i].getNumTemp() << " " << setw(4) << sortedSacGtA[i].getNumGtA() << " ";         // Line adds month, temp, and Grand Theft Auto for a given month in a city to output file
        //allGtA << "Seattle, WA \n";
        allGtA << "Seattle, WA " << setw(10) << sortedSeaGtA[i].getMonth() << " " << setw(4) << sortedSeaGtA[i].getNumTemp() << " " << setw(4) << sortedSeaGtA[i].getNumGtA() << endl;         // Line adds month, temp, and Grand Theft Auto for a given month in a city to output file
    }

    ofstream allRobbery;                            // initializes file output
    allRobbery.open("AllCitiesByRobbery.txt");       // opens file for output of all Robbery data for each city as well as temperature
    for (int i = 0; i < 12; i++)
    {
        //allRobbery << "Austin, TX \n";
        allRobbery << "Austin, TX " << setw(10) << sortAusRob[i].getMonth() << " " << setw(4) << sortAusRob[i].getNumTemp() << " " << setw(4) << sortAusRob[i].getNumRobbery() << " ";         // Line adds month, temp, and Robberies for a given month in a city to output file
        //allRobbery << "Boulder, CO \n";
        allRobbery << "Boulder, CO " << setw(10) << sortedBouldRob[i].getMonth() << " " << setw(4) << sortedBouldRob[i].getNumTemp() << " " << setw(4) << sortedBouldRob[i].getNumRobbery() << " ";         // Line adds month, temp, and Robberies for a given month in a city to output file
        //allRobbery << "Chicago, IL \n";
        allRobbery << "Chicago, IL " << setw(10) << sortChicRob[i].getMonth() << " " << setw(4) << sortChicRob[i].getNumTemp() << " " << setw(4) << sortChicRob[i].getNumRobbery() << " ";         // Line adds month, temp, and Robberies for a given month in a city to output file
        //allRobbery << "NewYork, NY \n";
        allRobbery << "NewYork, NY " << setw(10) << sortedNewYorkRob[i].getMonth() << " " << setw(4) << sortedNewYorkRob[i].getNumTemp() << " " << setw(4) << sortedNewYorkRob[i].getNumRobbery() << " ";         // Line adds month, temp, and Robberies for a given month in a city to output file
        //allRobbery << "Sacramento, CA \n";
        allRobbery << "Sacramento, CA " << setw(10) << sortedSacRob[i].getMonth() << " " << setw(4) << sortedSacRob[i].getNumTemp() << " " << setw(4) << sortedSacRob[i].getNumRobbery() << " ";         // Line adds month, temp, and Robberies for a given month in a city to output file
        //allRobbery << "Seattle, WA \n";
        allRobbery << "Seattle, WA " << setw(10) << sortedSeaRob[i].getMonth() << " " << setw(4) << sortedSeaRob[i].getNumTemp() << " " << setw(4) << sortedSeaRob[i].getNumRobbery() << endl;         // Line adds month, temp, and Robberies for a given month in a city to output file
    }
    cout << endl;

    ofstream allTheft;                            // initializes file output
    allTheft.open("AllCitiesByTheft.txt");       // opens file for output of all Theft data for each city as well as temperature
    for (int i = 0; i < 12; i++)
    {
        //allTheft << "Austin, TX \n";
        allTheft << "Austin, TX " << setw(10) << sortAusThef[i].getMonth() << " " << setw(4) << sortAusThef[i].getNumTemp() << " " << setw(4) << sortAusThef[i].getNumTheft() << " ";         // Line adds month, temp, and Theft for a given month in a city to output file
        //allTheft << "Boulder, CO \n";
        allTheft << "Boulder, CO " << setw(10) << sortedBouldMur[i].getMonth() << " " << setw(4) << sortedBouldMur[i].getNumTemp() << " " << setw(4) << sortedBouldMur[i].getNumTheft() << " " ;         // Line adds month, temp, and Theft for a given month in a city to output file
        //allTheft << "Chicago, IL \n";
        allTheft << "Chicago, IL " << setw(10) << sortedChicMur[i].getMonth() << " " << setw(4) << sortedChicMur[i].getNumTemp() << " " << setw(4) << sortedChicMur[i].getNumTheft() << " ";         // Line adds month, temp, and Theft for a given month in a city to output file
        //allTheft << "NewYork, NY \n";
        allTheft << "NewYork, NY " << setw(10) << sortedNewYorkMur[i].getMonth() << " " << setw(4) << sortedNewYorkMur[i].getNumTemp() << " " << setw(4) << sortedNewYorkMur[i].getNumTheft() << " ";         // Line adds month, temp, and Theft for a given month in a city to output file
        //allTheft << "Sacramento, CA \n";
        allTheft << "Sacramento, CA " << setw(10) << sortedSacMur[i].getMonth() << " " << setw(4) << sortedSacMur[i].getNumTemp() << " " << setw(4) << sortedSacMur[i].getNumTheft() << " ";         // Line adds month, temp, and Theft for a given month in a city to output file
        //allTheft << "Seattle, WA \n";
        allTheft << "Seattle, WA " << setw(10) << sortedSeatacMur[i].getMonth() << " " << setw(4) << sortedSeatacMur[i].getNumTemp() << " " << setw(4) << sortedSeatacMur[i].getNumTheft() << endl;         // Line adds month, temp, and Theft for a given month in a city to output file
    }
   
    cout << " Austin, Texas                                          Chicago, Illinois " << endl;
    printSidetoSide(austin, chicago);   // Prints info side by side

    return 0;
} 
//////////////////////////
// End of main
/////////////////////////

// readFile function passes in a file input avriable and and vector of a City class type
// function initializes data points found in the city class files then adds them as one continuous line to a vector found in main
// prints each files information to the terminal
// This function will only read 12 lines as the files only contain 12 months/ lines of data
void readFile(ifstream &openAus, vector<City> &cityName)
{
    string mnth;
    int avgTmp, numMur, nmGtA, numRob, numThft;
    int counter = 0;
    while (counter < 12)
    {
        openAus >> mnth >> avgTmp >> numMur >> nmGtA >> numRob >> numThft; // Reads one line from txt file
        cityName.push_back(City(mnth, avgTmp, numMur, nmGtA, numRob, numThft)); // Adds line to vector
        cout << mnth << " " << avgTmp << " " << numMur << " " << nmGtA << " " << numRob << " " << numThft << endl; // Prints line to terminal
        counter++;
    }
}

// sort by murder function passes in a vector of a City class type
// function sorts a vector specifically by number of murders from highest to lowest
// utilizes basic structure of textbook's basic sorting function
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

// sort by GTA function passes in a vector of a City class type
// function sorts a vector specifically by number of stolen vehicles (Grand Theft Auto) from highest to lowest
// utilizes basic structure of textbook's basic sorting function
// sorts each city's data by crime - Grand theft auto
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

// sort by Robbery function passes in a vector of a City class type
// function sorts a vector specifically by number of Robberies from highest to lowest
// utilizes basic structure of textbook's basic sorting function
// sorts each city's data by crime - Robbery
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

// sort by Theft function passes in a vector of a City class type
// function sorts a vector specifically by number of Theft from highest to lowest
// utilizes basic structure of textbook's basic sorting function
// sorts each city's data by crime - Theft
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

// print Vector function will rpint all elements in vector of city class
void printVec(vector<City> name)
{
    for (int i = 0; i < name.size(); i++)
    {
        cout << name[i].getMonth() << " " << name[i].getNumTemp() << " " << name[i].getNumMurder() << " " << name[i].getNumGtA() << " " << name[i].getNumRobbery() << " " << name[i].getNumTheft() << endl;
    }
}


// printSidetoSide function compares two cities data side by side so that Two cities may be comared
// Two separate vectors containing instances of different cities are passed in
// Both vectors are then printed next to each other
void printSidetoSide(vector<City> city1, vector<City> city2)
{
    for (int i = 0; i < city1.size(); i++)
    {
        cout << setw(10) << city1[i].getMonth() << "    " << setw(4) << city1[i].getNumTemp() << "    " << setw(4) << city1[i].getNumMurder() << "    " << setw(4) << city1[i].getNumGtA() << "   " << setw(4) << city1[i].getNumRobbery() << "   " << setw(4) << city1[i].getNumTheft() << "    ";
        cout << setw(10) << city2[i].getMonth() << "    " << setw(4) << city2[i].getNumTemp() << "    " << setw(4) << city2[i].getNumMurder() << "   " << setw(4) << city2[i].getNumGtA() << "   " << setw(4) << city2[i].getNumRobbery() << "    " << setw(4) << city2[i].getNumTheft() << endl;
    }
}