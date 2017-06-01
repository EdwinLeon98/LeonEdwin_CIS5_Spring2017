
/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on June 01, 2017, 12:48 PM
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
void code(char []);
bool testWin(char [], char []);
void player(char[]);

//Execution begins here 
int main(int argc, char** argv) {    
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    const int SIZE=5;   //Size of the array
    char colors[SIZE];  //Colors array
    int trys=0;         //Number of trys
    char guess[SIZE];   //Guess array
    char result[SIZE];
    
    code(colors);      //Random color code
    cout<<endl;
    
    //Starting message
    cout<<"Decipher the 5-color code"<<endl;
    cout<<"You have 12 attempts to decipher the code"<<endl;
    cout<<endl;
    
    //Play Mastermind
    bool gameWon = false;
    while(trys<=12 && !gameWon){
        trys++; //Attempt counter
        //Key for the colors
        cout<<"Red = R, "<<"Blue = B, "<<"Yellow = Y"<<endl;
        cout<<"Purple = P, "<<"Green = G"<<endl;
        cout<<endl;
        
        //Number of trys
        cout<<"Try: #"<<trys<<endl;
        
        //Guess of the code
        player(guess);
 
        //Verifies if guess matches the code
        if(testWin(guess,colors)){
            gameWon=true;
            cout<<endl;
            cout<<"You Win"<<endl;
        }
        cout<<endl;
        if(trys==12){
            cout<<"You Lose"<<endl;
        }
    }
    //Exit stage right!
    return 0;
}

void code(char colors[]){
    //Creates the random color code
    for(int i=0;i<5;i++){
        int randn=rand()%5+1; //Random integer from [1,5]
            //Switch the random integer to a color
            switch(randn){
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
}

bool testWin(char guess[],char answer[]){
    int counter=0;
    char temp[5];
    for(int y=0;y<5;y++){
        temp[y]=answer[y];
    }
    for(int y=0;y<5;y++){
        if(guess[y]==answer[y]){
            answer[y]=(-1);
            counter++;
        }
    }
    cout<<"Right Color, Right Position: "<<counter<<" ";
    cout<<endl;
    counter=0;
    for(int y=0;y<5;y++){ 
        for(int x=0;x<5;x++){
            if(guess[y]==answer[x]){
                counter++;
            }
        }
    }
    cout<<"Right Color, Wrong Position: "<<counter<<" ";
    cout<<endl;
    bool win = false;
    int count = 0;//count correct
    for(int y=0;y<5;y++){
        answer[y]=temp[y];
        if(guess[y]==temp[y]){
            count++;
        }
    }
    if(count==5)
        win=true;
    return win;
}

void player(char a[]){
     for(int i=0;i<5;i++){
            cout<<"Color "<<i+1<<": ";
            cin>>a[i]; //Input a color
                if(a[i]=='r'||a[i]=='R'){
                    a[i]='R';
                }
                if(a[i]=='b'||a[i]=='B'){
                    a[i]='B';
                }
                if(a[i]=='p'||a[i]=='P'){
                    a[i]='P';
                }
                if(a[i]=='g'||a[i]=='G'){
                    a[i]='G';
                }
                if(a[i]=='y'||a[i]=='Y'){
                    a[i]='Y';
                }
        }
}