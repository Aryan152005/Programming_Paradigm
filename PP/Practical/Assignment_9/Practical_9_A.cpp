// Write CPP program to implement single inheritance class shape is used
// initialize the parameter of different shapes and class area is derived from
// shape class to find out the area of circle, square and rectangle

// ARYAN PARATAKKE
// 22070521070

#include <iostream>
using namespace std;
class shape
{
protected:
  double length = 2, breadth = 2, radius = 2, side = 2;
};
class area : public shape
{
private:
  double ar_rec = length * breadth;
  double ar_sq = side * side;
  double ar_cir = 3.14 * radius * radius;

public:
  void display()
  {
    cout << "Area of Rectangle = " << ar_rec << endl;
    cout << "Area of Square = " << ar_sq << endl;
    cout << "Area of Circle = " << ar_cir << endl;
  }
};
int main()
{
  area a1;
  a1.display();
  return 0;
}
