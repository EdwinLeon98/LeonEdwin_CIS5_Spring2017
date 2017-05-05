/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on May 05, 2017, 03:32 PM
 * Purpose:  Stock Profit
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>     //Math
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float stockProfit(float,float,float,float,float);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float NS, //Number of shares
          SP, //Sales per share
          SC, //Sales commission paid
          PP, //Price pre share
          PC; //Purchase commission paid
    
    //Initialize variables
    cout<<"This program calculates the stock profit of loss"<<endl;
    cout<<"Type in the number of shares"<<endl;        
    cin>>NS;
    cout<<"Type in the sales price per share"<<endl;
    cin>>SP;
    cout<<"Type in the sales commission paid"<<endl;
    cin>>SC;
    cout<<"Type in the price per share"<<endl;
    cin>>PP;
    cout<<"Type in the purchase commission paid"<<endl;
    cin>>PC;
    
    //Output the transformed data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Number of Shares = "<<NS<<endl;
    cout<<"Sales Price per Share = "<<SP<<endl;
    cout<<"Sales Commission Paid = "<<SC<<endl;
    cout<<"Price per Share = "<<PP<<endl;
    cout<<"Purchase Commission Paid = "<<PC<<endl;
    cout<<"Stock Profit or Loss = "<<stockProfit(NS,SP,SC,PP,PC)<<endl;
   
    //Exit stage right!
    return 0;
}

float stockProfit(float ns,float sp,float sc,float pp,float pc){
    return ((ns*sp)-sc)-((ns*pp)+pc);
}