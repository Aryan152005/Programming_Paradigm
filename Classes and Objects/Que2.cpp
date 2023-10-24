// WAP in C++ to create a class shopping and write the member functions to calculate the
//  billing amount of 1) Grocery items 2) Electronic gadgets 3) Clothes
// Take the inputs from the user.

#include<conio.h>
#include<iostream>
using namespace std;

class Shopping{
    public:
        int Soap;
        int Oil;
        int Toilet_Paper;
        int earphones;
        int charger;
        int keyboard;
        int Shirt;
        int Hoddie;
        int Pant;

    double Grocery(){
        return  ( (Soap * 10.11) + (Oil * 120) + (Toilet_Paper * 60));
    }
    double Electronic(){
        return  ( (earphones * 50) + (charger * 100) + (keyboard * 200));
    }
    double Clothes(){
        return  ( (Shirt * 299) + (Hoddie * 499) + (Pant * 699));
    }
};

int main(){
    Shopping s1;

    cout<<"Enter Number of Soap : ";
    cin>> s1.Soap;
    cout<<"Enter Literes of Oil : ";
    cin>> s1.Oil;
    cout<<"Enter Number of Toilet Papers : ";
    cin>> s1.Toilet_Paper;
    
}