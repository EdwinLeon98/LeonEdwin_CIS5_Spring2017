
/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on February 21, 2017, 11:30 AM
 * Purpose: Calculate the debt per person in 2008 and 2006
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which systems libraries exist

//User Libraries

//Global Constants 
const float PERCENT=100.0f;
const float MILLION=1.0e6f; //Conversion to Billions
const float TRILION=1.0e12f;//COnversion to Trillions
//Function Prototypes

//Execution begins here 
int main(int argc, char** argv) {
    //Declare variables and initialize 
    float pop2008=304e6f;  //304 Million people in 2008 
    float pop2016=322e6f;   //322 Million people in 2016
    float fedDbt=9.7e12f;   //9.7 Trillion $'s in 2008 Federal Debt
    float fedDebt=20e12f;   //20 Trillion $'s in 2016 Federal Debt
    float Dbt2008,Dbt2016;  //Debt per person in 2008 and 2016
    float perChng, mulChng; //Percentage and multiplicative change
    float ppChng;           //Per person change in debt
    //Map inputs to outputs or process the data
    Dbt2008=fedDbt/pop2008;                    //$'s/person
    Dbt2016=fedDebt/pop2016;                   //$'s/person
    perChng=(fedDebt-fedDbt)/fedDbt*PERCENT;   //% change of debt
    mulChng=fedDebt/fedDbt;                    //x change of debt
    ppChng=(Dbt2016-Dbt2008)/Dbt2008*PERCENT;  //% change in Dbt/person debt
    //Output the transformed data
            cout<<"Population in 2008 = "<<pop2008/MILLION<<" million"<<endl;
            cout<<"Population in 2016 = "<<pop2016/MILLION<<" million"<<endl;
            cout<<"Debt in 2008 = "<<fedDbt/TRILION<<" trillions"<<endl;
            cout<<"Debt in 2016 = "<<fedDebt/TRILION<<" trillions"<<endl;
            cout<<"Debt per person in 2008 = "<<Dbt2008<<"/person"<<endl;
            cout<<"Debt per person in 2016 = "<<Dbt2016<<"/person"<<endl;
            cout<<"Percent change in debt = "<<perChng<<"%"<<endl;
            cout<<"Multiplicative change in debt = "<<mulChng<<"x"<<endl;
            cout<<"Per person % change in debt = "<<ppChng<<"%"<<endl;
    //Exit stage right!
    return 0;
}

