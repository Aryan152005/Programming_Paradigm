#include <iostream>
using namespace std;
class complex
{
private:
    int real, img;

public:
    complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }

    complex operator-(complex &obj)
    {
        complex res;
        res.real = real - obj.real;
        res.img = img - obj.img;
        return res;
    }

    void display()
    {
        cout << real << " is " << img;
    }
};
int main()
{
    complex c1(8, 3), c2(3, 2);
    complex c3 = c1 - c2;
    c3.display();
    return 0;
}