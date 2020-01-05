/*
Jacqueline Gonzalez
6/5/2014
Program: Miles per Gallon Calculator
A car holds 16 gallons of gasoline and can travel 350 miles before refueling. 
Write a program that calculates the number of miles per gallon the car gets. 
Display the result on the screen.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //declare variables, set constants
    double milespergallon, miles = 350, gallons = 16;
    
    //the program will calculate the given information
    milespergallon = miles/gallons;
    
    //the program should then print out the answer of the statement
    cout<<fixed;
    cout<<"A car holds 16 gallons of gasoline and can travel 350 miles before refueling. \n";
    cout<<"The car gets "<< setprecision(2) << milespergallon <<" miles per gallon. \n";
    
    return 0;
}

