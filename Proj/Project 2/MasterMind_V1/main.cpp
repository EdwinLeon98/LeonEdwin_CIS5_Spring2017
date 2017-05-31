
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
void code(char []);

bool testWin(char [], char [],char []);
void testPWin(char [], char [],char []);

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
        for(int i=0;i<5;i++){
            cout<<"Color "<<i+1<<": ";
            cin>>guess[i]; //Input a color
        }
        //Verifies if guess matches the code
        for(int i=0;i<5 && !gameWon ;i++){
//            sameColorAndPos = false;
//            if(guess[0]==colors[0]&&
//               guess[1]==colors[1]&&
//               guess[2]==colors[2]&&
//               guess[3]==colors[3]&&
//               guess[4]==colors[4]){
//                    cout<<"You Win"<<endl;
//                    //Exits Program if guess = code
//                    gameWon = true;
            if ( testWin(guess, colors,result) ){
                gameWon = true;
                cout<<"You Win"<<endl;
                
            }
        }// End Game loop
        
//                //Same color and position
//                if(guess[i]==colors[i]){
//                        cout<<"O"<<" ";  
//                }else if (!sameColorAndPos){
//                    //Matching color, wrong position for color 1
//                   if(guess[0]==colors[1]||
//                       guess[0]==colors[2]||
//                       guess[0]==colors[3]||
//                      guess[0]==colors[4]){
//                            cout<<"X"<<" ";
//                    }
//                    //Matching color, wrong position for color 2
//                    if(guess[1]==colors[0]||
//                       guess[1]==colors[2]||
//                       guess[1]==colors[3]||
//                       guess[1]==colors[4]){
//                            cout<<"X"<<" ";
//                    }
//                    //Matching color, wrong position for color 3
//                    if(guess[2]==colors[0]||
//                      guess[2]==colors[1]||
//                       guess[2]==colors[3]||
//                      guess[2]==colors[4]){
//                            cout<<"X"<<" ";
//                    }
//                    //Matching color, wrong position for color 4
//                    if(guess[3]==colors[0]||
//                       guess[3]==colors[1]||
//                       guess[3]==colors[2]||
//                       guess[3]==colors[4]){
//                            cout<<"X"<<" ";
//                   }
//                    //Matching color, wrong position for color 5
//                    if(guess[4]==colors[0]||
//                       guess[4]==colors[1]||
//                       guess[4]==colors[2]||
//                       guess[4]==colors[3]){
//                            cout<<"X"<<" ";
//                    }  
//                    cout<<endl;
//                }
//            }
//        }
        //Ends game 
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

bool testWin(char guess[], char answer[],char result[]){
    bool win = true;
    for(int y = 0; y < 5 && win; y++){
        if ( guess[y] == answer[y] ){
            result [y]='O';
            win = true;
        }else{  
            for(int i = 0; i < 5; i++){
                for(int x = 0; x < 5; x++)
                if(i!=x){
                    if(guess[i]==answer[x]){
                        result[i]='X';
                    }else if(guess[i]!=answer[x]){
                        result[i]=' ';
                    }    
                }
            //}
            win = false;
        }
        }
     for(int i=0;i<5;i++){
                cout<<result[i]<<" ";
                        
    }
    return win;
}

/*void testPWin(char guess[], char answer[],char result[]){
    
    for(int i = 0; i < 5; i++){
        for(int x = 0; x < 5; x++)
        if(i!=x){
            if(guess[i]==answer[x]){
                result[i]='X';
            }else if(guess[i]!=answer[x]){
                result[i]=' ';
            }    
        }
    }
}
*/