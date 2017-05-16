/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on May 16, 2017, 10:51 AM
 * Purpose:  Grade your DMV Test
 */

//System Libraries Here
#include <iostream>
#include <fstream>
using namespace std;

//User Libraries Here

//Global Constants Only

//Function Prototypes Here
void rdFile(string,char [],int);   //Read the Answer Key and Student Response
void wrtFile(string,int [],int);  //Write the results
void grade(char [],char [],int [],int);//Compare and grade
int score(int [],int);              //Numerical result

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE=20;
    char key[SIZE],stuResp[SIZE];
    int scr[SIZE]={};
    string keyFn,stuRFn,scoreFn;
    
    //Initialize string variables
    keyFn="key.dat";
    stuRFn="answer.dat";
    scoreFn="result.dat";
    
    //Input data
    rdFile(keyFn,key,SIZE);
    rdFile(stuRFn,stuResp,SIZE);
    
    //Map inputs to outputs or process the data
    grade(key,stuResp,scr,SIZE);
    
    //Output the transformed data
    cout<<"Your Test result score was = "<<score(scr,SIZE)<<endl;
    wrtFile(scoreFn,scr,SIZE);
    
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

int score(int pts[],int n){
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
    while(in>>a[cnt++]&&cnt<n);
    //Close the file
    in.close();
}
