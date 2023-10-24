//EXP6B
/*Create a class Book with the following attributes title,author and year of publication implement a parametrized 
constructor that takes in values for all the three atributesand initializes the object accordingly. Display the details of
five books using the constructor*/
#include<iostream>
#include<string>
using namespace std;
class book{
	public:
		string title;
		string author;
		int year;
		book(string a, string b, int c){
			title=a;
			author=b;
			year=c;
		}	
		void display(){
			cout<<"Book Title:"<<title<<endl;
			cout<<"Book Author:"<<author<<endl;
			cout<<"Year of Publication:"<<year<<endl;
		}
};
int main(){
	book b1("Wings Of Fire","APJ Abdul Kalan",2012);
	b1.display();
	book b2("War and Peace","Tolstoy",1869);
	b2.display();
	book b3("Wuthering Heights","Emily Bronte",1847);
	b3.display();
	book b4("The Red and the Black","Stendhal",1830);
	b4.display();
	book b5("David Copperfield","Charles Dickens",1849);
	b5.display();
	return 0;
}
