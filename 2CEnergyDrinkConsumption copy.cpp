/*
 Jacqueline Gonzalez
 6/5/2014
 Program: Energy Drink Consumption
 Program Description: A soft drink company recently surveyed 12,467 of its customers 
 and found that approximately 14 percent of those surveyed purchase one or more energy drinks per week.
 Of those customers who purchase energy drinks, approximately 64 percent of them prefer 
 citrus flavored energy drinks. Write a program that displays the following:
 • The approximate number of customers in the survey who purchase one or more energy drinks per week.
 • The approximate number of customers in the survey who prefer citrus flavored energy drinks.
 */
 
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double customers = 12467, regularcustomers, citrusenergydrinks;
    
    regularcustomers = customers * 0.14;
    citrusenergydrinks = regularcustomers * 0.64;
    
    cout<<"A soft drink company recently surveyed 12,467 of its customers and found";
    cout<<"that approximately 14 percent of those surveyed purchase one or more energy drinks per week. \n";
    cout<<"Of those customers who purchase energy drinks, approximately 64 percent of them";
    cout<<"prefer citrus flavored energy drinks.";
    
    cout<<"The approximate amount of customers that drink one or more energy drinks per week";
    cout<<"are " << regularcustomers <<". \n";
    
    cout<<"The approximate amount of the same customers that perferred citrus flavored energy drinks";
    cout<<"are " << citrusenergydrinks <<". \n";

    return 0;
}

