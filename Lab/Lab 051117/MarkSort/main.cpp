/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on May 11, 2017, 10:20 AM
 * Purpose: Sort numbers
 */

//System Libraries Here
#include <iostream> //Input - Output Library
#include <cstdlib>  //Random number function
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only

//Function Prototypes Here
void filAray(int [],int);
void prntAry(int [],int,int);
void swap1(int &,int &);
void swap2(int &,int &);
void smlstVl(int [],int,int);
void mrkSort(int [],int);

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

void mrkSort(int a[],int n){
    for(int indx=0;indx<n-1;indx++){
        smlstVl(a,n,indx);
    }
}
void smlstVl(int a[],int n,int pos){
    for(int indx=pos;indx<n;indx++){
        if(a[pos]>a[indx])swap1(a[pos],a[indx]);
    }
}

//Temporary variable intermediate swap
void swap1(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

//Logical in-place swap
void swap2(int &a,int &b){
    a=a^b;
    b=a^b;
    a=a^b;
}
void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int indx=0;indx<n;indx++){
        cout<<a[indx]<<" ";
        if(indx%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void filAray(int a[],int n){
    for(int indx=0;indx<n;indx++){
        a[indx]=rand()%90+10; //Fill with 2 digit number
    }
}