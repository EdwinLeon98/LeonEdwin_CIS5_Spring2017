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
    float liter,  //Liters of gasoline for car 1
          liter2, //Liters of gasoline for car 2
          miles,  //Miles traveled by car 1
          miles2, //Miles traveled by car 2
          gals,   //Gallons of gasoline for car 1
          gals2,  //Gallons of gasoline for car 2
          mpg,    //Miles per gallon for car 1
          mpg2;   //Miles per gallon for car 2 
    char choice;
    
    //Input or initialize values here
    do{
        cout<<endl;
        cout<<"This program calculates the number of miles per gallon"<<endl;
        cout<<"for 2 cars and shows which car has the best fuel efficiency"<<endl;
        cout<<"Press 1 to run the program or anything else to exit"<<endl;
        cin>>choice;
        cout<<endl;
        if(!(choice=='1')){
            cout<<"Exit Program"<<endl;
            exit(0);
        }
        
        switch(choice){
            case '1':{
                cout<<"Insert the number of liters of gasoline consumed by car 1"<<endl;
                cin>>liter; //Liters of gasoline consumed by the car
                cout<<"Insert the number of miles traveled by car 1"<<endl;
                cin>>miles; //Miles traveled by the car
                cout<<"Insert the number of liters of gasoline consumed by car 2"<<endl;
                cin>>liter2; //Liters of gasoline consumed by the car
                cout<<"Insert the number of miles traveled by car 2"<<endl;
                cin>>miles2; //Miles traveled by the car
                cout<<endl;
                break;
            }
            default:{
                cout<<"Bad operator"<<endl;
                return 1;
            }
        }
        //Process/Calculations Here
        gals=liter*GALLON;   //Converts from liters to gallons for car 1
        gals2=liter2*GALLON; //Converts from liters to gallons for car 2
        mpg=miles/gals;      //Calculates miles per gallon for car 1
        mpg2=miles2/gals2;   //Calculates miles per gallon for car 2

        //Output Located Here
        cout<<"The number of gallons consumed by car 1 is       : "
                <<gals<<" gallons"<<endl;
        cout<<"The number of miles traveled by car 1 is         : "
                <<miles<<" miles"<<endl;
        cout<<"The number of miles per gallon car 1 delivered is: "
                <<mpg<<" miles/gallon"<<endl;
        cout<<endl;
        cout<<"The number of gallons consumed by car 2 is       : "
                <<gals2<<" gallons"<<endl;
        cout<<"The number of miles traveled by car 2 is         : "
                <<miles2<<" miles"<<endl;
        cout<<"The number of miles per gallon car 2 delivered is: "
                <<mpg2<<" miles/gallon"<<endl;
        cout<<endl;
        
        if(mpg>mpg2)
            cout<<"Car 1 has the best fuel efficency"<<endl;
        else if(mpg==mpg2)
            cout<<"Car 1 and Car 2 have the same fuel efficency"<<endl;
        else
            cout<<"Car 2 has the best fuel efficency"<<endl;
        
    }while(choice=='1');
    
    //Exit
    return 0;
}

