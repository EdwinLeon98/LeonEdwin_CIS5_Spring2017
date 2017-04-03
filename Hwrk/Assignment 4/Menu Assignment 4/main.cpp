
/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on March 23, 2017, 12:10 PM
 * Purpose: Menu to be utilized for homework
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>   //Random number generator
#include <ctime>     //Set the random number of seed
#include <iomanip>   //Formating Library
using namespace std; //Name-space under which systems libraries exist

//User Libraries

//Global Constants 
const float MSSERTH=5.972e27f;   //Mass of Earth in grams
const float GCONST=6.673e-8f;    //Gravitational Constant cm^3/gm sec^2
const float CNVFTCM=1.0f/30.48f; //Conversion from ft to cm
const float CNVMFT=5280.0f;      //Conversion from miles to ft
const float REARTH=3959;         //Radius of the Earth in miles
const float GALLON=0.264179f; //Conversion of liters to gallons

//Function Prototypes

//Execution begins here 
int main(int argc, char** argv) {
    //Declare variables 
    char choice;
    
    //Show menu and loop
    do{
        //Display menu
        cout<<endl<<endl<<"Type 0 to Exit"<<endl;
        cout<<"Type 1 for Gaddis problem 2"<<endl;
        cout<<"Type 2 for Gaddis problem 8"<<endl;
        cout<<"Type 3 for Savitch practice program 7"<<endl;
        cout<<"Type 4 for Savitch practice program 1"<<endl;
        cout<<"Type 5 for Savitch practice program 2"<<endl;
        cout<<"-"<<endl;
        cout<<"-"<<endl;
        cout<<"-"<<endl;
        cout<<"-"<<endl<<endl;
        
        //Input the choice
        cout<<"Problem ";
        cin>>choice;
      
        //Place solutions to problems in switch statement
        switch(choice){
            case '1':{
                //Map inputs to outputs or process the data
                for(int i=0;i<=127;i++){
                    cout<<static_cast<char>(i);
                    if(i%16==15)cout<<endl;
                }
                break;
            }
            
            case '2':{
                //Set the random number seed
                srand(static_cast<unsigned int>(time(0)));

                //Declare variables 
                int op1,op2,result,answer;
                char choice;

                //Input data
                do{
                    cout<<"Math Tutor"<<endl;
                    cout<<"Choose the operation * / + - or anything else to exit"<<endl;
                    cin>>choice;
                    cout<<endl;
                    if(!(choice=='+'||choice=='-'||choice=='/'||choice=='*')){
                        cout<<"Exit the Math Tutor"<<endl;
                        exit(0);
                    }

                    //Map inputs to outputs or process the data
                    switch(choice){
                        case '+':{
                            op1=rand()%900+100; //[100-999]
                            op2=rand()%900+100; //[100-999]
                            answer=op1+op2;     //[3 to 4 digit result]
                            break;
                        }
                        case '-':{
                            op1=rand()%900+100; //[100-999]
                            op2=rand()%900+100; //[100-999]
                            answer=op1-op2;     //[0 to 3 digit result]
                            break;
                        }
                        case '*':{
                            op1=rand()%90+10;   //[10-99]
                            op2=rand()%90+10;   //[10-99]
                            answer=op1*op2;     //[2 to 4 digit result]
                            break;
                        }
                        case '/':{
                            answer=rand()%90+10;//[10-99]
                            op2=rand()%90+10;   //[10-99]
                            op1=answer*op2;     //[2 to 3 digit result]
                            break;
                        }
                        default:{
                            cout<<"Bad operator"<<endl;
                            return 1;
                        }

                    }
                    //Output the transformed data
                    cout<<setw(8)<<op1<<endl;
                    cout<<choice<<setw(7)<<op2<<endl;
                    cout<<"--------"<<endl;
                    cin>>result;

                    //Compare the answer
                    cout<<endl;
                    cout<<((result==answer)?"Correct":"Incorrect")<<endl;
                    cout<<"The answer = "<<answer<<endl;
                    cout<<endl<<endl;
                }while(choice=='+'||choice=='-'||choice=='/'||choice=='*');
                
                break;
            }
            
            case '3':{
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
                
                break;
            }
            
            case '4':{
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
                
                break;
            }
            
            case '5':{
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
    
                break;
            }
            case '6':{
                cout<<"In problem solution 6"<<endl;
                break;
            }
            case '7':{
                cout<<"In problem solution 7"<<endl;
                break;
            }
            case '8':{
                cout<<"In problem solution 8"<<endl;
                break;
            }
            case '9':{
                cout<<"In problem solution 9"<<endl;
                break;
            }
            default:{
                cout<<"Exit the program"<<endl;
            }
        }
    
    }while(choice>='1'&&choice<='9');
    //Exit stage right!
    return 0;
}

