#include <iostream>
#include <cstring>
#define SURCHARGE 1.15



using namespace std;

int main(void)
{
    char name[50];

    float first = 100;
    float beyond = 300;
    const int MIN = 50;
    float units;
    float total;
    float charges;

    cout<<"Enter name of the user: ";
    cin.getline(name, 50);
    cout << "Enter units consumed by the user: ";
    cin >>units;
    while (units < 0)
    {
        cout << "invalid number of units"<< endl;
        cout << "Enter units consumed by the user: ";
        cin >>units;
        cout << name<< endl;
    }
    
    
    if(units >= 0 && units <= first)
    {
        total = units * 60;
        
    }
    else if (units > first && units <= beyond)
    {
        int sub;
        sub = units - first;
        total = (first * 60) + (sub * 80);
    }
    else if(units > beyond)
    {
        int sub;
        sub = units -beyond;
        int mid = units - (first + sub);
        total = (first * 60) + (mid * 80) + (sub * 90); 
    }

    if (total > 300)
    {
        charges = total * 1.15;
    }
    else
    {
        charges = total;
    }

    if (total < 50)
    {
        charges = 50;
    }
    cout<< "The user is :" << name<<endl;
    cout << "Your charges are :"<< charges <<endl;

    return(0);
}