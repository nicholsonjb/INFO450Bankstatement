// INFO450BankStatement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<conio.h>
#include<iostream>
#include<iomanip>
using namespace std;

//declare variables
float balance;

float check[10];
float withdraws[10];
float totalDeposit = 0;
float totalWithdrawal = 0;
float amt;
float totalCheck = 0;
char choice; //choice for selection
void displayDeposits(double depositsArray[], int number);
int populateDeposits(double depositsArray[], int number);


int main()
{
	//enter balance
	cout << "Please enter your balance : " << endl;
	cin >> balance;
	cout << "Enter Transactions" << endl;
	cout << "---------------------\n";

	do
	{
		cout << "Please choose the following transaction options. " << endl;
		cout << "Enter (W)ithdrawal, (D)eposit, (C)heck, (Q)uit : \n";
		cin >> choice;

		//switch statement to calculate transactions
		switch (choice)
		{
			//calcuate withdraws
		case 'W':
		case 'w':
			cout << "Please enter the amount you would like to withdraw :" << endl;
			cin >> amt;
			totalWithdrawal += amt;
			break;

			//calcuate deposits
		case 'D':
		case 'd':
			cout << "Please enter the amount you would like to deposit :" << endl;
			cin >> amt;
			totalDeposit += amt;
			break;

			//calcuate checks
		case 'C':
		case 'c':
			cout << "Please enter your check amounts :" << endl;
			cin >> amt;
			totalCheck += amt;
			break;
			//exits switch statement
		case 'Q':
		case 'q':
			break;
		default: cout << "Invaild entry! " << endl;

		}
	} while (choice != 'q' && choice != 'Q');
	
	//Transaction Summary output
	cout << "\nTransactions Summary" << endl;
	cout << "---------------------\n";
	cout << "Beginning Balance:  " << fixed << setprecision(2) << balance << endl;
	cout << "Total Deposits:     " << fixed << setprecision(2) << totalDeposit << endl;
	cout << "Total Checks:       " << fixed << setprecision(2) << totalCheck << endl;
	cout << "Total Withdrawals:  " << fixed << setprecision(2) << totalWithdrawal << endl;
	cout << "---------------------\n";
	cout << "Ending Balance: " << fixed << setprecision(2) << balance + totalDeposit - totalCheck - totalWithdrawal << endl;
	 
	//Array call
	double deposits[10] = {};
	populateDeposits(deposits, 10);
	displayDeposits(deposits, 10);
	return 0;

	
	
} //end main

//populate deposits array function
int populateDeposits(double depositsArray[], int number) {

	int i;
	for (i = 0; i < number; i++) {
		depositsArray[i] = amt;
	}
	return i;
}

void displayDeposits(double depositsArray[], int number) {
	for (int i = 0; i < number; i++)
		cout << "Deposits: " << (i + 1) << depositsArray[i] << endl;

}