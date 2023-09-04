#include <stdio.h>

int main() {
    printf("Even numbers between 1 and 100:\n");
    
    for (int i = 2; i <= 100; i += 2) {
        printf("%d ", i);
    }

    return 0;
}
