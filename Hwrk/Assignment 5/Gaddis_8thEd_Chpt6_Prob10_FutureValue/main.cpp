/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on May 05, 2017, 03:12 PM
 * Purpose:  Future Value
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>     //Math
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes all Savings function for a Future Value
float futureValue(float,float,int);


//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float pv;//Present Value $'s
    float ir;//Monthly Interest Rate in %
    int    n;//Months
    
    //Initialize variables
    cout<<"This program calculates the future value"<<endl;
    cout<<"Type in the present value"<<endl;
    cin>>pv;
    cout<<"Type in the monthly interest rate"<<endl;
    cin>>ir;
    cout<<"Type in the number of months"<<endl;
    cin>>n;
    
    //Output the transformed data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Present Value = $"<<pv<<endl;
    cout<<"Monthly Interest Rate = "<<ir<<"%"<<endl;
    cout<<"Number of months = "<<n<<" months"<<endl;
    cout<<"Future Value = "<<futureValue(pv,ir,n)<<endl;
    
    //Exit stage right!
    return 0;
}

float futureValue(float pv,float ir,int n){
    return pv*pow(1+ir/100,n);
}