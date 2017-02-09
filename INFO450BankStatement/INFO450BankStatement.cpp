// INFO450BankStatement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<conio.h>
#include<iostream>
#include<iomanip>
using namespace std;

//declare variables
float balance;
float deposits;
float check;
float withdraws;
float totalDeposit = 0;
float totalWithdrawal = 0;
float totalCheck = 0;
float amt;
char choice; //choice for selection


int main()
{
	//enter balance
	cout << "Please enter your balance : " << endl;
	cin >> balance;

	do
	{

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
	cout << "Transactions Summary" << endl;
	cout << "---------------------\n";
	cout << "Beginning Balance:  " << balance << endl;
	cout << "Total Deposits:     " << totalDeposit << endl;
	cout << "Total Checks:       " << totalCheck << endl;
	cout << "Total Withdrawals:  " << totalWithdrawal << endl;
	cout << "---------------------\n";
	cout << "Ending Balance: " << balance + totalDeposit - totalCheck - totalWithdrawal << endl;

	return 0;
} //end main

