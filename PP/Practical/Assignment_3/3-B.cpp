//exp3-B
#include<iostream>
using namespace std;

class shape{
	public:
		double length;
		double breadth;
		double height;
		double radius;
		double side;
		double areaofrectangle(){
			cout<<"ENTER LENGTH AND BREADTH ";
			cin>>length>>breadth;
			return length*breadth;
		}
		double areaofsquare(){
			cout<<"ENTER SIDE ";
			cin>>side;
			return side*side;
		}
		double areaofcircle(){
			cout<<"ENTER RADIUS ";
			cin>>radius;
			return 3.14*(radius*radius);
		}
};
int main()
{
	//create object of room class
	shape s1,s2,s3;
	//assign value to data members
	//r1.length = 10.5;
	//r1.height = 55.5;
	//r1.breadth = 60.4;
	//printing the area and volume 
	cout<<"AREA OF SQUARE IS "<<s1.areaofsquare()<<"\n";
	cout<<"AREA OF RECTANGLE IS "<<s1.areaofrectangle()<<"\n";
	cout<<"AREA OF CIRCLE IS "<<s1.areaofcircle()<<"\n";
	return 0;
}
