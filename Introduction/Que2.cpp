// Create a class Car and implement copy constructor for copying model and year attributes of a car from one object to other object.

# include <iostream>
#include<string.h>
using namespace std;
class Car{
    public :
    string model;
    int year;

    Car(string name, int date){
        model = name;
        year =  date;
    }

    Car(Car &obj){
        model = obj.model;
        year = obj.year;
    }
    void display(){
        cout<<"MODEL : "<<model<<endl;
        cout<<"Year : "<<year<<endl;
    }
};
int main(){
    string nm;
    int yr;
    cout<<"Enter Model = ";
    cin>>nm;
    cout<<"Enter Year = ";
    cin>>yr;
    Car c1(nm,yr);
    Car c2 = c1;
    c1.display();
    c2.display();

    return 0;
}
