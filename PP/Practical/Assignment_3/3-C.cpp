//exp3-C
#include<iostream>
using namespace std;

class shopping{
	public:
		char giteam[10];
		double gamount;
		char eiteam[10];
		double eamount;
		char citeam[10];
		double camount;
		double grocery(){
			cout<<"Enter name of iteam";
			cin>>giteam;
			cout<<"Enter amount of iteam";
			cin>>gamount;
			return gamount;
		}
		double electronic(){
			cout<<"Enter name of iteam";
			cin>>eiteam;
			cout<<"Enter amount of iteam";
			cin>>eamount;
			return eamount;
		}
		double clothes(){
			cout<<"Enter name of iteam";
			cin>>citeam;
			cout<<"Enter amount of iteam";
			cin>>camount;
			return camount;
		}
};
int main()
{
	shopping g1,e1,c1;
	cout<<"AMOUNT OF GROCERY"<<g1.grocery()<<"\n";
	cout<<"AMOUNT OF ELECTROIC "<<e1.electronic()<<"\n";
	cout<<"AMOUNT OF CLOTHES "<<c1.clothes()<<"\n";
	return 0;
}
