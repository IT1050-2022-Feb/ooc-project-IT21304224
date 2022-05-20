#include "Payment.h"
#include <iostream>
#include <cstring>
using namespace std;

Payment::Payment(){
        strcpy(paymentID, "");
        amount = 0;
        verificationCode = 0;
}
Payment::Payment(const char pID[], double amt, int v_code){
        strcpy(paymentID, pID);
        amount = amt;
        verificationCode = v_code;
}

void Payment::display(){
        cout << "Payment ID : " << paymentID << endl;
        cout << "Amount : " << amount << endl;
        cout << "verification Code : " << verificationCode << endl;
}
Payment::~Payment(){
   cout << "Deleting payment" << endl;
}