#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <cstring>
#include <string.h>
#define rate 0.16

using namespace std;

float simple_rate (float principle, double yr);
float compound_rate (float principle, double yr);

int main(void) 
{
    char name[25];
    char Reg_number[20];

    cout << "Enter your name :";
    cin.getline(name, 25);
    cout << "Enter your registration number :";
    cin.getline(Reg_number, 20);
    cout << "Name:" <<name <<endl;
    cout << "-----------------------------------------"<<endl;
    cout << "Registration number:"<<Reg_number<<endl;
    cout << "------------------------------------------"<<endl;

    int account;

    do
    {
    cout << "Choose between 1. Saving account and 2.Fixed account:";
    cin >> account ;
    double simple_interest;
    double compound_interest;
    double priciple;
    double yr;

    

     if(account == 1)
    {
        cout << "Enter amount you wish to deposit : ";
        cin >> priciple;
        cout << "For how long do you wish to save for : ";
        cin >> yr;
        simple_interest = simple_rate(priciple, yr);
        break;
    }
    else if (account == 2)
    {
        cout << "Enter amount you wish to deposit : ";
        cin >> priciple;
        cout << "For how long do you wish to save for :";
        cin >> yr;
      compound_interest = compound_rate (priciple, yr);
      break;
    }
    else 
    {
        cout << "You cannot deposit into this account."<< endl;
    }

        
    } while (account != 1 || account != 2);
    


    return (0);
}
/*float get_principle(void)
{
    float priciple;
    double yr;

    cout << "Enter amount you wish to deposit";
    cin >> priciple;
    cout << "For how long do you wish to save for :"
    cin >> yr;


}*/

float simple_rate (float principle, double yr)
{
    double interest;
    double total;
    interest = (principle * rate * yr);
    total = (principle + interest);

    cout<< "The principle :" << principle <<endl;
    cout<< "Acrued amount :" << total << endl;
    cout<< "Interest Earned :" << interest <<endl;

    return (interest);

}
float compound_rate (float principle, double yr)
{
    double amount;
    double interest;
    amount = (principle * (pow((1 + rate),yr)));
    interest = amount -principle;

    cout<< "The principle :" << principle <<endl;
    cout<< "Acrued amount :" << amount << endl;
    cout<< "Interest Earned :" << interest <<endl;


    return (interest);
}