#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int array[100]; 
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        printf("Element %d: ", i);
        scanf("%d", &array[i]);
    }

    printf("\nThe 1D array is:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
