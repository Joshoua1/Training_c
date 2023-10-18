#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    //area of circle//
    float radius,area,pi;

    pi = 3.14;
    printf("*******************AREA OF CIRCLE****************\n");
    printf("Enter the lenth of radius: ");
    scanf("%f",&radius);

    area = pi * radius * radius;

    printf("\nArea of circle is : %f\n\n",area);

    //area of rectangle//
    int l,b,rect;
    printf("\n\n***********AREA OF RECTANGLE***************\n");
    printf("Enter the length: ");

    scanf("%d",&l);

    printf("\nEnter the breadth: ");
    scanf("%d",&b);

    rect = l * b;
    printf("\nArea of rectangle is : %d\n",rect);

    //area of triangle//
    printf("\n\n***********AREA OF TRIANGLE***************\n");
    int base,hight,tri;
    printf("Enter the base of the triangle: ");
    scanf("%d",&hight);

    printf("\nEnter the hight of the triangle: ");
    scanf("%d",&base);

    tri = (base * hight)/2;

    printf("\nArea of triangle is: %d\n",tri);

    //Circunference of circle//
    printf("\n\n***********CIRCUMFERENCE OF CIRCLE***************");
    float r,pie,cir;
    printf("\nEnter the radius of circle: ");
    scanf("%f",&r);

    pie = 3.14;

    cir = 2 * pie * r;

    printf("Circumfernce of circle is: %f",cir);
}