// INFO450BankStatement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<conio.h>
#include<iostream>
#include<iomanip>
using namespace std;

class bank
{
	float balance;
	public: 
		void init();
		void deposit();
		void withdraw();
		void checks();
		void tran_sum(float more, float check, float less, float balance);
		
};

//enter balance
void bank :: init()
{
	cout << "Enter account balance : ";
	cin >> balance;
}

//enter deposits
void bank::deposit()
{
	float more;
	cout << " Depositing\n";
	cout << "Enter amount to depost : ";
	cin >> more;
	balance += more;
}
//enter withdrawal
void bank::withdraw()
{
	float less;
	cout << "     Withdrawl\n";
	cout << "Enter amount to withdraw : ";
	cin >> less;
	balance -= less;
}
 //enter checks
void bank::checks()
{
	float check;
	cout << "     Checks\n";
	cout << "Enter amount of checks : ";
	cin >> check;
	balance -= check;
}
//transactions summary
void bank::tran_sum(float more, float check,float less, float balance)
{
	cout << " Transaction Summary";
	cout << "Begining Balance :  " << balance <<endl;
	cout << "Total Deposits : " << more << endl;
	cout << "Total Checks : " << check << endl;
	cout << "Total Withdrawls : " << less << endl;

}
int main()
{
	bank obj;
	bool Continue = true;
	char choice = 's';
	do
	{
		
		cout << "Enter (W)ithdrawal, (D)eposit, (C)heck, (Q)uit : ";
		cin >> choice;

	
		switch (choice)
		{
		case 's': obj.init();
			break;
		case 'W':
		case 'w': obj.withdraw();
			break;
		case 'D':
		case 'd': obj.deposit();
			break;
		case 'C':
		case 'c':obj.checks();
			break;
		case 'Q':
		case 'q':
			cout << "Exit! \n";
			     Continue = false;
			break;
		default: cout << "Invaild entry! " << endl;

		}
	}while (Continue);
	
	
	return 0;
}

