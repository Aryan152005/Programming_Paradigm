// WAP to implement static functions

#include <iostream>
using namespace std;
class box
{
private:
    static int l, b, h;

public:
    static void print()
    {
        cout << "the value of l = " << l << "\nthe value of b= " << b << "\nthe value of h= " << h;
    }
    static void add()
    {
        int x = l + b + h;
        cout << " value is : " << x;
    }
};
int box::l = 10;
int box::b = 20;
int box::h = 30;
int main()
{
    box b;
    // b.print();//through object name
    box::print(); // through class name accessing the function
    box::add();
    return 0;
}