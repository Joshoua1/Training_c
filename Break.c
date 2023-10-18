// #include<stdio.h>

// int main(){
//     int num = 5;
//     while (num>0)
//     {
//         if (num == 3){
//             break;
//         }
        

//         printf("%d\n",num);

//         num--;
//     }
    
// }

// write a program to display the power of a number
#include <stdio.h>

double power(double base, int exponent) {
    double result = 1.0;

    if (exponent > 0) {
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
    } else if (exponent < 0) {
        for (int i = 0; i > exponent; i--) {
            result /= base;
        }
    }

    return result;
}

int main() {
    double base;
    int exponent;

    printf("Enter the base number: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    double result = power(base, exponent);
    printf("The result of %.2lf raised to the power of %d is %.2lf\n", base, exponent, result);

    return 0;
}
