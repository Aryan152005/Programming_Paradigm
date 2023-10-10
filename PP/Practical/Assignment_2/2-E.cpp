 #include<iostream>
using namespace std;
int main(){
	int a,b,c,n;
	cout<<"Enter Operator code 1:Addition,2:Substraction,3:Multiplication,4:Division\n";
	cin>>n;
	cout<<"Enter two Operand\n";
	cin>>a>>b;
	switch(n){
		case(1):
			c=a+b;
			cout<<"Addition is "<<c;
			break;
		case(2):
			c=a-b;
			cout<<"Substraction is "<<c;
			break;
		case(3):
			c=a*b;
			cout<<"Multiplication is "<<c;
			break;
		case(4):
			c=a/b;
			cout<<"Division is "<<c;
			break;
		default:
			cout<<"INVALID OPERATOR";	
	}
	return 0;
}
