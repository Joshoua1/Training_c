#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b,add,sub,mul,div;
    float sum;
    printf("Enter num 1 =");
    scanf("%d",&a);
    printf("Enter num 2 =");
    scanf("%d",&b);
    add=a+b;
    printf("The sum is %d",add);
    sub=a-b;
    printf("\nThe diffrence is %d",sub);
    mul=a*b;
    printf("\nThe product is %d",mul);
    div=a/b;
    printf("\nThe division is %d",div);
}