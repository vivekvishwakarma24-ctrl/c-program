#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20], str2[20], str3[20];

    printf("\nEnter string1: ");
    fgets(str1, 20, stdin);

    printf("\nEnter string2: ");
    fgets(str2, 20, stdin);

    printf("\nLength of string1 is %lu", strlen(str1));

    strcat(str1, str2);
    printf("\nConcatenation of string1 and string2 is: %s", str1);

    strcpy(str3, str1);

    printf("\nstring1 is: %s", str1);
    printf("\nstring2 is: %s", str2);
    printf("\nstring3 is: %s", str3);

    printf("\nComparison of string2 and string3 is: %d", strcmp(str2, str3));

    return 0;
}
