#include <stdio.h>
void main()
{
    int a, b, choice;
    printf("Enter values of a and b: ");
    scanf("%d%d", &a, &b);

    printf("1 for addition\n");
    printf("2 for subtraction\n");
    printf("3 for multiplication\n");
    printf("4 for division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        printf("Result = %d", a+b);
        break;

    case 2:
        printf("Result = %d", a-b);
        break;

    case 3:
        printf("Result = %d", a*b);
        break;

    case 4:
        if(b!=0)
        printf("Result = %d", a/b);
        else
        printf("Division not possible");
        break;


    }


}