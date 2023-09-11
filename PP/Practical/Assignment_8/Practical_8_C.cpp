// WAP to overload unary decrement operator
#include<iostream>
using namespace std;
class Count{
    private:
    int value ;
    public:
    Count() : value(5){}
    void operator -- (){
        --value;
    }
    void operator -- (){
        value--;
    }
};