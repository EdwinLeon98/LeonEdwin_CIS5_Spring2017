
/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on May 04, 2017, 11:29 AM
 * Purpose: Retirement 
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
using namespace std; //Name-space under which systems libraries exist

//User Libraries

//Global Constants 

//Function Prototypes

//Execution begins here 
int main(int argc, char** argv) {
    cout<<setprecision(2)<<fixed<<showpoint;
    //Declare variables 
    float inBlnce=0.0f,        //Initial Balance
          intRate=0.05f,       //Interest Rate
          slry=100000.0f,      //Salary
          pcntSly=0.20f,       //Percent Salary
          svingB=0.0f,         //Initial Savings Balance
          intrest=0.0f;        //Initial Interest Paid per Year
    int yrsWrk=50,             //Years Worked
        yrDpsit=(slry*pcntSly),//Yearly Deposit
        year=2022;             //Year
    
    //Initial Data
    cout<<"Initial Balance in your retirement account = %"<<inBlnce<<endl;
    cout<<"Interest Rate = "<<intRate*100<<"%"<<endl;
    cout<<"Salary = $"<<slry<<endl;
    cout<<"Per Cent Salary to save for Retirement/year = "<<pcntSly*100<<"%"<<endl;
    cout<<"Savings needed to retire = $"<<(slry/intRate)<<endl;
    cout<<endl;
    
    //Table
    cout<<"Years"<<setw(10)<<"Year"<<setw(13)<<"Savings"<<setw(18)<<"Interest"
            <<setw(18)<<"Yearly"<<endl;
    cout<<"Working"<<setw(21)<<"Balance"<<setw(21)<<"Paid per Year"
            <<setw(16)<<"Deposit"<<endl;
    
    //Output the transformed data
    for(int i=0;i<=yrsWrk;i++){
        cout<<setw(2)<<i; //Outputs the years worked
        svingB+=inBlnce;  //Adds savings balanced 
        intrest=svingB*intRate; //Interest paid per year
        cout<<setw(13)<<year++<<setw(13)<<svingB<<setw(18)<<intrest
                <<setw(18)<<yrDpsit<<endl; //Outputs the data
        svingB=svingB+intrest+yrDpsit; //Savings Balance
    }
    //Exit stage right!
    return 0;
}

