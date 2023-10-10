//exp3-A
#include<iostream>
using namespace std;

class room{
	public:
		double length;
		double breadth;
		double height;
		double calculatearea(){
			return length*breadth;
		}
		double calculatevolume(){
			return length*breadth*height;
		}		
};
int main()
{
	//create object of room class
	room r1;
	//assign value to data members
	r1.length = 10.5;
	r1.height = 55.5;
	r1.breadth = 12.4;
	//printing the area and volume 
	cout<<"AREA OF ROOM IS "<<r1.calculatearea()<<"\n";
	cout<<"VOLUME OF ROOM IS "<<r1.calculatevolume();
	return 0;
}
