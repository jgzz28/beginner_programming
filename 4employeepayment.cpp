/*
 Jacqueline Gonzalez
 6/6/2014
 Program Description: An employee is paid at a rate of $16.78 per hour for regular hours worked in a week.
 Any hours over that are paid at the overtime rate of one and one-half times that. From the worker’s gross
 pay, 6% is withheld for Social Security tax, 14% is withheld for federal income tax. 5% is withheld for
 state income tax, and $10 per week is withheld for union dues. If the worker has three or more dependents,
 then an additional $35 is withheld to cover the extra cost of health insurance beyond what the employer 
 pays. Write a program that will read in the number of hours worked in a week and the number of dependents 
 as input and that will then output the worker’s gross pay, each withholding amount, and the net take-home 
 pay for the week
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //declare variables and constants
    double uniondues, dependents, hours, nethomepay, grosspay, totalnethomepay;
    uniondues = 10;
    dependents = 35;
    
    double payrate, socialsecuritytax, federalincometax, stateincometax;
    payrate = 16.78;
    socialsecuritytax = 0.06;
    federalincometax = 0.14;
    stateincometax = 0.05;
    
    //the program should then interact with the user and ask to input the number of hours worked and the number of dependents the worker has
    cout<<"How many hours have you worked this week? \n";
    cin>> hours;
    
    cout<<"How many dependents do you currently have in your household? \n";
    cin>> dependents;
    
    
    //if and else block
    //each statement will output results to the user based on the given conditions
    
    //if the worker has 3 or more dependents, this statement will calculate and print out the results to the user
        if(dependents >= 3)
        {
            grosspay = (payrate * hours);
            nethomepay = (grosspay * ( socialsecuritytax + federalincometax + stateincometax));
            totalnethomepay = ((nethomepay - uniondues) + dependents);
            
            
            cout<<fixed;
            cout<<"The total gross pay before removal dues is: $" << setprecision(2) << grosspay <<"";
            cout<<"The total net take-home pay after removal dues is: $" << setprecision(2) << totalnethomepay <<"\n";
        }
    
    //if the worker has less than 3 dependents, this statement will calculate and print out the results to the user
        else
        {
            grosspay = (payrate * hours);
            nethomepay = (grosspay * ( socialsecuritytax + federalincometax + stateincometax));
            totalnethomepay = (nethomepay - uniondues);
            
            cout<<fixed;
            cout<<"The total gross pay before removal dues is: $" << setprecision(2) << grosspay <<"\n\n";
            cout<<"The total net take-home pay after removal dues is: $" << setprecision(2) << totalnethomepay <<"\n\n";
        }
    //end if and else statements
    
    return 0;
}  //end of program

