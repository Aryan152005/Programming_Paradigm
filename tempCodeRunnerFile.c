#include <stdio.h>
#include <stdlib.h>

struct Node
{    int coeff;
    int expo;
    struct Node *next;
};

struct Node *createNode(int coeff, int exp)
{   struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {        printf("Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    newNode->coeff = coeff;
    newNode->expo = exp;
    newNode->next = NULL;
    return newNode;
}

void addTerm(struct Node **poly, int coeff, int exp)
{    struct Node *newNode = createNode(coeff, exp);
    if (*poly == NULL)
    {        *poly = newNode;
    }
    else
    {
        struct Node *temp = *poly;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

struct Node *addPoly(struct Node *poly1, struct Node *poly2)
{
    struct Node *result = NULL;

    while (poly1 != NULL || poly2 != NULL)
    {
        if (poly1 == NULL)
        {
            addTerm(&result, poly2->coeff, poly2->expo);
            poly2 = poly2->next;
        }
        else if (poly2 == NULL)
        {
            addTerm(&result, poly1->coeff, poly1->expo);
            poly1 = poly1->next;
        }
        else
        {
            if (poly1->expo > poly2->expo)
            {
                addTerm(&result, poly1->coeff, poly1->expo);
                poly1 = poly1->next;
            }
            else if (poly1->expo < poly2->expo)
            {
                addTerm(&result, poly2->coeff, poly2->expo);
                poly2 = poly2->next;
            }
            else
            {
                addTerm(&result, poly1->coeff + poly2->coeff, poly1->expo);
                poly1 = poly1->next;
                poly2 = poly2->next;
            }
        }
    }

    return result;
}

void displayPoly(struct Node *poly)
{
    while (poly != NULL)
    {
        printf("%dx^%d", poly->coeff, poly->expo);
        poly = poly->next;
        if (poly != NULL)
        {
            printf(" + ");
        }
    }
    printf("\n");
}

void freeList(struct Node *poly)
{
    struct Node *temp;
    while (poly != NULL)
    {
        temp = poly;
        poly = poly->next;
        free(temp);
    }
}

int main()
{
    struct Node *poly1 = NULL;
    struct Node *poly2 = NULL;

    addTerm(&poly1, 5, 2);
    addTerm(&poly1, 4, 1);
    addTerm(&poly1, 2, 0);

    addTerm(&poly2, 3, 3);
    addTerm(&poly2, 5, 2);
    addTerm(&poly2, 7, 1);
    addTerm(&poly2, 1, 0);

    printf("Polynomial 1: ");
    displayPoly(poly1);
    printf("Polynomial 2: ");
    displayPoly(poly2);

    struct Node *result1 = addPoly(poly1, poly2);
    printf("Polynomial Addition: ");
    displayPoly(result1);

    freeList(poly1);
    freeList(poly2);
    freeList(result1);

    return 0;
}
