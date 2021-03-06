// INFO450BankStatement.cpp : Defines the entry point for the console application.
/* BankStatement Calculator
Author: James Nicholson
Purpose: A program  that collects input from the  user to track transactions  made on a bank account. 
These transactions include :  Withdrawals,  Checks and Deposits. Topics covered are console input & output, loops, 
conditional statements.
*/

//

#include "stdafx.h"
#include<conio.h>
#include<iostream>
#include<iomanip>
using namespace std;

//declare variables
float balance;
char choice; 
float amt;
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




int main()
{
	//enter balance
	cout << "Greetings!" << endl;
	cout << "\nPlease enter your balance: " << endl;
	cin >> balance;
	cout << "\nEnter Transactions" << endl;
	cout << "---------------------\n" << endl;

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

	//Transaction Summary output
	cout << "\nTransactions Summary" << endl;
	cout << "-------------------------\n";
	cout << "Beginning Balance: "  << setw(2) << fixed << setprecision(2) << balance << endl;

	//loop that displays number of deposits in an array
	cout << "\n*Deposits: " << endl;
	for (int i = 0; i < numDeposits; i++) {
		cout << setw(25)<< fixed << setprecision(2)<< Deposits[i] << endl;
	}
	//displays total deposits
	cout <<  setw(26) << "--------\n";
	cout << "Total Deposits: " << setw(9)<< fixed << setprecision(2) << totalDeposit << endl;
	
	//loop that displays number of chckes in an array
	cout << "\n*Checks: " << endl;
	for (int i = 0; i < numChecks; i++) {
		cout << setw(25) << fixed << setprecision(2)<< Checks[i] << endl;
	}
	
	//display total checks
	cout << setw(26) << "--------\n";
	cout << "Total Checks: " << setw(11)<< setprecision(2) << totalCheck << endl;
	
	//loop that displays number of withdrawls in an array
	cout << "\n*Withdrawals : " << endl;
	for (int i = 0; i < numWithdraws; i++) {
		cout  << setw(25)<< fixed << setprecision(2) << Witdraws[i] << endl;
	}

	//displays total withdrawal
	cout << setw(26) << "--------\n";

	cout << "Total Withdrawals: "  << setw(6)<< fixed << setprecision(2) << totalWithdrawal << endl;
	cout << "\n-------------------------\n";

	cout << "Ending Balance: "  
		<< setw(9)<< fixed << setprecision(2) 
		<< balance + totalDeposit - totalCheck - totalWithdrawal << endl;

	
	
} //end main
