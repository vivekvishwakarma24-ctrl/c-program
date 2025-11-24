#include<stdio.h>

int main() {
    int a[10][10], t[10][10], i, j, r, c;
    
    printf("Enter rows and columns: \n");
    scanf("%d%d", &r, &c);
    
    printf("Enter elements into A matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            t[j][i] = a[i][j];
        }
    }
    
    printf("\nOriginal Matrix A:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
    printf("\nTranspose Matrix T:\n");
    for(i = 0; i < c; i++) {
        for(j = 0; j < r; j++) {
            printf("%d\t", t[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}