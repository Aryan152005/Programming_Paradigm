// All the banks operating in India are controlled by RBI.RBI has set guidelines which all banks must follow for example-RBI has set minimum interest rate applicable to saving bank account to 4% equally. Write a program to implement bank functionality create class namely customer account RBI as base classes and few derived classes as SBI,ICICI,AXIS.Asssume and implement required member variables and functions in each class.
#include <iostream>
using namespace std;
class RBI
{
protected:
    float interest = 4.0;

public:
    float account = 0;

    void displayAmt()
    {
        account = account + (account * (interest / 100.0));
        cout << "Bank balance after adding interest : Rs." << account << endl;
    }
};
class SBI : public RBI
{
public:
    SBI()
    {
        cout << "Enter the SBI bank balance : Rs.";
        cin >> account;
    }
};
class ICICI : public RBI
{
public:
    ICICI()
    {
        cout << "Enter the ICICI bank balance : Rs.";
        cin >> account;
    }
};
class AXIS : public RBI
{
public:
    AXIS()
    {
        cout << "Enter the AXIS bank balance : Rs.";
        cin >> account;
    }
};
int main()
{
    SBI acc1;
    ICICI acc2;
    AXIS acc3;
    acc1.displayAmt();
    acc2.displayAmt();
    acc3.displayAmt();
    return 0;
}
