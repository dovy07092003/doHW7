// Name: bankApp.cpp
//This file uses the BankAccount.h file
// The object for the BankAccount class will take the account's name and balance (2 input arguments)
// To run: ./build_bankAccount.sh
#include "bankAccount.h"

int main(int argc, char *argv[])
{
	BankAccount jackAccount("Jack Smith", 50);// Instantiaze an object with the account's name and balance
	BankAccount jillAccount("Jill Brian", 100);
	BankAccount bankArray[3] = { BankAccount("Ralph Kramden", 10), BankAccount("Alice Kramden", 20), BankAccount("Ed Norton", 30) };

	// Deposit $30 to each of the 5 accounts and withdraw $20 from each of the 5 account
	jackAccount.deposit(30);
	jackAccount.withdraw(20);
	jillAccount.deposit(30);
	jillAccount.withdraw(20);

	// Start of for loop
	for (int i = 0; i <3; i++)
	{
		bankArray[i].deposit(30);
		bankArray[i].withdraw(20);
	}// End of for loop


}

