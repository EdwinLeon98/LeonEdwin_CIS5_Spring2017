/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on May 16, 2017, 10:20 AM
 * Purpose:  Sort without array
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int a=5,b=3,c=7;
    
    //Process/Calculations Here and Output
    if(a<=b&&b<=c&&c>=a){cout<<"The values sorted are: "<<a<<" "<<b<<" "<<c<<endl;
    }else if(a<=b&&b>=c&&c>=a){cout<<"The values sorted are: "<<a<<" "<<c<<" "<<b<<endl;
    }else if(a>=b&&a>=c&&c>=b){cout<<"The values sorted are: "<<b<<" "<<c<<" "<<a<<endl;
    }else if(a>=b&&a>=c&&c<=b){cout<<"The values sorted are: "<<c<<" "<<b<<" "<<a<<endl;
    }else if(a<=b&&b>=c&&a>=c){cout<<"The values sorted are: "<<c<<" "<<a<<" "<<b<<endl;
    }else if(a>=b&&a<=c&&c>=b){cout<<"The values sorted are: "<<b<<" "<<a<<" "<<c<<endl;
    }
    //Exit
    return 0;
}

