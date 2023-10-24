
// Create a class organization to initialize the details if te employee such as
// - name, designatation, and the salary compenents BASIC DA AND HRA of
// employee, Create a derived class Calculate_Sal to calculate total salary of
// employee, if basic of the employee is greater than 25k then bonus is 5k else
// 3k . the total salary is basic + DA + HRA + bonus amt . Display all the
// details of the employee for 5 employees
#include <iostream>
using namespace std;
class organization
{
protected:
    string fname, designation;
    double basic, da, hra;

public:
    void getDetails()
    {
        cout << "Enter name of Employee = ";
        cin >> fname;
        cout << "Enter Designation = ";
        cin >> designation;
        cout << "Enter DA = ";
        cin >> da;
        cout << "Enter HRA = ";
        cin >> hra;
        cout << "Enter Basic amt = ";
        cin >> basic;
    }
};
class Calculate_Sal : public organization
{
private:
    double total_sal;

public:
    void display()
    {
        if (basic > 25000)
        {
            total_sal = da + hra + 5000 + basic;
        }
        else
        {
            total_sal = da + hra + 3000 + basic;
        }
        cout << "Name = " << fname << endl;
        cout << "Designation = " << designation << endl;
        cout << "Salary of Employee = " << total_sal << endl;
        ;
    }
};

int main()
{
    Calculate_Sal o1[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Details of employeee " << i + 1 << " => " << endl;
        o1[i].getDetails();
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "Details of all employee " << i + 1 << " are =>" << endl;
        o1[i].display();
        cout << endl;
    }
    return 0;
}
