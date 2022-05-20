#pragma once
class Payment {
protected:
    char paymentID[10];
    double amount;
    int verificationCode;
public:
    Payment();
    Payment(const char pID[], double amt, int v_code);
    void display();
    ~Payment();
};