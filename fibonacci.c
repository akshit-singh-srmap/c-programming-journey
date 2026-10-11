#include <stdio.h>
int main()
{
    int n, a = 0, b = 1, c;
    printf("enter value of n: ");
    scanf("%d", &n);

    for(int i=1;i<=n;i++)
    {
    c =a+b;
    a=b;
    b=c;
    }
    printf("%d\n", c);
}