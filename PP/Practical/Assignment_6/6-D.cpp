//EXP6D
//WAP in C++ for addition of two complex numbers using parametrized constructor/
#include<iostream>
#include<string>
using namespace std;
class complex{
	public:
		int real,image;
		complex(int a=0, int b=0){
			real=a;
			image=b;
		}
		complex add(complex c1, complex c2){
			complex temp;
			temp.real=c1.real+c2.real;
			temp.image=(c1.image + c2.image);
			return temp;
		}
};
int main(){
	complex c1(2,3);
	complex c2(4,5);
	complex c3;
	c3=c3.add(c1,c2);
	cout<<"Sum: "<<c3.real<<" + i"<<c3.image;
	return 0;
}
