/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on May 30, 2017, 10:20 AM
 * Purpose:  Mark Sort implemented with a database approach
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>   //Random number function
#include <ctime>     //Time to set the seed
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void filAray(int [],int [],int);
void prntAry(int [],int,int);
void prntAry(int [],int [],int,int);
void mrkSort(int [],int [],int);

//Execution begins here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    const int SIZE=100;
    int index[SIZE]={};
    int array[SIZE]={};
    
    //Input data
    filAray(array,index,SIZE);
    cout<<"Before Sorting"<<endl;
    cout<<"The original Array to be sorted"<<endl;
    prntAry(array,SIZE,10);
    cout<<"The indexed array"<<endl;
    prntAry(index,SIZE,10);
    cout<<"The array printed out using the indexed array"<<endl;
    prntAry(array,index,SIZE,10);
    
    //Map inputs to outputs or process the data
    mrkSort(array,index,SIZE);
    
    //Output the transformed data
    cout<<"After Sorting"<<endl;
    cout<<"The original Array to be sorted"<<endl;
    prntAry(array,SIZE,10);
    cout<<"The indexed array"<<endl;
    prntAry(index,SIZE,10);
    cout<<"The array printed out using the indexed array"<<endl;
    prntAry(array,index,SIZE,10);
    
    //Exit stage right!
    return 0;
}

void mrkSort(int a[],int indx[],int n){
    for(int pos=0;pos<n-1;pos++){
        for(int i=pos+1;i<n;i++){
            if(a[indx[pos]]>a[indx[i]]){
                int temp=indx[pos];
                    indx[pos]=indx[i];
                    indx[i]=temp;
            }
        }
    }
}

void prntAry(int a[],int indx[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[indx[i]]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int indx=0;indx<n;indx++){
        cout<<a[indx]<<" ";
        if(indx%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void filAray(int a[],int indx[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;//Fill with 2 digit number
        indx[i]=i;
    }
}