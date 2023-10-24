// Date : 8/8/2023

#include<iostream>
#include<conio.h>
using namespace std;

class Room {
    public:
        double length;
        double breadth;
        double height;

        double calculateArea(){
            return length * breadth ; 
        }

        double calculateVolume(){
            return length * height * breadth;
        }
};
int main()
{
    Room r1;

    r1.length = 10;
    r1.breadth = 10;
    r1.height = 10;

    cout << "Area of Room = " << r1.calculateArea() << endl;
    cout << "Volume of Room = " << r1.calculateVolume() << endl;


    getch();
    return 0;
}