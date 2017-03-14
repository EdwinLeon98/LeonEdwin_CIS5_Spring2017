
/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on March 14, 2017, 11:27 AM
 * Purpose: Time calculator/converter
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which systems libraries exist

//User Libraries

//Global Constants 
const int MINUTE=60;      //How many seconds in a minute
const int HOUR=60*MINUTE; //How many seconds in a hour
const int DAY=24*HOUR;    //How many seconds in a day
const int WEEK=7*DAY;     //How many seconds in a day
const int YEAR=52*WEEK;   //How many seconds in a year

//Function Prototypes

//Execution begins here 
int main(int argc, char** argv) {
    //Declare variables 
    int nSecs; //Number of seconds to convert
    int nY,nM,nW,nD,nH,nMin;
    
    //Initialize variables
    cout<<"This program converts seconds to Years/Months/Weeks/Days/Hours"<<endl;
    cout<<"Input the number of seconds for the conversion/equivalent"<<endl;
    cin>>nSecs;
    
    //Map inputs to outputs or process the data
    nY=nSecs/YEAR;            //Number of Years
    cout<<nY<<" Years, (";
    nSecs-=nY*YEAR;           //Subtract the yearly seconds from remaining
    
    nW=nSecs/WEEK;            //Number of Weeks
    cout<<nW<<" Weeks or ";
    nM=nW*3/13;               //Convert number of weeks to Months
    cout<<nM<<" Months), ";
    nSecs-=nW*WEEK;           //Subtract the weekly seconds from remaining
    
    nD=nSecs/DAY;             //Number of Days
    cout<<nD<<" Days, ";
    nSecs-=nD*DAY;            //Subtract the daily seconds from remaining
    
    nH=nSecs/HOUR;            //Number of Hours
    cout<<nH<<" Hours, ";
    nSecs-=nH*HOUR;           //Subtract the hourly seconds from remaining
    
    nMin=nSecs/MINUTE;        //Number of Minutes
    cout<<nMin<<" Minutes, ";
    
    nSecs-=nMin*MINUTE;       //Remaining number of seconds
    cout<<nSecs<<" Seconds";
            
    //Exit stage right!
    return 0;
}

