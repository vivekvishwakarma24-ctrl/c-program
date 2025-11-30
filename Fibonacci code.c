#include <stdio.h>

int fibonacci(int i)
{
    if (i <= 1) {
        return i;
    } else {
        return fibonacci(i - 1) + fibonacci(i - 2);
    }
}

int main()
{
    int n;
    printf("Enter the number of terms in the Fibonacci sequence: ");
    scanf("%d", &n);

    printf("Fibonacci Sequence:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
