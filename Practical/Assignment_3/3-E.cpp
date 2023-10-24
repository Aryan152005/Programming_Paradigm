#include<iostream>
using namespace std;
class bank{
	public:
		double balance = 5000;
	public:
		double saving_acc(double intrest)//saving acc rate
		{
			balance +=(balance*intrest);
			return balance;
		}
};
int main()
{
	bank b1,b2;
	cout<<"Your Total Balance is "<< b1.saving_acc(0.05);
	cout<<"\nYour Total Balance is "<< b2.saving_acc(0.02);
	
	return 0;
}
