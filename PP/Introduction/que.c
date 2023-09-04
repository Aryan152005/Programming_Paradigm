/* Write a program in C to calculate the total bill after deducting the discounted amount as follows:
1) If thw bill amount is greator than 5000 discount 10% in total amount.If the bill amount is greator than 4000 discount 7% in total amount.
else no discount */

#include <stdio.h>
int main()
{
    int pen, eraser, notebook, ruled_pgs, discount;
    float sum;
    printf("Enter total amount(INR) of Pen : ");
    scanf("%d", &pen);
    printf("Enter total amount(INR) of Eraser : ");
    scanf("%d", &eraser);
    printf("Enter total amount(INR) of Notebook : ");
    scanf("%d", &notebook);
    printf("Enter total amount(INR) of Ruled Pages : ");
    scanf("%d", &ruled_pgs);
    sum = pen + eraser + notebook + ruled_pgs;

    printf("Total amount : %.2f\n", sum);
    if (sum >= 5000)
    {
        discount = sum * 0.1;
        sum = sum - discount;
        printf("Final amount after 10 percent discount : %.2f \n", sum);
    }
    else if (5000 > sum >= 4000)
    {
        discount = sum * (7 / 100);
        sum = sum - discount;
        printf("Final amount after 7 percent discount : %.2f\n", sum);
    }
    else
    {
        printf("Final Amount : %.2f ", sum);
    }
    return 0;
}