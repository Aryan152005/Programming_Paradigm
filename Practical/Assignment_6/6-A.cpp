//EXP6A
/*Create a parametrized constructor addition to perfrom the addition of three float values.
display the addition results for two different set of values*/
#include<iostream>
using namespace std;
class add
{
	public:
		add(float a,float b,float c)
		{
			cout<<(a+b+c)<<endl;
		}
};
int main()
{
	add a1(2,3,5);
	float a,b,c;
	cout<<"Enter threee numbers:";
	cin>>a>>b>>c;
	add a2(a,b,c);
	return 0;
}
