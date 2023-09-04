// 
#include <conio.h>
#include <iostream>
using namespace std;
class addition
{
public:
    float f1, f2, f3, res;
    addition(float a, float b, float c)
    {
        f1 = a;
        f2 = b;
        f3 = c;
        res = f1 + f2 + f3;
    }
    void display()
    {
        cout << "Addition result = " << res <<endl;
    }
};
int main()
{   
    float u1, u2, u3;
    cout<<"Enter three values for addition : ";
    cin>>u1;
    cin>>u2;
    cin>>u3;
    addition a1(u1, u2, u3);
    a1.display();
    addition a2(20.32, 20.3, 20.1);
    a2.display();
    return 0;
}

// create a class with name BOOKS with the following attribute, title , author and year. Implement a parametrized constructor that takes in value for all the three attribute and iinitialize the object 
// Create a class called person with the following attributes : Name, Age and Occupation of the person. Implement a parameterized constructor that takes the value of all the three attributes as input. Display the details of three such persons 