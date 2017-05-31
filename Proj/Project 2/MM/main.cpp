
/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on May 31, 2017, 11:58 AM
 * Purpose: Mastermind V1 - Project 2
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>   //Random Number Library
#include <ctime>     //Time Library
using namespace std; //Name-space under which systems libraries exist

//User Libraries

//Global Constants 

//Function Prototypes

//Execution begins here 
int main(int argc, char** argv) {    
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    const int SIZE=5;     //Size of the array
    char colors[SIZE];    //Colors array
    int trys=0;        
    char guess[SIZE];
    
    //Creates the random color code
    for(int i=0;i<5;i++){
        int randint=rand()%5+1; //Random integer from [1,5]
            //Switch the random integer to a color
            switch(randint){
                case 1: 
                    colors[i]='R'; //Red
                    break;
                case 2: 
                    colors[i]='B'; //Blue
                    break;
                case 3: 
                    colors[i]='Y'; //Yellow
                    break;
                case 4: 
                    colors[i]='P'; //Purple
                    break;
                case 5: 
                    colors[i]='G'; //Green
                    break;
            }
            cout<<colors[i];
    }
    cout<<endl;
    //Starting message
    cout<<"Decipher the 5-color code"<<endl;
    cout<<"You have 12 attempts to decipher the code"<<endl;
    cout<<endl;
    //
    while(trys!=12){
        trys++;
        cout<<"Red = R, "<<"Blue = B, "<<"Yellow = Y"<<endl;
        cout<<"Purple = P, "<<"Green = G"<<endl;
        cout<<endl;
        cout<<"Try: #"<<trys<<endl;
        for(int i=0;i<5;i++){
            cout<<"Color "<<i+1<<": ";
            cin>>guess[i];
        }
        for(int i=0;i<4;i++){
            if(guess[0]==colors[0]&&
               guess[1]==colors[1]&&
               guess[2]==colors[2]&&
               guess[3]==colors[3]&&
               guess[4]==colors[4]){
                    cout<<"You Win"<<endl;
                    return 0;
            }else{
                if(guess[i]==colors[i]){
                        cout<<"O"<<" ";
                }
                if(guess[0]==colors[1]||
                   guess[0]==colors[2]||
                   guess[0]==colors[3]||
                   guess[0]==colors[4]){
                        cout<<"X"<<" ";
                }
                if(guess[1]==colors[0]||
                   guess[1]==colors[2]||
                   guess[1]==colors[3]||
                   guess[1]==colors[4]){
                        cout<<"X"<<" ";
                }
                if(guess[2]==colors[0]||
                   guess[2]==colors[1]||
                   guess[2]==colors[3]||
                   guess[2]==colors[4]){
                        cout<<"X"<<" ";
                }
                if(guess[3]==colors[0]||
                   guess[3]==colors[1]||
                   guess[3]==colors[2]||
                   guess[3]==colors[4]){
                        cout<<"X"<<" ";
                } 
                if(guess[4]==colors[0]||
                   guess[4]==colors[1]||
                   guess[4]==colors[2]||
                   guess[4]==colors[3]){
                        cout<<"X"<<" ";
                }                   
            }
            if(trys==12){
                cout<<"You Lose"<<endl;
            }
        }
    }

    //Exit stage right!
    return 0;
}

