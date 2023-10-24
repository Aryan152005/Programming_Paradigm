// c).Create a class named shape with a function that prints "This is shape".Create another class named polygon inheriting the class shape printing "Polygon is a shape" in method.Create two rectangle and triangle having function for printing "Rectangle is a polygon" and "Triangle is a polygon" respectively.Try calling the functions of this classes using the object of only one class.

#include <iostream>
using namespace std;
class shape
{
public:
    void display()
    {
        cout << "This is shape" << endl;
    }
};
class polygon : public shape
{
public:
    void display()
    {
        shape::display();
        cout << "Polygon is a shape" << endl;
    }
};
class rectangle : public polygon
{
public:
    void display()
    {
        polygon::display();
        cout << "Rectangle is a polygon" << endl;
    }
};
class triangle : public rectangle
{
public:
    void display()
    {
        rectangle::display();
        cout << "Triangle is a polygon" << endl;
    }
};
int main()
{
    triangle t;
    t.display();
    return 0;
}