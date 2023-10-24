#include<iostream>
#include<conio.h>
using namespace std;

int main() {
    int num, originalNum, reversedNum = 0;  
    cout << "Enter a three-digit number: ";
    cin >> num;
    originalNum = num;
    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    if (originalNum == reversedNum && originalNum >= 100 && originalNum <= 999) {
        cout << originalNum << " is a palindrome number." << endl;
    } else {
        cout << originalNum << " is not a palindrome number." << endl;
    }
    return 0;
}
