
/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on March 30, 2017, 12:06 PM
 * Purpose: Calculate your weight
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which systems libraries exist

//User Libraries

//Global Constants 
const float MSSERTH=5.972e27f;   //Mass of Earth in grams
const float GCONST=6.673e-8f;    //Gravitational Constant cm^3/gm sec^2
const float CNVFTCM=1.0f/30.48f; //Conversion from ft to cm
const float CNVMFT=5280.0f;      //Conversion from miles to ft
const float REARTH=3959;         //Radius of the Earth in miles

//Function Prototypes

//Execution begins here 
int main(int argc, char** argv) {
    //Declare variables 
    float myWght;  //Result in lbs
    float myMass;  //Units of slugs
    char choice;  
    
    //Inputs Data
    do{
        cout<<"Calculate Weight"<<endl;
        cout<<"Choose 1 to run the program or anything else to exit"<<endl;
        cin>>choice;
        cout<<endl;
        
        if(!(choice=='1')){
            cout<<"Exit Program";
            exit(0);
                    
        }
        //Map inputs to outputs or process the data
        switch(choice){
            case '1':{
                cout<<"Type in you weight in slug units"<<endl;
                cin>>myMass;
                myWght=GCONST*CNVFTCM*CNVFTCM*CNVFTCM*MSSERTH*myMass
                        /(REARTH*REARTH*CNVMFT*CNVMFT);
                break;

            }
            default:{
                cout<<"Bad operator"<<endl;
                return 1;
            }
        }
        //Output the data
        cout<<"Your weight is "<<myWght<<" lbs"<<endl;
        cout<<endl;
        
    }while(choice='1');
    
    //Exit stage right!
    return 0;
}

