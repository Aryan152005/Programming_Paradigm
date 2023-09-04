// WAP in C++ to calculate area of circle, square and rectangle usin classes and Objects.

#include <iostream>
#include <conio.h>
using namespace std;

class Data
{
public:
    double length;
    double breadth;
    double radius;

    double Circle()
    {
        return ((radius * radius) * 3.14);
    }
    double Square()
    {
        return (length * length);
    }
    double Rectangle()
    {
        return (length * breadth);
    }
};

int main()
{
    Data d1;
    int select;
    cout << "Select : 1) Square 2) Rectangle 3) Circle" << endl;
    cin >> select;

    if (select == 3)
    {
        cout << "Enter Radius : ";
        cin >> d1.radius;
        cout << "Area of circle = " << d1.Circle();
    }
    if (select == 2)
    {
        cout << "Enter Length : " << endl;
        cin >> d1.length;
        cout << "Enter Breadth : " << endl;
        cin >> d1.breadth;
        cout << "Area of Rectangle = " << d1.Rectangle() << endl;
    }
    if (select == 1)
    {
        cout << "Enter Length : " << endl;
        cin >> d1.length;
        cout << "Area of Square = " << d1.Square() << endl;
    }

    getch();
    return 0;
}