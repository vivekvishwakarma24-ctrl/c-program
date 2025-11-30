#include <stdio.h>

void swap(int, int);   // prototype of the function

int main()
{
    int a = 10;
    int b = 20;

    printf("Before swapping the values in main a = %d, b = %d\n", a, b);  // actual parameters
    swap(a, b);
    printf("After  swapping values in main a = %d, b = %d\n", a, b);      // still 10, 20

    return 0;
}

void swap(int a, int b)    // formal parameters
{
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("After swapping values in function a = %d, b = %d\n", a, b);   // 20, 10
}
