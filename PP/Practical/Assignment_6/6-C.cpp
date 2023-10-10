//EXP6C
/*create class called person with the following attributes name,age and occupation of the person. Implement a paramterized 
constructor that the takes the value of all the three attributes as input. Display the details of three such persons.*/
#include<iostream>
#include<string>
using namespace std;
class person{
	public:
		string name;
		int age;
		string occupation;
		person(string a, int b, string c){
			name=a;
			age=b;
			occupation=c;
		}
		void display(){
		 	cout<<"Name: "<<name<<endl;
		 	cout<<"Age: "<<age<<endl;
		 	cout<<"Occupation: "<<occupation<<endl;
		 }
};
int main(){
	person p1("Pranita",18,"Editor");
	p1.display();
	person p2("Sakshi",19,"Coder");
	p2.display();
	person p3("Virat",25,"Cricketer");
	p3.display();
	return 0;
}
