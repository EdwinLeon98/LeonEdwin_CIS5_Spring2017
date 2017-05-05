
/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on May 05, 2017, 12:05 PM
 * Purpose: Coin Toss
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>

using namespace std; //Name-space under which systems libraries exist

//User Libraries

//Global Constants 

//Function Prototypes
void coinToss(int);

//Execution begins here 
int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0)));
    //Declare variables 
    int toss,
        tails,
        heads;

    //Initialize variables
    cout<<"Type in the number of times you want to toss the coin"<<endl;
    cin>>toss;
    
    //Output the transformed data
    coinToss(toss);
    //Exit stage right!
    return 0;
}

void coinToss(int toss){
    for(int i;i<=toss;i++){
        char coin=rand()%2+1;
        if(coin==2){
            cout<<"Tails"<<endl;
        }else if(coin==1){
            cout<<"Heads"<<endl;
        }
    }
}
