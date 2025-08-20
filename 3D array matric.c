#include <stdio.h>

int main() { 
    int x, y, z;
    printf("Enter size of first dimension (x): ");
    scanf("%d", &x);
    printf("Enter size of second dimension (y): ");
    scanf("%d", &y);
    printf("Enter size of third dimension (z): ");
    scanf("%d", &z);

    int array[10][10][10];  
    printf("\nEnter elements:\n");
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            for(int k = 0; k < z; k++) {
                printf("Element at [%d][%d][%d]: ", i, j, k);
                scanf("%d", &array[i][j][k]);
            }
        }
    }
    printf("\nThe 3D array is:\n");
    for(int i = 0; i < x; i++) {
        printf("Layer %d:\n", i);
        for(int j = 0; j < y; j++) {
            for(int k = 0; k < z; k++) {
                printf("%d ", array[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
