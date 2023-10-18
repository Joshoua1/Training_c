#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

void fibonacci(int n) {
    int num1 = 0, num2 = 1, nextNum;

    printf("Fibonacci Series: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", num1);
        nextNum = num1 + num2;
        num1 = num2;
        num2 = nextNum;
    }

    printf("\n");
}

int main() {
    int choice, num;

    do {
        printf("************************Menu***************************\n");
        printf("1. Calculate Factorial\n");
        printf("2. Generate Fibonacci Series\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("Factorial of %d = %d\n", num, factorial(num));
                break;
            case 2:
                printf("Enter the number of terms: ");
                scanf("%d", &num);
                fibonacci(num);
                break;
            case 3:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }

        printf("\n");
    } while (choice != 3);

    return 0;
}
