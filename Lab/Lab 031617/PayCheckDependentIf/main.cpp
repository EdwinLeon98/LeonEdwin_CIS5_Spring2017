
/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on March 16, 2017, 12:23 PM
 * Purpose: Pay Check exercise. 
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which systems libraries exist

//User Libraries

//Global Constants 

//Function Prototypes

//Execution begins here 
int main(int argc, char** argv) {
    //Declare variables 
    unsigned short payRate,
                   hrsWrkd,
                   payChk;

    //Input data
    cout<<"This program calculates the paycheck"<<endl;
    cout<<"Type in the Pay Rate in dollars per hour"<<endl;
    cin>>payRate;
    cout<<"Type in the hours worked"<<endl;
    cin>>hrsWrkd;
    
    if ((payRate==0||hrsWrkd==0)){
        cout<<"You entered 0 so your pay check is 0"<<endl;
        return (1);
    }
    
    if(hrsWrkd<=40) 
        payChk=payRate*hrsWrkd;
    else if(hrsWrkd>40) 
            payChk=payRate*hrsWrkd+(payRate*(hrsWrkd-40));
   
    //Output the transformed data
    cout<<"Your pay rate is "<<payRate<<" and your hours worked are "<<hrsWrkd<<endl;
    cout<<"so your pay check is "<<payChk<<endl;
    
    //Exit stage right!
    return 0;
}

