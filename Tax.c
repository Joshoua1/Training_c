#include<stdio.h>

int main(){
    float income,due;
    printf("Enter Income: ");
    scanf("%f",&income);
    

    if(income <= 10000){
        due = income * 2/100;
        printf("\nThe due is: %f\n",due);
    }else if(income >= 10001 && income <= 20000){
        due = income * 5/100;
        printf("\nThe due is: %f\n",due);
    }else if(income >= 20001 && income <= 30000){
        due = income * 7/100;
        printf("\nThe due is: %f\n",due);
    }else if(income >= 30001 && income <= 50000){
        due = income * 10/100;
        printf("\nThe due is: %f\n",due);
    }else if(income >= 50001){
        due = income * 15/100;
        printf("\nThe due is: %f\n",due);
    }
}