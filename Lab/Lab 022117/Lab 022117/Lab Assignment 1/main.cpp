
/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on February 21, 2017, 11:30 AM
 * Purpose: Calculate the percentage of the federal budget that
 *          the Military and NASA are funded
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which systems libraries exist

//User Libraries

//Global Constants 
const float PERCENT=100.0f; //Percentage
const float BILLION=1.0e9f; //Conversion to Billions
const float TRILION=1.0e12f;//COnversion to Trillions
//Function Prototypes

//Execution begins here 
int main(int argc, char** argv) {
    //Declare variables and initialize 
    float fedBudg=3.54e12f;    //3.54 Trillion $'s 2016 Budget 
    float milBudg=0.580e12f;   //580 Billion $'s 2016 Budget
    float nasaBudg=18.5e9f;    //18.5 Billion $'s 2016 Budget
    float perMil, perNasa;     //Percentage budget
    
    //Map inputs to outputs or process the data
    perMil=milBudg/fedBudg*PERCENT;
    perNasa=nasaBudg/fedBudg*PERCENT;
    //Output the transformed data
            cout<<"Federal Budget = $"<<fedBudg/TRILION<<" trillions"<<endl;
            cout<<"Military Budget = $"<<milBudg/BILLION<<" billions"<<endl;
            cout<<"NASA Budget = $"<<nasaBudg/BILLION<<" billions"<<endl;
            cout<<"Military Budget percentage = "<<perMil<<"%"<<endl;
            cout<<"NASA Budget percentage = "<<perNasa<<"%"<<endl;
    //Exit stage right!
    return 0;
}

