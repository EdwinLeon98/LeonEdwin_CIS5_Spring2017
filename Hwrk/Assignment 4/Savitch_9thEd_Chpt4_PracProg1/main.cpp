/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on March 30, 2017, 09:45 AM
 * Purpose:  Calculates the number of miles per gallon
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only
const float GALLON=0.264179f; //Conversion of liters to gallons

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float liter, //Liters of gasoline
          miles, //Miles traveled
          gals,  //Gallons of gasoline
          mpg;   //Miles per gallon of the car 
    char choice;
    
    //Input or initialize values Here
    do{
        cout<<endl;
        cout<<"This program calculates the number of miles per gallon"<<endl;
        cout<<"Press 1 to run the program or anything else to exit"<<endl;
        cin>>choice;
        cout<<endl;
        if(!(choice=='1')){
            cout<<"Exit Program"<<endl;
            exit(0);
        }
        
        switch(choice){
            case '1':{
                cout<<"Insert the number of liters of gasoline consumed by the car"<<endl;
                cin>>liter; //Liters of gasoline consumed by the car
                cout<<"Insert the number of miles traveled by the car"<<endl;
                cin>>miles; //Miles traveled by the car
                cout<<endl;
                break;
            }
            default:{
                cout<<"Bad operator"<<endl;
                return 1;
            }
        }
        //Maps inputs to outputs or process the data
        gals=liter*GALLON; //Converts from liters to gallons
        mpg=miles/gals;    //Calculates miles per gallon

        //Output Located Here
        cout<<"The number of gallons consumed by the car is       : "
                <<gals<<" gallons"<<endl;
        cout<<"The number of miles traveled by the car is         : "
                <<miles<<" miles"<<endl;
        cout<<"The number of miles per gallon the car delivered is: "
                <<mpg<<" miles/gallon"<<endl;
    }while(choice=='1');
            
    //Process/Calculations Here
    gals=liter*GALLON; //Converts from liters to gallons
    mpg=miles/gals;    //Calculates miles per gallon
    
    //Output Located Here
    cout<<"The number of gallons consumed by the car is       : "
            <<gals<<" gallons"<<endl;
    cout<<"The number of miles traveled by the car is         : "
            <<miles<<" miles"<<endl;
    cout<<"The number of miles per gallon the car delivered is: "
            <<mpg<<" miles/gallon"<<endl;
    //Exit
    return 0;
}

