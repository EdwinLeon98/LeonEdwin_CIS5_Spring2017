
/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on March 09, 2017, 11:29 AM
 * Purpose: Calculate the ingredients for n amount of cookies.
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
    int cookies=48;       //48 cookies
    float sugar=1.5f,     //1.5 cups of sugar
            flower=2.75f, //2.75 cups of flower
            butter=1.0f;  //1 cup of butter
    int ncokies;          //number of cookies
    float R,Sugar,Flower,Butter;              //
    
    //Input data
    cout<<"This program calculates the amount of ingredients you need to "<<endl;
    cout<<"make n amount of cookies: "<<endl;
    cout<<"Insert the number of cookies you want to make: "<<endl;
    cin>>ncokies;
    
    //Map inputs to outputs or process the data
    R=ncokies/cookies;
    Sugar=sugar*R;
    Flower=flower*R;
    Butter=butter*R;    
            
    //Output the transformed data
    cout<<"The ingredients you need to make "<<ncokies<<" cookies are: "<<endl;
    cout<<Sugar<<" cups of sugar"<<endl;
    cout<<Flower<<" cups of flower"<<endl;
    cout<<Butter<<" cups of butter"<<endl;
    
    //Exit stage right!
    return 0;
}

