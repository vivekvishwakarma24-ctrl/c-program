#include <stdio.h>

int nSum(int n)
{
    // base condition to terminate the recursion when n = 0
    if (n == 0) {
        return 0;
    }

    // recursive case / recursive call
    return n + nSum(n - 1);
}

int main()
{
    int n = 5;
    // calling the function
    int sum = nSum(n);
    printf("Sum of First %d Natural Numbers: %d\n", n, sum);
    return 0;
}
