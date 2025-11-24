#include<stdio.h>

int main() {
    int r, i, j, sum = 0;
    
    printf("Enter the number of rows/columns of square matrix: ");
    scanf("%d", &r);
    
    int a[10][10];

    printf("Enter the elements of matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < r; j++) {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    for(i = 0; i < r; i++) {
        sum = sum + a[i][i];
    }
    
    printf("\nTrace of the matrix: %d\n", sum);
    
    return 0;
}