#include "Payment.h"
#pragma once

class Cash_Deposit : public Payment
{
private :
	  int DepositDate;
    int SlipNo;
public :
  Cash_Deposit();
	Cash_Deposit(int ddate, int slipno);
  void display();
  void setDepositDate();
  char getDepositDetails();
  ~Cash_Deposit();
};
	