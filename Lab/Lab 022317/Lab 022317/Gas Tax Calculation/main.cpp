
/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on February 23, 2017, 11:22 AM
 * Purpose: Calculate gas tax
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which systems libraries exist

//User Libraries

//Global Constants 
const float PERCENT=100.0f;

//Function Prototypes

//Execution begins here 
int main(int argc, char** argv) {
    //Declare variables 
    float PoG;             //Price of Gas  
    float FedTx=0.184f;    //18.4c/Gallon Federal Tax
    float CAstTx=0.39f;    //39c/Gallon CA State Tax
    float CACTTx=0.10f;    //10c/Gallon CA Cap & Trade Tax
    float CAStsTx=0.08;    //8%/Gallon CA State Sales Tax
    float OilPft=0.07f;    //7c/Gallon Oil Company Profit
    float TxPcent,PPcent;  //Tax percentage and Profit percentage
    float BP,TTx;          //Base Price and Total Tax
    //Map inputs to outputs or process the data
            
    //Output the transformed data
    cout<<"Press return after entering the Price of Gas"<<endl;
    cout<<"Enter the price of gas in $'s:"<<endl;
    cin>>PoG; //Price of Gas in $'s
    cout<<"Federal Tax/Gallon: $"<<FedTx<<endl;
    cout<<"California State Tax/Gallon: $"<<CAstTx<<endl;
    cout<<"California Cap and Trade Tax/Gallon: $"<<CACTTx<<endl;
    BP=(PoG-CAstTx-CACTTx-FedTx)/(1+CAStsTx);  //Base Price
    cout<<"California State Sales Tax/Gallon: "<<CAStsTx*BP<<"%"<<endl;
    cout<<"The Base Price is: "<<BP<<"$/Gallon"<<endl;
    TTx=FedTx+CAstTx+CACTTx+(BP*CAStsTx);  //Total Taxes
    TxPcent=(TTx*PERCENT)/BP;  //Tax Percentage
    cout<<"The Tax Percentage is: "<<TxPcent<<"%"<<endl;
    PPcent=(OilPft*PERCENT)/BP;  //Profit Percentage
    cout<<"The Profit Percentage is: "<<PPcent<<"%"<<endl;
    
    //Exit stage right!
    return 0;
}

