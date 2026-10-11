#include<stdio.h>
int main()
{
    int n, res = 0;
    printf("enter value of n: ");
    scanf("%d", &n);

    for(int i = 1; i<=10; i++)
    {
    res = n*i;
    printf("%dx%d=%d\n", n, i, res);
    } 
}