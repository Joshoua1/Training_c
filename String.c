// #include <stdio.h>

// int main() {
//     char str[100]
//     printf("Enter a string: ");
//     scanf("%[^\n]", str);

//     int count = 0;
//     for (int i = 0; str[i] != '\0'; i++) {
//         count++;
//     }

//     char countStr[10];
//     sprintf(countStr, "%d", count);
//     printf("Number of characters: %s\n", countStr);

//     return 0;
// }

#include<stdio.h>

int main(){
    char a[100];
    int n= sprintf(a,"Database");
    printf("value of thr string is %d",n);
    return 0;
}