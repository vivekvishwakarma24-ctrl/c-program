#include<stdio.h>

void sum(int a, int b)
{
    int c = a + b;
    printf("sum is %d\n", c);
}

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum(a, b);
    return 0;
}
