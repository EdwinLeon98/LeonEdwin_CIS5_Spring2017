
/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on March 08, 2017, 12:41 PM
 * Purpose: Mad Lib
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string>
using namespace std; //Name-space under which systems libraries exist

//User Libraries

//Global Constants 

//Function Prototypes

//Execution begins here 
int main(int argc, char** argv) {
    //Declare variables 
    string instName,yourName,food,Adj,color,animal;
    int numb;
    
    //Initialize variables
    cout<<"This program plays the game of Mad Lib"<<endl;
    cout<<"Insert your instructor name or last name: "<<endl;
    cin>>instName;
    cout<<"Insert your name: "<<endl;
    cin>>yourName;
    cout<<"Insert a food: "<<endl;
    cin>>food;
    cout<<"Insert a number between 100 and 120: "<<endl;
    cin>>numb;
    cout<<"Insert an adjective: "<<endl;
    cin>>Adj;
    cout<<"Insert a color: "<<endl;
    cin>>color;
    cout<<"Insert an animal: "<<endl;
    cin>>animal;
    
    //Map inputs to outputs or process the data
  
    //Output the transformed data
    cout<<"Dear Instructor "<<instName<<endl;
    cout<<endl;
    cout<<"I am sorry that I am unable to turn in my homework at this time."
            <<endl;
    cout<<"First, I ate a rotten "<<food<<", which made me turn "<<color
            <<" and extremely ill."<<endl;
    cout<<"I came down with a fever of "<<numb<<". Next, my "<<Adj<<" pet "
            <<animal<<" must have smelled the "<<endl;
    cout<<"remains of the "<<food<<"on my homework, because he ate it. I am "
            "currently"<<endl;
    cout<<"rewriting my homework and hope you will accept it late."<<endl;
    cout<<endl;
    cout<<"Sincerely,"<<endl;
    cout<<yourName<<endl;
    //Exit stage right!l
    return 0;
}

