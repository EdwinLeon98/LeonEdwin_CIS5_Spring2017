/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on May 25, 2017, 11:59 AM
 * Purpose: Sort numbers with Pointer Notation
 */

//System Libraries Here
#include <iostream> //Input - Output Library
#include <cstdlib>  //Random number function
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only

//Function Prototypes Here
void filAray(int *,int);
void prntAry(int *,int,int);
void mrkSort(int *,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    const int SIZE=100;
    int array[SIZE]={};
    
    //Input
    filAray(array,SIZE);
    prntAry(array,SIZE,10);
   
    //Process/Calculations Here
    mrkSort(array,SIZE);
    
    //Output Located Here
    prntAry(array,SIZE,10);
    
    //Exit
    return 0;
}

void mrkSort(int *a,int n){
    for(int pos=0;pos<n-1;pos++){
        for(int indx=pos+1;indx<n;indx++){
            if((*(a+pos))>(*(a+indx))){
                int temp=(*(a+pos));
                    (*(a+pos))=(*(a+indx));
                    (*(a+indx))=temp;
            }
        }
    }
}

void prntAry(int *a,int n,int perLine){
    cout<<endl;
    for(int indx=0;indx<n;indx++){
        cout<<(*(a+indx))<<" ";
        if(indx%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void filAray(int *a,int n){
    for(int indx=0;indx<n;indx++){
        (*(a+indx))=rand()%90+10; //Fill with 2 digit number
    }
}