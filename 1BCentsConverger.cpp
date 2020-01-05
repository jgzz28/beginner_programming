/*
 Jacqueline Gonzalez
 6/4/2014
 Program: Cents Converger
 Program Descirption: Write program that asks the user to input a number of dimes and a number of quarters.
 The program should then calculate and output the total number of cents.
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //declares variables
    double dimes, quarters, dimevalue, quartervalue, totalcents;
    
    //the program should ask the user to input the number of dimes and quarters
    cout<<"Please input the number of dimes you have: ";
    cin>> dimes;
    cout<<"\n";
    cout<<"Please input the number of quarters you have: ";
    cin>> quarters;
    cout<<"\n";
    
    //the program should then convert the dimes and quarters into their proper values
    //they should be added and calculated with a final result
    dimevalue = 0.10 * dimes;
    quartervalue = 0.25 * quarters;
    totalcents = dimevalue + quartervalue;
    
    //the program should then print the answer to the user
    cout << fixed;
    cout<<"Your total amount is $" << setprecision(2)<< totalcents << ". \n";
    
    return 0;
}

