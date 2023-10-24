#include <stdio.h>

int main() {
    int rows = 3; // Number of rows in the pattern
    
    for (int i = 1; i <= rows; i++) {
        // Print spaces for the left side
        for (int j = i; j < rows; j++) {
            printf("\t");
        }
        
        // Print stars for the center
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*\t");
        }
        
        // Move to the next line
        printf("\n");
    }

    return 0;
}
