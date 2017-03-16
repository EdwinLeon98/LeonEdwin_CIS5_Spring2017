
/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on March 16, 2017, 11:25 AM
 * Purpose: Grade branching exercise. 
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
    unsigned short score; //Integer score valid from 0-100
    char grade; 

    //Input data
    cout<<"This program produces a grade from a score input"<<endl;
    cout<<"The data type used is an integer [0-100]"<<endl;
    cout<<"Type in the score"<<endl;
    cin>>score;
    if(!(score>=0&&score<=100)){
        cout<<"You failed to type an integer between 0 and 100"<<endl;
        return 1; //Use DeMorgans Law to make clear
    }
    //Map inputs to outputs or process the data
    if(score>=90&&score<=100)grade='A';
    if(score>=80&&score<90)  grade='B';
    if(score>=70&&score<80)  grade='C';
    if(score>=60&&score<70)  grade='D';
    if(score<60)             grade='F';
   
    //Output the transformed data
    cout<<"For a score = "<<score<<" your grade is a "<<grade<<endl;
    //Exit stage right!
    return 0;
}

