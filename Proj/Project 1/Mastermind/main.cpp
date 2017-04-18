
/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on April 16, 2017, 03:25 PM
 * Purpose: Mastermind Version 3
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>   //Random Library
#include <ctime>     //Time Library
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
    
    //Starting game and instructions
    cout<<"Decipher the 5-digit code"<<endl;
    cout<<"You have 12 attempts to decipher the code"<<endl;
    cout<<"You MUST enter a digit from 1-9"<<endl;
    cout<<"Please press 'SPACE BAR' after each digit and"<<endl;
    cout<<"press 'ENTER' to submit your guess"<<endl;
    cout<<endl;
    
    //Do-While Loop until 12 attempts
    do{
        //Restarts the right and close numbers
        int right=0, //Right number, Right place
            close=0; //Right number, Wrong place
        
        //Input 5-digit code
        cout<<"Attempt: "<<attps<<endl;
        cin>>n1>>n2>>n3>>n4>>n5;
      
        //Determines the correct numbers in the right or wrong places
        if(!((n1==randN1)&&(n2==randN2)&&(n3==randN3)&&(n4==randN4)&&(n5==randN5))){
            
            //Check if the values for n1, n2, n3, n4, and n5 are within the range
            if(!(n1<=9)||!(n2<=9)||!(n3<=9)||!(n4<=9)||!(n5<=9)){
                cout<<"You enter a wrong digit"<<endl;
                return 1; //End program if entered wrong digit
            }
            {
                //First Number Check
                if(n1==randN1)
                    right++; //Counts the correct numbers in the right position
                else if(!(n1==randN1)){
                    if(n1==randN2||n1==randN3||n1==randN4||n1==randN5){
                    close++; //Counts the correct numbers in the wrong position
                   }   
                }
                
                //Second Number Check
                if(n2==randN2)
                    right++; //Counts the correct numbers in the right position
                else if(!(n2==randN2)){
                    if(n2==randN1||n2==randN3||n2==randN4||n2==randN5){
                    close++; //Counts the correct numbers in the wrong position
                   }
                }
                
                //Third Number Check
                if(n3==randN3)
                    right++; //Counts the correct numbers in the right position
                else if(!(n3==randN3)){
                    if(n3==randN1||n3==randN2||n3==randN4||n1==randN5){
                    close++; //Counts the correct numbers in the wrong position
                   }
                }
                
                //Fourth Number Check
                if(n4==randN4)
                    right++; //Counts the correct numbers in the right position
                else if(!(n4==randN4)){
                    if(n4==randN1||n4==randN2||n4==randN3||n4==randN5){
                    close++; //Counts the correct numbers in the wrong position
                   }
                }
                
                //Fifth Number Check
                if(n5==randN5)
                    right++; //Counts the correct numbers in the right position
                else if(!(n5==randN5)){
                    if(n5==randN1||n5==randN2||n5==randN3||n5==randN4){
                    close++; //Counts the correct numbers in the wrong position
                   }
                }
                
            }
            //Outputs the how many right numbers in the right position
            cout<<"Right Number, Right Position: "<<right<<endl;
            //Outputs the how many right numbers in the wrong position
            cout<<"Right Number, Wrong Position: "<<close<<endl;
            cout<<endl;
        }
        
        //Ends program after 12 failed attempts to decipher the code
        attps++; //Counts the attempts
        if(attps==12){
            
            //Outputs FAILED message and shows the correct code
            cout<<"You have failed to decipher the code!"<<endl;
            cout<<"The code was: "
                    <<randN1<<" "<<randN2<<" "<<randN3<<" "<<randN4<<" "
                    <<randN5<<endl;
            return 0; //End program
        }
        
    }while(!((n1==randN1)&&(n2==randN2)&&(n3==randN3)&&(n4==randN4)&&(n5==randN5)));
    
    //Outputs Congratulations message
    cout<<"Congratulations! You have deciphered the code!"<<endl;
    cout<<randN1<<" "<<randN2<<" "<<randN3<<" "<<randN4<<" "<<randN5<<endl;
    
    //Exit stage right!
    return 0;
}

