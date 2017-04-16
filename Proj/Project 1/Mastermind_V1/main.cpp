
/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on April 09, 2017, 11:52 AM
 * Purpose: Mastermind Version 1
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>  
#include <ctime>     
using namespace std; //Name-space under which systems libraries exist

//User Libraries

//Global Constants 

//Function Prototypes

//Execution begins here 
int main(int argc, char** argv) {
    //Set the random seed number
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables 
    unsigned int n1, //First Number Guess
                 n2, //Second Number Guess
                 n3, //Third Number Guess
                 n4, //Fourth Number Guess
                 n5; //Fifth Number Guess
    int attps=1;     //Attempts
   
    //Random Number Generator
    int randN1=rand()%9+1;//[1,9]
    int randN2=rand()%9+1;//[1,9]
    int randN3=rand()%9+1;//[1,9]
    int randN4=rand()%9+1;//[1,9]
    int randN5=rand()%9+1;//[1,9]
    
    //Starting game
    cout<<"Decipher the 5-digit code"<<endl;
    cout<<"You have 12 attempts to decipher the code"<<endl;
    cout<<"Key:"<<endl;
    cout<<"'+' = Correct Number, Right Place"<<endl;
    cout<<"'-' = Wrong number"<<endl;
    cout<<"'?' = Correct number, Wrong Place"<<endl;        
    cout<<"Enter your first guess"<<endl;
    
    //Do-While Loop until 12 attempts
    do{
        //Input 5-digit code
        cout<<"Attempt: "<<attps<<endl;
        cin>>n1>>n2>>n3>>n4>>n5;
        
        //Determines the correct numbers in the right or wrong places
        if(!((n1==randN1)&&(n2==randN2)&&(n3==randN3)&&(n4==randN4)&&(n5==randN5))){
            {
                //Proving First Number Guess    
                if(n1==randN1)
                    cout<<"+ ";
                else if((n1==randN2)||(n1==randN3)||(n1==randN4)||(n1==randN5))
                    cout<<"? ";
                else 
                    cout<<"- ";

                //Proving Second Number Guess
                if(n2==randN2)
                    cout<<"+ ";
                else if((n2==randN1)||(n2==randN3)||(n2==randN4)||(n2==randN5))
                    cout<<"? ";
                else 
                    cout<<"- ";

                //Proving Third Number Guess
                if(n3==randN3)
                    cout<<"+ ";
                else if((n3==randN1)||(n3==randN2)||(n3==randN4)||(n3==randN5))
                    cout<<"? ";
                else 
                    cout<<"- ";

                //Proving Fourth Number Guess
                if(n4==randN4)
                    cout<<"+ ";
                else if((n4==randN1)||(n4==randN2)||(n4==randN3)||(n4==randN5))
                    cout<<"? ";
                else 
                    cout<<"- ";

                //Proving Fifth Number Guess
                if(n5==randN5)
                    cout<<"+ ";
                else if((n5==randN1)||(n5==randN2)||(n5==randN3)||(n5==randN4))
                    cout<<"? ";
                else 
                    cout<<"- "<<endl;
            }
            cout<<endl;
        }
        
        //Ends program after 12 failed attempts to decipher the code
        attps++;
        if(attps==12){
            cout<<"You have failed to decipher the code!"<<endl;
            cout<<"The code was: "
                    <<randN1<<" "<<randN2<<" "<<randN3<<" "<<randN4<<" "
                    <<randN5<<endl;
            return 0;
        }
        
    }while(!((n1==randN1)&&(n2==randN2)&&(n3==randN3)&&(n4==randN4)&&(n5==randN5)));
    
    //Outputs Congratulations message
    cout<<endl;
    cout<<"Congratulations! You have deciphered the code!"<<endl;
    cout<<randN1<<" "<<randN2<<" "<<randN3<<" "<<randN4<<" "<<randN5<<endl;
    //Exit stage right!
    return 0;
}

