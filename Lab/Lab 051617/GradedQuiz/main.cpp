/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on May 16, 2017, 10:51 AM
 * Purpose:  Grade Quiz
 */

//System Libraries Here
#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

//User Libraries Here

//Global Constants Only

//Function Prototypes Here
void rdFile(string,char [],int);   //Read the Answer Key and Student Response
void wrtFile(string,int [],int);  //Write the results
void grade(char [],char [],int [],int);//Compare and grade
void score(int [],int);              //Numerical result

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    
    //Initialize variables
    
    //Input data
    
    //Output the transformed data
   
    //Exit
    return 0;
}

void wrtFile(string fn,int pts[],int n){
    //Declare variable
    ofstream out;
    //Open the file
    out.open(fn.c_str());
    //Read the values
    for(int i=0;i<n;i++){
        out<<pts[i]<<endl;
    }
    //Close the file
    out.close();
}

void score(int pts[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=pts[i];
    }
    return sum;
}

void grade(char key[],char stu[],int pts[],int n){
    for(int i=0;i<n;i++){
        if(key[i]==stu[i])pts[i]=1;
    }
}

void rdFile(string fn,char a[],int n){
    //Declare variable
    ifstream in;
    int cnt=0;
    //Open the file
    in.open(fn.c_str());
    //Read the values
    while(in>>a[cnt++]);
    //Close the file
    in.close();
}
