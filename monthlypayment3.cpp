/* 
 Jacqueline Gonzalez
 6/6/2014
 Program Description: Rate is the monthly interest rate, which is the annual interest rate divided by 12. 
(A 12 percent annual interest would be 1 percent monthly interest.)
 N is the number of payments and L is the amount of the loan. Write a program that asks for these
 values and displays a report similar to the following:
 
 Loan Amount: $ 10000.00
 Monthly Interest Rate: 1%
 Number of Payments: 36
 Monthly Payment: $ 332.14
 Amount Paid Back: $ 11957.15
 Interest Paid: $ 1957.15
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    //declare variables and constants
    double loanamount, numberofpayments, monthlypayment, interestpaid, totalpayment;
    double monthlyrate = 0.01;
    
    //state purpose and ask the user for input
    cout<<"Rate is the monthly interest rate, which is the annual interest rate divided by 12.\n";
    cout<<"The amount of the loan given is $10,000. You must make 36 monthly payments.\n\n";
    cout<<"Please input the loan amount given: \n";
    cin>>loanamount;
    cout<<"Please input the number of monthly payments: \n";
    cin>> numberofpayments;
    
    //the program should run through blocks of calculations
    
    monthlypayment = (monthlyrate * (pow(monthlyrate + 1.0, numberofpayments)) / (pow(monthlyrate + 1.0, numberofpayments) -1.0))* (loanamount);
    totalpayment = (monthlypayment * numberofpayments);
    interestpaid = (totalpayment - loanamount);
    
    cout<<fixed;
    //the program should then print out the information to the user
    cout<<"The loan amount is $" << setprecision(2) << loanamount << "\n";
    cout<<"The monthly interest rate is " << setprecision(2) << monthlyrate << " % \n";
    cout<<"The number of payments that were made are " << numberofpayments << "\n\n";
    cout<<"The amount of monthly payment is $" << monthlypayment <<"\n";
    cout<<"THe amount paid back is $" << totalpayment << "\n";
    cout<<"The amount of interest paid is $" << interestpaid <<"\n\n";
    
    return 0;
}

