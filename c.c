#include<stdio.h>

int main()
{
    int a[10][10], lower[10][10];
    int i, j, n;

    printf("Enter the size of square matrix(n): ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    /* Store lower triangular matrix */
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i >= j)  /* Elements on or below diagonal */
                lower[i][j] = a[i][j];
            else        /* Elements above diagonal set to 0 */
                lower[i][j] = 0;
        }
    }

    /* Print original matrix */
    printf("\nOriginal Matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    /* Print lower triangular matrix */
    printf("\nLower Triangular Matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d\t", lower[i][j]);
        }
        printf("\n");
    }

    return 0;
}
