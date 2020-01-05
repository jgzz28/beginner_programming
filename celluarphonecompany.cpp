/*
 Jacqueline Gonzalez, Erica, Miguel
 06/14/2014
 Program Descirption:Write a program that calculates and prints the bill for a 
 cellular telephone company. The company offers two types of service: regular and  
 premium. Its rates vary, depending on the type of service. The rates are computed as follows:
    Regular Service: $10.00 plus first 50 minutes are free. Charges for over 50 minutes are
    $.20 per minutes.
    Premium Service: $25.00 plus:
    a. For calls made from 6:00AM to 6:00PM, the first 75 minutes are free; charges for more than 75
    minutes are $.10 per minute.
    b. For calls made from 6:00PM to 6:00AM, the first 100 minutes are free; charges for more than
    100 minutes are $.05 per minute.
 Your program should prompt the user to enter an account number, a service code (type char), and the
 number of minutes the service was used. A service code or r or R means regular service; a service code
 of p or P means premium service. Treat any other character as an error. Your program should output
 the account number, type of service number of minutes the telephone service was used, and the
 amount due from the user.
 For the premium service, the customer may be using the service during the day and the night.
 Therefore, to calculate the bill, you must ask the user to input the number of minutes the service was
 used during the day and the number of minutes the service was used during the night.
 */

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    //declares variables and constants
    double minutes, dayminutes, nightminutes, total;
    int accountnum;
    char service;
    double premiumpayment = 25.00, regularpayment = 10.00;
    
    //the program will ask the user to input their account information and what service the user is paying for
    cout<<"Please input your account number: \n\n";
    cin>> accountnum;
    
    cout<<"What kind of service are you currently paying for?\n";
    cout<<"Premium Service = P \n";
    cout<<"Regular Service = R \n\n";
    cout<<"If you wish to quit the program, please press Q.";
    cin>> service;
    cout<<"\n";
    
    //the program will use a switch statement for the different given options
    switch (service)
    {
        case 'p':
        case 'P': cout<<"For how many minutes did you use the service during the daytime? \n";
                  cout<<"(between the hours of 6 A.M. and 6 P.M.)";
                  cin>> dayminutes;
                  cout<<"For how many minutes did you use the service during the nighttime? ";
                  cout<<"(between the hours of 6 P.M. and 6 A.M.)";
                  cin>> nightminutes;
            
            if ((dayminutes <= 75) && (nightminutes <=100))
            {
                total = 25.0 + (nightminutes * 0.05);
                cout<<"Account Number #: " << accountnum <<"\n";
                cout<<"Number of minutes used in the daytime: " << dayminutes <<"\n";
                cout<<"Number of minutes used at nightime: " << nightminutes <<"\n";
                cout<<"The total amount you need to pay is $" << setprecision(2) << total <<"\n";
                break;
            }
            
            else if ((dayminutes >= 75) && (nightminutes <=100))
            {
                total = 25.0 + (dayminutes * 0.10);
                cout<<"Account Number #: " << accountnum <<"\n";
                cout<<"Number of minutes used in the daytime: " << dayminutes <<"\n";
                cout<<"Number of minutes used at nightime: " << nightminutes <<"\n";
                cout<<"The total amount you need to pay is $" << setprecision(2) << total <<"\n";
                break;
            }
            
            else if ((dayminutes >= 75) && (nightminutes >=100))
            {
                total = 25.0 + (dayminutes * 0.10) + (nightminutes * 0.05);
                cout<<"Account Number #: " << accountnum <<"\n";
                cout<<"Number of minutes used in the daytime: " << dayminutes <<"\n";
                cout<<"Number of minutes used at nightime: " << nightminutes <<"\n";
                cout<<"The total amount you need to pay is $" << setprecision(2) << total <<"\n";
                break;
            }
            
            else if ((dayminutes <= 75) && (nightminutes <= 100))
            {
                cout<<"Account Number #: " << accountnum <<"\n";
                cout<<"Number of minutes used in the daytime: " << dayminutes <<"\n";
                cout<<"Number of minutes used at nightime: " << nightminutes <<"\n";
                cout<<"The total amount you need to pay is $" << setprecision(2) << premiumpayment <<"\n";
                break;
            }
            break;
            
    case 'r':
    case 'R': cout<<"How many minutes did you use with our regular service?\n";
              cin>> minutes;
            
              if (minutes > 50)
              {
                  total = 10.0 + (minutes * 0.20);
                  cout<<"Account Number #: " << accountnum <<"\n";
                  cout<<"Total amount of minutes used overall: " << minutes <<"\n";
                  cout<<"Your total is $" << setprecision(2) << total <<"\n";
                  break;
              }
            
              else if (minutes <= 50)
              {
                  cout<<"Account Number #: " << accountnum <<"\n";
                  cout<<"Total amount of minutes used overall: " << minutes <<"\n";
                  cout<<"Your total is $" << setprecision(2) << regularpayment <<"\n";
                  break;
              }
              break;
     case 'q':
     case 'Q': cout<<"You have decided to end thr program. Goodbye! \n";
               break;
            
        default: cout<< "Invalid character choice. Please try again!\n";
            
    }//switch statement
    
    return 0;
} //main program

