
/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on May 04, 2017, 11:19 AM
 * Purpose: Markup
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which systems libraries exist

//User Libraries

//Global Constants 
const float PERCENT=100.0f;

//Function Prototypes
void calculateRetail(float,float);

//Execution begins here 
int main(int argc, char** argv) {
    //Declare variables 
    float saleCst, //Sales cost
          markup,  //Markup
          retailP; //Retail Price
    
    //Initialize variables
    cout<<"This program calculates the retail price"<<endl;
    cout<<"Type in the sales cost"<<endl;
    cin>>saleCst;
    cout<<"Type in the markup"<<endl;
    cin>>markup;

    //Output the transformed data
    calculateRetail(saleCst,markup); //Calls function
    
    //Exit stage right!
    return 0;
}

void calculateRetail(float saleCst,float markup){
    float retailP;
    retailP=saleCst+(saleCst*markup/PERCENT);
    cout<<"The retail price is: "<<retailP<<endl;
}
