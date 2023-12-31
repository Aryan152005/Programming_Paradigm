//  WAP in c++ to overload postand pre decrement operator
// ARYAN ABHAY PARATAKKE
// 22070521070

#include <iostream>
using namespace std;
class Count
{
private:
    int value;

public:
    Count() : value(5) {}

    void operator--()
    {
        --value;
    }
    void operator--(int)
    {
        value--;
    }
    void display()
    {
        cout << "Count: " << value << endl;
    }
};

int main()
{
    Count count1;
    count1.display();
    count1--;
    count1.display();

    Count count2;
    count1.display();
    --count2;
    count1.display();

    return 0;
}
