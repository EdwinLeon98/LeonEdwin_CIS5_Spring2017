
/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on April 03, 2017, 12:07 PM
 * Purpose: Guessing a random number
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <ctime>     //Time to set the seed
#include <cstdlib>   //Strand and rand function
using namespace std; //Name-space under which systems libraries exist

//User Libraries

//Global Constants 

//Function Prototypes

//Execution begins here 
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables 
    unsigned int n; //Guess
    int atempts=0;
    
    //Input data
    cout<<"Guess the random number between 1 to 100"<<endl;
    char randNum=rand()%100+1; //[1,100]
    
    do{
        cin>>n; //Guess
        if(!(n==randNum)){
            atempts++; //Attempt counter
            if(n<randNum)
                cout<<"Too low, try again"<<endl<<endl;
            else
                cout<<"Too high, try again"<<endl<<endl;
        }
    }while(!(n==randNum));    
       
    //Output the transformed data
    cout<<"The guess matches the random number"<<endl<<endl;
    cout<<"The number of attempts is: "<<atempts<<endl;
    
    //Exit stage right!
    return 0;
}

