## Computer Science Final Project Proposal 
## What Effect Does Weather Have on Crime in Major Cities? 
## Josh Creasey, Tianna Mitzel, Angel Ainembabazi 


# Draft purpose of our project: Provide data that helps people decide on where to move depending on the information shared about each of these cities.#

# Summary of Problem: #
(how you will begin to approach the problem and anticipated challenges)
In our project, we hope to analyze crime data from four large cities in the United States as well as two smaller ones. (Larger than _ population, smaller than _ population.) We will look at three major crimes: murder, grand theft auto, and robbery, as well as three minor crimes: theft, vandalism, and trespassing. We hope to compare the effect of the average monthly temperature to the crime rates for each individual crime in various large and small cities. Finally, we hope to be able to predict when crime spikes in the cities we choose to study.

We analyzed crime and weather from four major cities and two smaller cities. The four major cities we analyzed are Austin, Chicago, New York and Seattle. The two smaller cities we analyzed are Boulder and Sacramento. We looked at three different major crimes and one minor crime. The major crimes that we compared are Murder, GTA and Robbery. The minor crime we looked at is Theft. We compared the statistics of each crime to differnt cities.

# Approaching the problem: #
Select four big and two small cities to observe crime data for month by month
Find crime data for various cities by month
Choose crimes to compare
Find temperature data for each city by month
Create .txt file with appropriate data for each city
Create appropriate classes
Anticipated Challenges
Finding sufficient data on specific crimes, particularly minor crimes, depending on the cities
How to display the data (either in graphs or numbers)

# Problem Definition: #
* Requirements:
    * Crime data for each city by month
    * Weather average for each city by month
    * Use class with both header and cpp files
    * Txt files to store initial data to be sorted and analyzed
    * Use different sorting functions to sort the data by crime
* What must it accomplish or provide? 
    * Provide an analysis of the relation between weather and crime patterns in some major big and small cities.
    * Provide an outline of data showing information on crime rates and weather patterns throughout the year in different cities
    * Provide evidence for students in the class for the relation between crime rates and weather patterns
* Assumptions? 
    * Ignoring different socio-economic sections of cities having higher or lower rates of crime - Looking at city as a whole
    * Assuming the weather is pretty consistent throughout each month (no big fluctuations)
    * Some attributes will be constant and others will change depending on the purpose of those attributes
* Predictions
    * Weather will have no correlation to rates of crime (Crime will not greatly fluctuate as the weather changes)
    * Cities that have more consistent weather will have more consistent crime rates opposed to cities with more drastic weather
    * Summer or warmer months will have more crime and Winter and colder months will have less crime
* Room for more correlations
    * Humidity?
    * Traffic?
    * Time of Day?

# Design of Project: #
Classes
Properties
Behaviors

UML Diagram
Class : City

Int avgTemp;            Average temperature of the city in a given month
String cityName;        Name of city being observed
Int numRobbery;         Robberies in a given month
Int numGta;             Grand theft auto in a given month
Int numMurder;          Murder in a given month
Int numTheft;           Theft in a given month
String month;           Name of each month in a year
String getcityName();   Returns city name.
Int getnumRobbery();    Returns number of robbery cases 
Int getNumGTA();        Returns number of grand theft auto cases
Int getnumMurder();     Returns number of murder cases 
Int getnumTheft();      Returns number of theft cases
Int getNumTemp();       Returns temperature in a given

The main cpp has sorting functions for each crime. The sorting functions sort from highest number of a specific crime to lowest number of that crime. It moves each row according to the crime that is being sorted. The main cpp also has a print vector and a way to print data from different cities side to side.

Possibly crime acts as child class of each city

# Possible Data to be used: #
## Big cities ##
* Seattle, Washington
https://data.seattle.gov/Public-Safety/Crime-Data/7qe4-t837 - Seattle Crime from 2008- Present
https://data.seattle.gov/d/7qe4-t837/visualization

Seattle Weather: https://www.currentresults.com/Weather/Washington/Places/seattle-temperatures-by-month-average.php 

* New York City, New York
New York Data: https://data.cityofnewyork.us/d/8h9b-rp9u/visualization 
New York Weather: https://www.currentresults.com/Weather/New-York/Places/new-york-city-temperatures-by-month-average.php 

* Austin, Texas
Murders in Austin : https://www.kxan.com/news/crime/map-where-have-austins-homicides-occurred-in-2021/ 
All Crime: https://data.austintexas.gov/d/fdj4-gpfu/visualization 
Weather in Austin: https://weatherspark.com/y/8004/Average-Weather-in-Austin-Texas-United-States-Year-Round

* Chicago, Illinois
Weather in Chicago - https://weatherspark.com/y/14091/Average-Weather-in-Chicago-Illinois-United-States-Year-Round#Figures-Temperature

Murder Chicago : https://graphics.suntimes.com/homicides/ 
All Crime : https://data.cityofchicago.org/d/qzdf-xmn8/visualization



## Smaller Cities ##
* Boulder, Colorado
Crime: violent crime
https://open-data.bouldercolorado.gov/datasets/8ef054b1a3ca4ac496d75ec28f17a117_0/explore?filters=eyJSZXBvcnRfTW9udGhfTnVtIjpbMSwxMl19&location=40.050181%2C-105.204251%2C11.00&showTable=true

Weather: https://weatherspark.com/y/3561/Average-Weather-in-Boulder-Colorado-United-States-Year-Round

* Sacramento, California
Crime: http://www.cityofsacramento.org/Police/Crime 
More Crime… : https://data.cityofsacramento.org/datasets/84e4483fc0624d678d7608a4fa12aae1_0/explore

