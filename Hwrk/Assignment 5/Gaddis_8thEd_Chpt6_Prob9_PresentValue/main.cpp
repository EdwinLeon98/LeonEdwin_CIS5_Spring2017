/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on May 05, 2017, 02:55 PM
 * Purpose:  Present Value
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>     //Math
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes all Savings function for a Future Value
float presentValue(float,float,int);


//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float fv;//Future Value $'s
    float ir;//Annual Interest Rate in %
    int    n;//Years
    
    //Initialize variables
    cout<<"This program calculates the present value"<<endl;
    cout<<"Type in the future value"<<endl;
    cin>>fv;
    cout<<"Type in the interest rate"<<endl;
    cin>>ir;
    cout<<"Type in the number of years"<<endl;
    cin>>n;
    
    //Output the transformed data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Future Value =  $"<<fv<<endl;
    cout<<"Interest Rate =   "<<ir<<"%"<<endl;
    cout<<"Number of years = "<<n<<" years"<<endl;
    cout<<"The Present Value = "<<presentValue(fv,ir,n)<<endl;
    
    //Exit stage right!
    return 0;
}

float presentValue(float fv,float ir,int n){
    return fv/pow(1+ir/100,n);
}