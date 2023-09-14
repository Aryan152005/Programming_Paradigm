// P in C++ to print the details of 10 students including name PRN, branch semester and fav programming language using the concet of functionoverloading
#include<iostream>
using namespace std;
class Stud{
    public:
    string name, branch, fav;
    int prn, sem;
    void details(){
        cout<<"Eneter Name: ";
        cin>>name;
        cout<<"Branch: ";
        cin>>branch;
        cout<<"Semester: ";
        cin>>sem;
        cout<<"PRN: ";
        cin>>prn;
        cout<<"Fav Programming Lnag: ";
        cin>>fav;
    }
    
    void display(){
        cout<<"Name= "<<name<<endl;
        cout<<"Branch= "<<branch<<endl;
        cout<<"Sem= "<<sem<<endl;
        cout<<"PRN= "<<prn<<endl;
        cout<<"Fav Programming lang= "<<fav<<endl<<endl;
    }
};
int main(){
    Stud s1[2];
    for(int i =0; i<2;i++){
        cout<<"Enter detals of student "<<i+1<<" =>"<<endl;
        s1[i].details();
    }
    cout<<"\nDetails of Student :"<<endl;
    for(int j =0; j<2; j++){
        cout<<"Student "<<j+1<<" : "<<endl;
        s1[j].display();
    }
    return 0;
}
