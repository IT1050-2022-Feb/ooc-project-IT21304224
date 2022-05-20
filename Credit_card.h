#include "Payment.h"
#pragma once

  class Credit_Card : public Payment
{
	private :
		int CardNo;
		char Type[10];
		int ExpireDate;
		char Holdername[20];
		int CVV;
	public :
  Credit_Card();
  Credit_Card(int cno, const char type[], int e_date, const char h_name[], int cvv);
  void display();
  char getCardDetails();
  void setCardDetails();
	~Credit_Card();
};