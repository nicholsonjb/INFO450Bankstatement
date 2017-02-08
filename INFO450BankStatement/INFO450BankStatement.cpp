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
		void tran_sum(float more, float check);
		
};


void bank :: init()
{
	cout << "Enter account balance";
	cin >> balance;
}

void bank::deposit()
{
	float more;
	cout << " Depositing";
	cout << "Enter amount to depost : ";
	cin >> more;
	balance += more;
}

void bank::withdraw()
{
	float amt;
	cout << "     Withdrawl";
	cout << "Enter amount to withdraw : ";
	cin >> amt;
	balance -= amt;
}
 
void bank::checks()
{
	float check;
	cout << "     Withdrawl";
	cout << "Enter amount to withdraw : ";
	cin >> check;
	balance -= check;
}

void bank::tran_sum(float more, float check)
{
	cout << " Transaction Summary";
	cout << "Begining Balance :  " << balance <<endl;
	cout << "Total Deposits : " << more << endl;
	cout << "Total Checks : " << check << endl;
	cout << "Total Withdrawls : " << amt << endl;

}
void main(void)
{
	bank obj

	switch (choice)
	{

	case 'W': 
	case 'w': obj.withdraw();
		break;
	case 'D':
	case 'd': obj.deposit();
		break;
	case 'C' : 
	case 'c':obj.checks();
		break;
	case 'Q':
	case 'q': 
		break;
		default << "Invaild entry! " << endl;


	}
    return 0;
}

