// Implement hierarchical inheritance derived rectangle and triangle from the shape class compute the area of triangle and rectangle method overriding

#include <iostream>
using namespace std;
class shape
{
public:
    virtual float area()
    {
        return 0;
    }
};
class rectangle : public shape
{
private:
    float length, width;

public:
    rectangle(float l, float w)
    {
        length = l;
        width = w;
    }
    float area() override
    {
        return length * width;
    }
};
class triangle : public shape
{
private:
    float base, height;

public:
    triangle(float b, float h)
    {
        base = b;
        height = h;
    }
    float area() override
    {
        return 0.5 * base * height;
    }
};

int main()
{
    rectangle r1(5, 3);
    cout << "Area of Rectangle = " << r1.area() << " sq. units" << endl;

    triangle t1(4, 6);
    cout << "Area of Triangle = " << t1.area() << " sq. units" << endl;

    return 0;
} 