#include<stdio.h>
int main(){
    char ch = 'a';
    for(int row = 1; row<5; row++){
        for(int space= 4; space>row ; space--){
            printf("  ");
        }
        for(int col = 0; col<row; col++){
            printf(" %c  ",ch+col);
        }
        printf("\n");
        
    }
    return 0;
}