#include "Credit_card.h"
#include <iostream>
#include <cstring>

using namespace std;

Credit_Card::Credit_Card(){
      CardNo = 0;
	  	strcpy(Type, "");
	  	ExpireDate = 0;
	  	strcpy(Holdername, "");
	  	CVV = 0;
}

Credit_Card::Credit_Card(int cno, const char type[], int e_date, const char h_name[], int cvv){
	  	CardNo = cno;
	  	strcpy(Type, type);
	  	ExpireDate =e_date;
	  	strcpy(Holdername, h_name);
	  	CVV = cvv;
};
void Credit_Card::display()
{
 	cout << "  " << endl;
}

void Credit_Card::setCardDetails()
{
}
char Credit_Card::getCardDetails()
{
  return CardNo;
}
Credit_Card::~Credit_Card()
{
	cout << "Deleting payment" << endl;
} 

