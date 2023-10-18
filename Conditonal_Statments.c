//To check wether the number is even or odd//


#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("Number is even");
    } 
    else {
        printf("Number is odd");
    }
}


// #include<stdio.h>

// int main(){
//     int a,b;
//     printf("Enter num1=");
//     scanf("%d",&a);
//     printf("\nEnter num2=");
//     scanf("%d",&b);
//     if (a > b){
//         printf("\nNum1 is greater");
//     }
//     else{
//         printf("\nNum2 is greater");
//     }
// }


// write a program on c to see if the number is divsible by 5

// #include <stdio.h>

// int main() {
//     int num;
//     printf("Enter the number=");
//     scanf("%d", &num);
//     if (num % 5 == 0) {
//         printf("\nNumber is divisible by 5");
//     } 
//     else {
//         printf("\nNumber is not divisible by 5");
//     }
// }



// write a program wether the yaer entered by user is a leap yaer

// #include <stdio.h>

// int main() {
//     int num;
//     printf("Enter the year");
//     scanf("%d", &num);
//     if (num % 4 == 0) {
//         printf("\nThe Year ia a laep year");
//     } 
//     else {
//         printf("\nThe Year ia not a laep year");
//     }
// }

// #include<stdio.h>

// int main()
// {
//     char ch;
//     printf("Enter the character ");
//     scanf("%c",&ch);
//     if (ch>="A" && ch<="Z"){
//         printf("Entered alphabrt is an upper case alphabet\n");
//     }else if(ch>="a" && ch<="z"){
//         printf("Entered alphabrt is an lower case alphabet\n");
//     }else {
//         printf("Entered alphabrt is a numeric alphabet\n");
//     }

// write a c code to check wetehr the aphabet is an uppercase letter or lowercase letter

// #include <stdio.h>
// #include <ctype.h>

// int main()
// {
//     char ch;
//     printf("Enter the character: ");
//     scanf("%c", &ch);

//     if (isupper(ch)) {
//         printf("Entered alphabet is an upper case alphabet.\n");
//     } else if (islower(ch)) {
//         printf("Entered alphabet is a lower case alphabet.\n");
//     } else {
//         printf("Entered character is a numeric or special character.\n");
//     }

//     return 0;
// }


// write a c program to input month number and input number of days in the month

// #include<stdio.h>

// int main(){
//     int num;
//     printf("Enter the month number = ");
//     scanf("%d",&num);

//     if (num == 4 || num == 6 || num == 9 || num == 11){
//         printf("Number of days is 30");
//     } else if(num == 2){
//         printf("Number of days is 28");
//     } else if(num == 1 || num == 3 || num == 5 || num == 7 || num == 8 || num == 10 || num == 12){
//         printf("Number of days is 31");
//     }else{
//         printf("invalid input");
//     }
// }


// write a procram to check wether the triangle is which type of triangle it is Equvilatral Isoceles and Scalane

#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter legth of side a= ");
    scanf("%d",&a);
    printf("Enter legth of side b= ");
    scanf("%d",&b);
    printf("Enter legth of side c= ");
    scanf("%d",&c);

    if (a == b && b == c && c == a){
        printf("Equilateral triangle");
    }
    else if (a ==b || a == c){
        printf("Isosceles triangle");
    }
    else{
        printf("Scalane Triangle");
    }

}