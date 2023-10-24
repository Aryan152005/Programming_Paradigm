// WAP in C++ to find the greater number between the two numbers who are private members of two different classses using friend class implementation and display the result.

#include <iostream>
using namespace std;

class Two;
class One
{
private:
    int num1;
    friend int isGreator(int num1, int num2);

public:
    One() : num1(5){};
};

class Two
{
private:
    int num2;
    friend int isGreator(int num1, int num2);

public:
    Two() : num2(3){};
};
int isGreator(int num1, int num2)
{
    if (num1 > num2)
    {
        cout << num1 << " is greator than " << num1;
    }
    else{
        cout << num2 << " is greator than " << num3;
    }
}
