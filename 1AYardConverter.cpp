/* 
Jacqueline Gonzalez
6/4/2014
Program: Yard Converter
Program Descirption: Write a program that converts yards into inches.
*/

#include <iostream>
using namespace std;

int main()
{
    //declares variables
    int yards, feet, inches;
    
    //asks user to input number of yards to convert
    cout<<"Please input the number of yards you wish to convert: ";
    cin>> yards;
    
    //calculation block
    feet = yards * 3;
    inches = feet * 12;
    
    //program should print the answer to the user
    cout<<"The number of inches in " << yards << " yards is " << inches << " inches. \n";
    
    return 0;
}

