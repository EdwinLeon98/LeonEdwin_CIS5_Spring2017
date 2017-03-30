/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on March 30, 2017, 10:37 AM
 * Purpose:  Display the Ascii character set
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants 

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Map inputs to outputs or process the data
    for(int i=0;i<=127;i++){
        cout<<static_cast<char>(i);
        if(i%16==15)cout<<endl;
    }
    
    //Exit
    return 0;
}

