//exp3-D
#include<iostream>
using namespace std;

class cal{
	public:
		double side;
		double area(){
			return side*side;
		}
	public:
		double volume()
		{
			return side*side*side;
		}
};
int main()
{
	cal c;
	c.side=20;
	cout<<"Area is "<<c.area()<<"\n";
	cout<<"Volume is "<<c.volume();
	return 0;
}
