#include <stdio.h>
#include <string.h>
int main()
{
char str[] = "VIVEK, VISHWAKARMA!";
printf("Original string: %s\n", str);
// Convert string to lowercase
strlwr(str);
printf("Lowercase string: %s\n", str);
return 0;
}

