// Name: bankAccount.cpp
// This is the implementation file for the bankAccount.h

#include "bankAccount.h"

// Private
void BankAccount::setName(string n)
{
}

void BankAccount::setBalance(float bal)
{       
}

// Public
BankAccount::BankAccount(string n, float bal)
{
    balance  = bal;   
    customerName = n; 
}

string BankAccount::getName()
{       
	return "getName";
}

float BankAccount::getBalance()
{       
	return 1;
}

void BankAccount::deposit(float dep)
{ 
  balance = balance + dep;
  cout << "The balance of "<<customerName;
  cout <<" after the deposit of "<<dep;
  cout << " is " <<balance<<endl;
	  
}

void BankAccount::withdraw(float draw)
{       
  balance = balance - draw;
  cout <<"The balance of "<<customerName;
  cout<<" after the withdrawal of "<< draw;
  cout <<" is "<<balance<<endl;

}
BankAccount::~BankAccount()
{
}
