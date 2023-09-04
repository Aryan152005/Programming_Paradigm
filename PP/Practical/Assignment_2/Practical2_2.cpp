#include <iostream>
#include<conio.h>
using namespace std;

int main() {
    int n;

    cout << "Enter the value of 'n': ";
    cin >> n;

    int prev = 0, current = 1, next;

    cout << "Fibonacci series up to " << n << " numbers: ";

    for (int i = 1; i <= n; i++) {
        cout << prev << " ";

        next = prev + current;
        prev = current;
        current = next;
    }

    return 0;
}
