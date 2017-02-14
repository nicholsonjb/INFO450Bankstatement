// INFO450BankStatement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<conio.h>
#include<iostream>
#include<iomanip>
using namespace std;

//declare variables
float balance;
const int  MAXENTRY = 10;
int numDeposits = 0;
float totalDeposit = 0;
int numWithdraws = 0;
float totalWithdrawal = 0;
int numChecks = 0;
float totalCheck = 0;
float Checks[MAXENTRY];
float Deposits[MAXENTRY];
float Witdraws[MAXENTRY];
float amt;
char choice; //choice for selection



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
			Witdraws[numWithdraws] = amt;
			numWithdraws++;
			break;

			//calcuate deposits
		case 'D':
		case 'd':
			cout << "Please enter the amount you would like to deposit :" << endl;
			cin >> amt;
			totalDeposit += amt;
			Deposits[numDeposits] = amt;
			numDeposits++;
			break;

			//calcuate checks
		case 'C':
		case 'c':
			cout << "Please enter your check amounts :" << endl;
			cin >> amt;
			totalCheck += amt;
			Checks[numChecks] = amt;
			numChecks++;
			break;
			//exits switch statement
		case 'Q':
		case 'q':
			break;
		default: cout << "Invaild entry! " << endl;

		}
	} while (choice != 'q' && choice != 'Q');
	// for deposits loop here

	//check loop here

	//withdraw loop here


	//Transaction Summary output
	cout << "\nTransactions Summary" << endl;
	cout << "---------------------\n";
	cout << "Beginning Balance:  "  <<    fixed << setprecision(2) << balance << endl;

	//displays number of deposits
	for (int i = 0; i < numDeposits; i++) {
		cout << "\nDeposit " << i + 1 << ": " << setw(7)<< fixed << setprecision(2)<< Deposits[i] << endl;
	}
	//displays total deposits
	cout << "Total Deposits: " << setw(7)<< fixed << setprecision(2) << totalDeposit << endl;

	//displays number of checks
	for (int i = 0; i < numChecks; i++) {
		cout << "\nCheck " <<  i+1 <<": " << setw(7) << fixed << setprecision(2)<< Checks[i] << endl;
	}
	
	//display total checks
	cout << "Total Checks: " << setw(7)<< setprecision(2) << totalCheck << endl;

	//diplays number of withdraws
	for (int i = 0; i < numWithdraws; i++) {
		cout << "\nWithdraw " <<  i + 1 << ": " << setw(7)<< fixed << setprecision(2) << Witdraws[i] << endl;
	}

	//displays total withdrawal
	cout << "Total Withdrawals: "  << setw(7)<< fixed << setprecision(2) << totalWithdrawal << endl;
	

	cout << "---------------------\n";

	cout << "Ending Balance: "  << setw(7)<< fixed << setprecision(2) << balance + totalDeposit - totalCheck - totalWithdrawal << endl;
	 
	

	
	
} //end main
