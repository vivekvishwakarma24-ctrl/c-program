#include <stdio.h>

int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int main()
{
    int x, y;
    printf("enter two numbers");
    scanf("%d%d", &x, &y);
    printf("%d\n", sum(x, y));
    printf("%d\n", sum(10, 20));
    return 0;
}
