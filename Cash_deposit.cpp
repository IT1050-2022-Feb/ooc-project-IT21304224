#include "Cash_deposit.h"
#include <iostream>
#include <cstring>
using namespace std;

Cash_Deposit::Cash_Deposit(){
  DepositDate = 0;
  SlipNo = 0;
}

Cash_Deposit::Cash_Deposit(int ddate, int slipno){
		DepositDate = ddate;
    SlipNo = slipno;
	}
	
void Cash_Deposit::display()
	{
		cout << "  " << endl; 
	}
	
void Cash_Deposit::setDepositDate()
	{
	}
char Cash_Deposit::getDepositDetails()
	{
	}
Cash_Deposit::~Cash_Deposit()
	{
		 cout << "Deleting payment" << endl;
	}

	