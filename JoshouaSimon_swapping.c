#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("\nEnter the second number: ");
    scanf("%d", &num2);
    printf("\nBefore swapping num1=%d, num2=%d\n", num1, num2);
    swap(&num1, &num2);
    printf("\nAfter swapping num1=%d, num2=%d", num1, num2);
}

#include<stdio.h>

int main(){
    int num;
    int *pNum;

    pNum = &num;
    num=100;
    printf("Using variable num: \n");
    printf("value of num: %d \naddress of num:%u \n",num,&num);
    printf("Using pointer variable: \n");
    printf("value of num: %d \naddress of pNum:%u \n",*pNum,pNum);

    return 0;


}

