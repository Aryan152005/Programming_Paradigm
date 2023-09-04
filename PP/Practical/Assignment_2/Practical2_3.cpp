#include <iostream>
#include<conio.h>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int factorial = 1;
    int i = 1;

    while (i <= num) {
        factorial *= i;
        i++;
    }

    cout << "Factorial of " << num << " is: " << factorial << endl;

    return 0;
}
