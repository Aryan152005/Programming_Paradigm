// wap in c++ to claculate the grocess salary of an employee by using the components basic DA,HRA and bonus if the bonus is calculate as 10% of basic if Basic is less than 25000, 15% of basic if basic is greater than 25000 using method overriding concept the bonus calculation must be done in the derived class

#include <iostream>
using namespace std;
class salary
{
protected:
    float basic, DA, HRA;

public:
    salary(float b)
    {
        basic = b;
        DA = 0;
        HRA = 0;
    }
    void calcSalary()
    {
        DA = 0.2 * basic;
        HRA = 0.1 * basic;
    }

    void display()
    {
        cout << "Basic: " << basic << " INR." << endl;
        cout << "Dearness Allowance (DA): " << DA << " INR." << endl;
        cout << "House Rent Allowance (HRA): " << HRA << " INR." << endl;
    }
};
class employee : public salary
{
private:
    float bonus;

public:
    employee(float b) : salary(b)
    {
        bonus = b;
    }
    void calcSalary()
    {
        salary::calcSalary();

        if (basic < 25000)
            bonus = 0.1 * basic;
        else
            bonus = 0.15 * basic;
    }
    void display()    {
        salary::display();

        cout << "Bonus: " << bonus << " INR." << endl;
    }
};
int main()
{
    salary s1(20000);
    employee e1(30000);

    s1.calcSalary();
    s1.display();
    cout << "\n \n";
    e1.calcSalary();
    e1.display();
    return 0;
}