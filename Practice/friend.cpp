#include <iostream>
using namespace std;
class Test
{
private:
    int m;
    // friend function
    friend int add(Test);

public:
    Test() : m(0) {}
};
// freind function definition
int add(Test t)
{
    t.m += 5;
    return t.m;
}
int main()
{
    Test t;
    cout << "Result = " << add(t) << endl;
    return 0;
}