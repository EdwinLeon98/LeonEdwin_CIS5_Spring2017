
/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on March 20, 2017, 07:01 PM
 * Purpose: Solves quadratic equations
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>
using namespace std; //Name-space under which systems libraries exist

//User Libraries

//Global Constants 

//Function Prototypes

//Execution begins here 
int main(int argc, char** argv) {
    //Declare variables 
    int a, //First integer
        b, //Second integer
        c, //Third integer
        d; 
    float root; //Roots of the quadratic formula
    
    //Initialize variables
    cout<<"This program outputs the roots of quadratic equation"<<endl;
    cout<<"Type in an integer of a: "<<endl;
    cin>>a;
     if(a==0){
        cout<<"You failed to type an integer"<<endl;
        return 1; //Use DeMorgans Law to make clear
    }
    cout<<"Type in an integer of b: "<<endl;
    cin>>b;
    cout<<"Type in an integer of c: "<<endl;
    cin>>c;
    cout<<"Your quadratic equation is: "<<a<<"x^2 + "<<b<<"x + "<<c<<" = 0"<<endl;
   
    //Map inputs to outputs or process the data
    d=b*b-(4*a*c);
    root=(-b+sqrt(d))/2*a;
    if (d)
    //Output the transformed data
    cout<<"The roots of the quadratic equation are: "<<root<<endl;
    
    //Exit stage right!
    return 0;
}

