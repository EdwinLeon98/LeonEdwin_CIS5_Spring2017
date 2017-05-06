/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on May 05, 2017, 03:41 PM
 * Purpose:  Menu for Assignment 5
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>  
#include <cstdlib>
#include <cmath>

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float PERCENT=100.0f;
const float GRAVITY=9.8f;

//Function Prototypes
void menu(void);
void prob1(void);
void prob2(void);
void prob3(void);
void prob4(void);
void prob5(void);
void prob6(void);
void prob7(void);
void prob8(void);
void prob9(void);
void prob10(void);
void calculateRetail(float,float);
void fallingDistance(int,float);
void kineticEnergy(float,float,float);
void celcius(float);
void coinToss(int);
float presentValue(float,float,int);
float futureValue(float,float,int);
float stockProfit(float,float,float,float,float);
float stockProfit2(float,float,float,float,float);
void newP(float,float,int,int);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    char choice;
    
    //Show menu and loop
    do{
        //Display Menu
        menu();
       
        //Input the choice
        cout<<"Select a problem from [1-10]"<<endl;
        cout<<"For problem 10 insert '0'"<<endl;
        cout<<"Problem ";
        cin>>choice;
        
        //Place solutions to problems in switch statement
        switch(choice){
            case '1': prob1();break;
            case '2': prob2();break;
            case '3': prob3();break;
            case '4': prob4();break;
            case '5': prob5();break;
            case '6': prob6();break;
            case '7': prob7();break;
            case '8': prob8();break;
            case '9': prob9();break;
            case '0': prob10();break;
            default:{
                cout<<"Exit the program"<<endl;
            }
        }
    }while(choice>='0'&&choice<='9');
    
    //Exit stage right!
    return 0;
}

void prob10(void){
    //Declare variables 
    float br,
          dr;
    int intP,
        yrs;
    
    //Initialize variables
    cout<<"This program calculates the new population"<<endl;
    cout<<"Type in the initial population (must be greater than 1)"<<endl;
    cin>>intP;
    do{
        if(intP<=1){
            cout<<"Invalid Number, Try Again"<<endl;
            cin>>intP;
        }
    }while(intP<=1);
    cout<<"Type in the birth rate"<<endl;
    cin>>br;
    cout<<"Type in the death rate"<<endl;
    cin>>dr;
    cout<<"Type in the years"<<endl;
    cin>>yrs;
    do{
        if(yrs<1){
            cout<<"Invalid Number, Try Again"<<endl;
            cin>>yrs;
        }
    }while(yrs<1);
 
    //Output the transformed data
    newP(br,dr,intP,yrs);
}

void newP(float br,float dr,int intP,int yrs){ 
    float newPop;
    newPop=(intP+(br*intP)-(dr*intP))*yrs;
    if(newPop>1){
        cout<<"The new population after "<<yrs<<" years is "<<newPop<<endl;
    }else if(newPop<=0){
        cout<<"The population is 0"<<endl;
    }
}

void prob9(void){
    //Declare variables
    float NS,     //Number of shares
          SP,     //Sales per share
          SC,     //Sales commission paid
          PP,     //Price pre share
          PC,     //Purchase commission paid
          nStock, //Number of stocks
          sum=0;    //Sum
    
    //Initialize variables
    cout<<"This program calculates the total stock profit or loss"<<endl;
    cout<<"Type in the number of stocks "<<endl;
    cin>>nStock;
    cout<<endl;
    
    for(int i=1;i<=nStock;i++){
        cout<<"Type in the number of shares"<<endl;        
        cin>>NS;
        cout<<"Type in the sales price per share"<<endl;
        cin>>SP;
        cout<<"Type in the sales commission paid"<<endl;
        cin>>SC;
        cout<<"Type in the price per share"<<endl;
        cin>>PP;
        cout<<"Type in the purchase commission paid"<<endl;
        cin>>PC;

        //Output the transformed data
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"Number of Shares = "<<NS<<endl;
        cout<<"Sales Price per Share = "<<SP<<endl;
        cout<<"Sales Commission Paid = "<<SC<<endl;
        cout<<"Price per Share = "<<PP<<endl;
        cout<<"Purchase Commission Paid = "<<PC<<endl;
        cout<<"Stock Profit or Loss = "<<stockProfit2(NS,SP,SC,PP,PC)<<endl;
        cout<<endl;
    }
}

float stockProfit2(float ns,float sp,float sc,float pp,float pc){
    return ((ns*sp)-sc)-((ns*pp)+pc);
}

void prob8(void){
    //Declare variables
    float NS, //Number of shares
          SP, //Sales per share
          SC, //Sales commission paid
          PP, //Price pre share
          PC; //Purchase commission paid
    
    //Initialize variables
    cout<<"This program calculates the stock profit or loss"<<endl;
    cout<<"Type in the number of shares"<<endl;        
    cin>>NS;
    cout<<"Type in the sales price per share"<<endl;
    cin>>SP;
    cout<<"Type in the sales commission paid"<<endl;
    cin>>SC;
    cout<<"Type in the price per share"<<endl;
    cin>>PP;
    cout<<"Type in the purchase commission paid"<<endl;
    cin>>PC;
    
    //Output the transformed data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Number of Shares = "<<NS<<endl;
    cout<<"Sales Price per Share = "<<SP<<endl;
    cout<<"Sales Commission Paid = "<<SC<<endl;
    cout<<"Price per Share = "<<PP<<endl;
    cout<<"Purchase Commission Paid = "<<PC<<endl;
    cout<<"Stock Profit or Loss = "<<stockProfit(NS,SP,SC,PP,PC)<<endl;
}

float stockProfit(float ns,float sp,float sc,float pp,float pc){
    return ((ns*sp)-sc)-((ns*pp)+pc);
}

void prob7(void){
    //Declare variables
    float pv;//Present Value $'s
    float ir;//Monthly Interest Rate in %
    int    n;//Months
    
    //Initialize variables
    cout<<"This program calculates the future value"<<endl;
    cout<<"Type in the present value"<<endl;
    cin>>pv;
    cout<<"Type in the monthly interest rate"<<endl;
    cin>>ir;
    cout<<"Type in the number of months"<<endl;
    cin>>n;
    
    //Output the transformed data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Present Value = $"<<pv<<endl;
    cout<<"Monthly Interest Rate = "<<ir<<"%"<<endl;
    cout<<"Number of months = "<<n<<" months"<<endl;
    cout<<"Future Value = "<<futureValue(pv,ir,n)<<endl;
}

float futureValue(float pv,float ir,int n){
    return pv*pow(1+ir/100,n);
}

void prob6(void){
     //Declare variables
    float fv;//Future Value $'s
    float ir;//Annual Interest Rate in %
    int    n;//Years
    
    //Initialize variables
    cout<<"This program calculates the present value"<<endl;
    cout<<"Type in the future value"<<endl;
    cin>>fv;
    cout<<"Type in the interest rate"<<endl;
    cin>>ir;
    cout<<"Type in the number of years"<<endl;
    cin>>n;
    
    //Output the transformed data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Future Value =  $"<<fv<<endl;
    cout<<"Interest Rate =   "<<ir<<"%"<<endl;
    cout<<"Number of years = "<<n<<" years"<<endl;
    cout<<"The Present Value = "<<presentValue(fv,ir,n)<<endl;
}

float presentValue(float fv,float ir,int n){
    return fv/pow(1+ir/100,n);
}

void prob5(void){
    srand(static_cast<unsigned int>(time(0)));
    //Declare variables 
    int toss;

    //Initialize variables
    cout<<"Type in the number of times you want to toss the coin"<<endl;
    cin>>toss;
    
    //Output the transformed data
    coinToss(toss);
}

void coinToss(int toss){
    for(int i=1;i<=toss;i++){
        char coin=rand()%2+1;
        if(coin==2){
            cout<<"Tails"<<endl;
        }else if(coin==1){
            cout<<"Heads"<<endl;
        }
    }
}

void prob4(void){
     //Declare variables 
    float fheit;
    
    //Output the transformed data
    cout<<"Farenheit"<<setw(10)<<"Celcius"<<endl;
    celcius(fheit);
    
}

void celcius(float fheit){
    cout<<setprecision(2)<<fixed<<showpoint;
    float celcius;
    for(int i=0;i<=20;i++){
        celcius=0.55*(i-32);
        cout<<setw(5)<<i<<setw(13)<<celcius<<endl;
    }
}

void prob3(void){
   //Declare variables 
    float mass,
          vlcity,
          kEnergy;
    
    //Initialize variables
    cout<<"This program calculates the kinetic energy"<<endl;
    cout<<"Type in the mass in kilograms: "<<endl;
    cin>>mass;
    cout<<"Type in the velocity in meters per second"<<endl;
    cin>>vlcity;
    
    //Output the transformed data
    kineticEnergy(mass,vlcity,kEnergy);
}

void kineticEnergy(float mass,float vlcity,float kEnergy){
    kEnergy=0.5*mass*vlcity*vlcity;
    cout<<"The kinetic energy is: "<<kEnergy<<endl;
}

void prob2(void){
    //Declare variables 
    int time;
    float d;
    //Initialize variables
    cout<<"This program calculates the distance from a falling object"<<endl;
    cout<<"Type in the time in seconds [1-10]"<<endl;
    cin>>time;

    //Output the transformed data2
    if(time>0&&time<=10){
        fallingDistance(time,d);
    }else
        cout<<"Invalid Value"<<endl;
}

void fallingDistance(int time,float d){
    d=0.5*GRAVITY*time*time;
    cout<<"The falling distance is: "<<d<<endl;
}

void prob1(void){
   //Declare variables 
    float saleCst, //Sales cost
          markup,  //Markup
          retailP; //Retail Price
    
    //Initialize variables
    cout<<"This program calculates the retail price"<<endl;
    cout<<"Type in the sales cost"<<endl;
    cin>>saleCst;
    cout<<"Type in the markup"<<endl;
    cin>>markup;

    //Output the transformed data
    calculateRetail(saleCst,markup); //Calls function
}

void calculateRetail(float saleCst,float markup){
    float retailP;
    retailP=saleCst+(saleCst*markup/PERCENT);
    cout<<"The retail price is: "<<retailP<<endl;
}

void menu(void){
    cout<<endl<<endl<<"Type 0 for Population Problem"<<endl;
    cout<<"Type 1 for Retail Price Problem"<<endl;
    cout<<"Type 2 for Falling Distance Problem"<<endl;
    cout<<"Type 3 for Kinetic Energy Problem"<<endl;
    cout<<"Type 4 for Farenheit Problem"<<endl;
    cout<<"Type 5 for Coin Toss Problem"<<endl;
    cout<<"Type 6 for Present Value Problem"<<endl;
    cout<<"Type 7 for Future Value Problem"<<endl;
    cout<<"Type 8 for Stock Profit Problem"<<endl;
    cout<<"Type 9 for Total Stock Profit Problem"<<endl<<endl;
}


