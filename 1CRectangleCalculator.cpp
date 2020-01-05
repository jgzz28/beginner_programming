/* 
Jacqueline Gonzalez
6/4/2014
Program: Rectangle Calculator
Program Description: Write a program that asks the user to input the length and width of a rectangle. 
The program should output both the area and the perimeter of the rectangle.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //declares variables
    int length, width, area, perimeter;
    
    //program should ask the user to input the length and width units of rectangle
    cout<<"Please input the length of the rectangle: ";
    cin>> length;
    cout<<"\n";
    cout<<"Please input the width of the rectangle: ";
    cin>> width;
    cout<<"\n";
    
    //the program should then calculate both the area and perimeter at the same time
    area = length * width;
    perimeter = (length * 2) + (width * 2);
    
    //the program should print out both answers simutaneously
    cout<<"The area of the rectangle is " << setprecision(2) << area << " units. \n";
    cout<<"The perimeter of the rectangle is " << setprecision (2) << perimeter << " units. \n";
    
    return 0;
}

