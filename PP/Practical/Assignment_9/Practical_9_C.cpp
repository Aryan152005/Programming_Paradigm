// wap to demostrate multilevel inheritance in which class university intialise university name and city the derived class from university college gives the details about the college affiliated to the university the next derived class from college student give the information about the total number of student in the college

#include <iostream>
using namespace std;
class university
{
public:
    string name = "Symbiosis University", city = "Nagpur";
};
class college : public university
{
public:
    string clg[5] = {"SIT", "SIBM", "SLS", "SCMS", "SSPAD"};
    void clgDetails()
    {
        cout << "Colleges affiliated to " << name << " are : " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << i + 1 << ". " << clg[i] << endl
                 << endl;
        }
    }
};
class student : public college
{
public:
    int num[5] = {354, 424, 532, 442, 230};
    void studDetails()
    {
        cout << "Number of Students : \n";
        for (int i = 0; i < 5; i++)
        {
            cout << i + 1 << ". " << clg[i] << " = " << num[i] << endl
                 << endl;
            ;
        }
    }
};
int main()
{
    college c1;
    c1.clgDetails();

    student s1;
    s1.studDetails();

    return 0;
}