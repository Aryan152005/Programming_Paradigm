// WAP to implement method overriding for calculation of the gross salary of employee if the basic salary DA and HRA compnent are initialized in the base class and the bonus amount is calculated in the derived class as, if basic is less than 25k then bonus is 10% of basic amt else the bonus is 15% of basic.

#include <iostream>
using namespace std;
class Base
{
public:
    double da = 12000, hra = 2000, basic = 34000;
    double amt = da + hra + basic;
    void display()
    {
        cout << "DA = " << basic << endl;
        cout << "HRA = " << basic << endl;
        cout << "Basic Salary = " << basic << endl;
        cout << "Salary = " << amt << endl
             << endl;
    }
};
class Derived : public Base
{
public:
    double bonus, gross;
    void BonusCalc()
    {
        if (basic < 25000)
        {
            bonus = basic * 0.1;
        }
        else
        {
            bonus = basic * 0.15;
        }
        gross = amt + bonus;
    }
    void display()
    {
        cout << "Bonus is = " << bonus << endl;
        cout << "Gross Salary = " << gross << endl;
    }
};
int main()
{
    Derived d1;
    d1.Base::display();
    d1.BonusCalc();
    d1.display();
    return 0;
}
