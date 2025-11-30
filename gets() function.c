#include <stdio.h>

int main()
{
    char str[20];

    printf("Enter the string? ");
    fgets(str, 20, stdin);
    printf("You entered %s", str);

    return 0;
}
