/* Write a Program in c++ to check a 3 digit number etered by user is pallindrome or not*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int num,fd,sd,ld,sum;
    cout<<"Enter a number : ";
    cin>>num;
    int temp=num;
    while(num != 0){  
        ld = num%10;
        num = num/10;
        sum = sum + ld*10;
    }

    if(sum == temp){
        cout<<"Entered number "<<temp<<" is Pallindrome";
    }
    else{
        cout<<"Entered number "<<temp<<" is not Pallindrome";
    }
    return 0;
}