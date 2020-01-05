/*
Jacqueline Gonzalez 
6/5/2014
Program: Stock Loss Story
Program Description: Kathryn bought 600 shares of stock at a price of $21.77 per share.
A year later she sold them for just $16.44 per share. Write a program that calculates
and displays the following:
 • The total amount paid for the stock.
 • The total amount received from selling the stock.
 • The total amount of money she lost.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //decalre variables
    double shares = 600, stockprice1= 21.77, stockprice2= 16.44, paidforstock, soldforstock, moneyloss;
    
    //the program should calculate the given information
    paidforstock = shares * stockprice1;
    soldforstock = shares * stockprice2;
    moneyloss = soldforstock - paidforstock;
    
    //the program will then print out to the user what Kathryn paid for, sold, and lost in terms of money
    cout<<fixed;
    cout<<"Kathryn bought 600 shares of stock at a price of $21.77 per share.\n";
    cout<<"A year later she sold them for just $16.44 per share. \n\n";
    cout<<"Kathryn paid $" << setprecision(2)<< paidforstock << " for the shares of stock. \n";
    cout<<"Kathryn sold the stocks for $" << setprecision(2)<< soldforstock <<" in total. \n";
    cout<<"Overall, Kathryn lost $" << setprecision(2)<< moneyloss <<" when she sold her stock. \n";
    
    return 0;
}

