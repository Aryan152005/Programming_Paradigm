#include<iostream>
using namespace std;
class A{
    public:
    float bonus;
};
class B : public A
{
    public:
    float salary;
};
int main(){
B b1;
b1.bonus  = 22.32;
b1.salary = 10000;
cout<<"Bonus = "<<b1.bonus<<endl;
cout<<"Salary = "<<b1.salary<<endl;
return 0;
}