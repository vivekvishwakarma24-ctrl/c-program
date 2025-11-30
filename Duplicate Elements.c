#include <stdio.h>

int main() {
    int arr[100], n,i,j;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements are: ");

    int found = 0;
    for(i = 0; i < n; i++) {
        for( j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                found = 1;
                break;   // Prevents printing same duplicate multiple times
            }
        }
    }

    if(!found) {
        printf("No duplicates found.");
    }

    return 0;
}
