/*
 Jacqueline Gonzalez 06/04/2014
 Program: Celsius Converter
 Program Purpose: Write a program that asks the user for the temperature in Celsius 
 and convert it to Fahrenheit.
 The formula is as follows: F = (C * 9/5) + 32.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //declare variables
    double celsius, fahrenheit;
    
    //the program will ask the user to input degrees celsius for conversion
    cout<<"Please input the temperature for Celsius that you wish to convert: ";
    cin>> celsius;
    cout<<"\n";
    
    //the program should then calculate and convert celsius to fahrenheit
    fahrenheit = (celsius * (9/5)) + 32;
    
    //the program should then print out the answer to the user rounded to 2 decimal places
    cout << fixed;
    cout<<"The Fahrenheit temperature for " << setprecision (2) << celsius << " degrees Celsius is " << setprecision(2) <<fahrenheit << " degrees Fahrenheit. \n";
    
    return 0;
}

