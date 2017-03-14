
/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on March 02, 2017, 11:47 AM
 * Purpose: Calculate the Face Value Loan
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   //Factoring Library
using namespace std; //Name-space under which systems libraries exist

//User Libraries

//Global Constants 
const float PERCENT=100.0f;//Percent conversion
const float CNVYRMN=12.0f; //Year to month conversion
//Function Prototypes

//Execution begins here 
int main(int argc, char** argv) {
    //Declare variables 
    float faceVal, //Loan face value
          consRec, //What the consumer receives $'s
          mthPay;  //Monthly payment $'s
    int   intRate, //Yearly percentage interest rate
          nMonths; //Number of months in the loan
    
    //Input data
    cout<<"This program calculates Loan Parameters"<<endl;
    cout<<"Input the loan amount to be received $";
    cin>>consRec;
    cout<<"Number of months in the loan ";
    cin>>nMonths;
    cout<<"Interest rate %            = ";
    cin>>intRate;
    
    
    //Map inputs to outputs or process the data
    faceVal=consRec/(1-intRate/PERCENT/CNVYRMN*nMonths);
    mthPay=faceVal/nMonths;
    
    //Output the transformed data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Loan amount received       = "<<consRec<<endl;
    cout<<"Number of monthly payments = "<<nMonths<<endl;
    cout<<"Interest rate              = "<<intRate<<"%"<<endl;
    cout<<"Face Value of the Loan     = $"<<faceVal<<endl;
    cout<<"Monthly Payment            = $"<<mthPay<<endl;
            
    //Exit stage right!
    return 0;
}

