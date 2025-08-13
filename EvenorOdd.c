#include <stdio.h>

int main() {
    int num, choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num % 2 == 0)
            printf("%d is Even\n", num);
        else
            printf("%d is Odd\n", num);

        printf("Do you want to check another number? (1 = Yes / 0 = No): ");
        scanf("%d", &choice);

    } while(choice == 1);

    printf("Program ended.\n");
    return 0;
}
