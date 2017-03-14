
/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on March 09, 2017, 05:44 PM
 * Purpose: Calculates the total grade as a percentage
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
    int nexpls;
    float grade;
    float totlp;
    float sum1,sum2;
    float percent;

    //Input data
    cout<<"How many exercises to input?";
    cin>>nexpls;
    while (nexpls > 0)
    {
        cout<<"Score received for exercise: ";
        cin>>grade;
        cout<<"Total points possible for exercise: ";
        cin>>totlp;
        nexpls=nexpls-1;        
                
    }
         
    //Map inputs to outputs or process the data
    sum1=grade+grade;
    sum2=totlp+totlp;
    percent=sum1/sum2*PERCENT;
    
    //Output the transformed data
    cout<<"Your total is "<<sum1<<" out of "<<sum2<<", or "<<percent<<"%."<<endl;
    //Exit stage right!
    return 0;
}

