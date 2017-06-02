
/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on June 02, 2017, 01:28 PM
 * Purpose: Mastermind V4 - Project 2
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>   //Random Number Library
#include <ctime>     //Time Library
#include <cstring>   //String Library
using namespace std; //Name-space under which systems libraries exist

//User Libraries

//Global Constants 

//Function Prototypes
void menu(void);
void code(char []);
bool testWin(char [], char []);
void player(char[],int);

//Execution begins here 
int main(int argc, char** argv) {    
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    const int SIZE=5;   //Size of the array
    char colors[SIZE];  //Colors array
    int trys=0;         //Number of tries
    char guess[SIZE];   //Guess array
    string name;        //Player name
    int select;         //User selection
 
    //Menu
    menu();
    cin>>select; //User choice
    
    if(select==1){ //Mastermind
        //Code creator
        code(colors);      //Random color code
        cout<<endl;

        //Player Name
        cout<<"Enter your name: "<<endl;
        cin>>name;

        //Starting message
        cout<<"Decipher the 5-color code"<<endl;
        cout<<"You have 12 attempts to decipher the code"<<endl;
        cout<<endl;

        //Play Mastermind
        bool gameWon = false;
        while(trys<=12 && !gameWon){
            trys++;        //Attempt counter

            //Key for the colors
            cout<<"Red = R, "<<"Blue = B, "<<"Yellow = Y"<<endl;
            cout<<"Purple = P, "<<"Green = G"<<endl;

                //Code
                for(int i=0;i<5;i++){
                    cout<<colors[i];
                }
                cout<<endl;

                //Number of tries
                cout<<"Try: #"<<trys<<endl;

                //Player guess
                player(guess,SIZE);

                    //Verifies if guess matches the code
                    if(testWin(guess,colors)){           //If testWin is true
                        gameWon=true;                    //Set gameWon to true
                        cout<<endl;
                        cout<<"Congratulations, You Win!!!"<<endl;//Win message
                    }//End of If loop
                    if(trys==12){               //If tries = 12
                        cout<<"You Lose"<<endl; //Lose message
                    }//End of If loop
        }//End of While loop
        
    }else if(select==0){ //Leader Board
        char outName[]="HighScore.dat"; //Character array name
        
    }else //Exit stage right!
    return 0;
}

void menu(){
    cout<<"Welcome to Mastermind!!!"<<endl;
    cout<<"Press '1' to play Mastermind"<<endl;
    cout<<"Press '0' to see the leader board"<<endl;
    cout<<"Press anything else to exit"<<endl;
}

//Code creator function
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
    }
}

//Color Matching Function
bool testWin(char guess[],char answer[]){
    //Declare Variables
    int counter=0; //Counter for matching colors
    char temp[5]={};  //Temporal array
    
    //Temporal copy of code
    for(int y=0;y<5;y++){
        temp[y]=answer[y];
    }
    
    //Right color and right position
    for(int y=0;y<5;y++){
        if(guess[y]==answer[y]){
            answer[y]=(-1); //Set answer[y] to 0
            counter++;     //Increments counter
        }
    }
    cout<<"Right Color, Right Position: "<<counter<<" "; //Output Correct
    cout<<endl;
    counter=0; //Resets counter
    
    //Right color and wrong position
    for(int y=0;y<5;y++){ 
        for(int x=0;x<5;x++){
            if(guess[x]==answer[y]){
                answer[y]=(-1); //Set answer[y] to 0
                counter++;     //Increments counter
            }
        }
    }
    cout<<"Right Color, Wrong Position: "<<counter<<" "; //Output partial correct
    cout<<endl;
    
    //Check if player won the game
    bool win=false;//Win = false
    int count=0;   //Count correct
    //Counts how many colors match and are in the right position
        for(int y=0;y<5;y++){
            answer[y]=temp[y]; //Returns to original code
            if(guess[y]==temp[y]){ //Test guess[y] = temp[y]
                count++;           //Increment count
            }
        }
    win=((count<5)?false:true); //Count<5 then win=false, count>=5 win=true 
    return win;   //Return win
}

//Player Guess Function
void player(char a[],int n=5){
     for(int i=0;i<n;i++){ 
            cout<<"Color "<<i+1<<": "; //Color counter
            cin>>a[i]; //Input a color
                if(a[i]=='r'||a[i]=='R'){ //r or R for Red
                    a[i]='R';
                }
                else if(a[i]=='b'||a[i]=='B'){ //b or B for Blue
                    a[i]='B';
                }
                else if(a[i]=='p'||a[i]=='P'){ //p or P for Purple
                    a[i]='P';
                }
                else if(a[i]=='g'||a[i]=='G'){ //g or G for Green
                    a[i]='G';
                }
                else if(a[i]=='y'||a[i]=='Y'){ //y or Y for Yellow
                    a[i]='Y';
                }
                else{ //Invalid Input
                    do{ //Do-While invalid input
                        cout<<"Your input was invalid, Try Again"<<endl; //Try again message
                        cin>>a[i]; //Input a color
                        if(a[i]=='r'||a[i]=='R'){ //r or R for Red
                            a[i]='R';
                        }
                        else if(a[i]=='b'||a[i]=='B'){ //b or B for Blue
                            a[i]='B';
                        }
                        else if(a[i]=='p'||a[i]=='P'){ //p or P for Purple
                            a[i]='P';
                        }
                        else if(a[i]=='g'||a[i]=='G'){ //g or G for Green
                            a[i]='G';
                        }
                        else if(a[i]=='y'||a[i]=='Y'){ //y or Y for Yellow
                            a[i]='Y';
                        }
                    }while(!((a[i]=='R')||(a[i]=='B')||(a[i]=='Y')||
                            (a[i]=='P')||(a[i]=='G')));
            }
        }
}
