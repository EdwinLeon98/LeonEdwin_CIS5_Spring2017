/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on May 30, 2017, 11:43 AM
 * Purpose:  Mark Sort implemented with a database approach
 *           and a structure with Dynamic Memory
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>   //Random number function
#include <ctime>     //Time to set the seed
using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "Data.h"

//Global Constants

//Function Prototypes
void filAray(Data &);
void prntAry(const Data &,int);
void mrkSort(Data &);

//Execution begins here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    Data array;
    array.utilize=100;
    
    //Input data
    filAray(array);
    cout<<"Before Sorting"<<endl;
    cout<<"The array printed out using the indexed array"<<endl;
    prntAry(array,10);

    //Map inputs to outputs or process the data
    mrkSort(array);
    
    //Output the transformed data
    cout<<"After Sorting"<<endl;
    cout<<"The array printed out using the indexed array"<<endl;
    prntAry(array,10);
    
    //Deallocate memory
    delete []array.index;
    delete []array.array;
    
    //Exit stage right!
    return 0;
}

void mrkSort(Data &a){
    for(int pos=0;pos<a.utilize-1;pos++){
        for(int i=pos+1;i<a.utilize;i++){
            if(a.array[a.index[pos]]>a.array[a.index[i]]){
                int temp=a.index[pos];
                    a.index[pos]=a.index[i];
                    a.index[i]=temp;
            }
        }
    }
}

void prntAry(const Data &a,int perLine){
    cout<<endl;
    for(int i=0;i<a.utilize;i++){
        cout<<a.array[a.index[i]]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void filAray(Data &a){
    a.array=new int[a.utilize];
    a.index=new int[a.utilize];
    for(int i=0;i<a.utilize;i++){
        a.array[i]=rand()%90+10;//Fill with 2 digit number
        a.index[i]=i;
    }
}