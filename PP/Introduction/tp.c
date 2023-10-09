#include <stdio.h>

int main()
{
    int num1 , num2;
    printf("Enter 1st Integer: ");
    scanf("%d", &num1);
    printf("Enter 2nd Integer: ");
    scanf("%d", &num2);
    if(num1==num2){
        printf("Integer 1 is equal to Integer 2");
    }
    else{
        if(num1>num2){
            printf("Integer 1 is greater than Integer 2");
        }
        else{
            printf("Integer 1 is less than Integer 2")
        }
    }