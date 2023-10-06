#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <cstring>
#include <string.h>
#include <fstream>
#define rate 0.16

using namespace std;

class Cur_acct;
class Sav_acct;

class Account
{
private:
    string customer_name;
    int acc_no;
    string acc_type;
public:
    void get_data(void);
    void store_data();
    ~Account();
};

class Cur_acct : public Account
{
private:
    const int minBalance = 500;
    const int serviceCharge = 200;
    int balance; 
public:
    int deposit;
    int newBalance;
    void getData();
    void display(void);
    void withdraw();
    ~Cur_acct();
};

class Sav_acct : public Account
{
private:
    int newBalance;
public:
    int deposit;
    int balance;
    void getData(void);
    void displayMoney(void);
    float compound_interest(float p,double yr);
    void withdraw();
    ~Sav_acct();
};

void Account::get_data(void)
{   
    int num;
    cout<<"What is your name? ";
    cin>>customer_name;
    cout<<"What is your account number? ";
    cin>>acc_no;
    do
    {
    cout<<"Choose between 1.Savings account and 2.Current account : ";
    cin>>num;
    if (num == 1)
    {
        acc_type = "Savings account";
        Sav_acct sav;
        sav.getData();
        sav.compound_interest(sav.deposit, 2);
        sav.withdraw();
        sav.store_data();
        ofstream inputFile;
        inputFile.open("Bank Menu.txt", ios::app);
        inputFile<<"You deposited : "<<sav.deposit<<endl<<"Your new account balance is : "<<sav.balance<<endl;
        inputFile.close();
        sav.~Sav_acct();

        break;
    }
    else if (num == 2)
    {
        acc_type = "Current account";
        Cur_acct current;
        current.getData();
        current.display();
        current.withdraw();
        current.store_data();
        ofstream inputFile;
        inputFile.open("Bank Menu.txt", ios::app);
        inputFile<<"You deposited : "<<current.deposit<<endl<<"Your new account balance is : "<<current.newBalance<<endl;
        inputFile.close();
        
        break;
    }else
    {
        cout<<"INVALID CHOICE !!!"<<endl;
    }
    
    } while (num != 1 && num !=2); 

}
void Account :: store_data()
{
    ofstream inputFile;
    inputFile.open("Bank Menu.txt", ios::app);
    inputFile<<"1."<<customer_name<<endl<< acc_no<<endl<<acc_type<<endl;
    inputFile.close();

}
Account::~Account()
{
};

void Cur_acct::getData(void)
{
    do
    {
  
        cout<<"How much money do you wish to deposit ?";
        cin>>deposit;
        if (deposit < minBalance)
        {
            cout<<"THE AMOUNT YOU WISH TO DEPOSIT IS BELOW THE MINIMUM AMOUNT REQUIRED"<<endl;
            deposit = 0;
        }
        else
        {
            balance = deposit;
        }
    } while(deposit == 0);
    
    
    
}
void Cur_acct::display(void)
{
    cout<<"Your account balance is :"<<balance<<endl;
    if (balance < minBalance)
    {
        cout<<"Your account balance is below the minimum balance.A service ccharge of "<< serviceCharge << " will be imposed."<<endl;
        balance -= serviceCharge;
        cout<<"Your new account balance is :"<<balance<<endl; 
    }
    
}
void Cur_acct::withdraw()
{
    int money;
    cout<<"How much money do you wish to withdraw ?";
    cin>>money;
    if (money > balance)
    {
        cout<<"INSUFFICIENT BALANCE !!!";
    }else
    {
        balance -= money;
        newBalance = balance;
        cout<<"WITHDRAWAL SUCCESSFULL !"<<endl<<"Your new account balance is : "<<balance;
    }
}


Cur_acct::~Cur_acct()
{
};

void Sav_acct::getData(void)
{
    cout<<"How much do you wish to deposit? ";
    cin>>deposit;
    newBalance += deposit;
}
float Sav_acct::compound_interest(float p, double yr)
{   
    p = deposit;
    double amount;
    double interest;
    amount = (p * (pow((1 + rate),yr)));
    interest = amount -p;
    newBalance = amount;
     
    //cout<< "The principle :" << p <<endl;
    //cout<< "Acrued amount :" << amount << endl;
    //cout<< "Interest Earned :" << interest <<endl;



    return (interest);
}
void Sav_acct::withdraw()
{
    int money;
    cout<<"How much money do you wish to withdraw ?";
    cin>>money;
    if (money > newBalance)
    {
        cout<<"INSUFFICIENT BALANCE !!!";
    }else
    {
        newBalance -= money;
        balance = newBalance;
        cout<<"WITHDRAWAL SUCCESSFULL !"<<endl<<"Your new account balance is : "<<newBalance;
    }
}
Sav_acct::~Sav_acct()
{
};


int main(void)
{
    Account memb1;
    memb1.get_data();
    //Cur_acct memb1;
    //memb1.getData();
    //memb1.display();
    //memb1.withdraw();
    return (0);
}

class OOP
{
private:
    /* data */
public:
    OOP(/* args */);
    ~OOP();
};

OOP::OOP(/* args */)
{
}

OOP::~OOP()
{
}
