//************Pyramid pattern printing*********************//
//         *
//       * * *
//     * * * * *

// #include <stdio.h>

// int main() {
//     int rows, i, j, space;

//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);

//     for (i = 1; i <= rows; i++) {
        
//         for (space = 1; space <= (rows - i); space++) {
//             printf("   ");
//         }

      
//         for (j = 1; j <= i; j++) {
//             printf("*  ");
//         }

       
//         for (j = (i - 1); j >= 1; j--) {
//             printf("*  ");
//         }

//         printf("\n");
//     }

//     return 0;
// }






//Staircase Pattern Printing//
//*
//* *
//* * *  

// #include<stdio.h>

// int main(){
//     int i,j,rows;

//     printf("Enter the number of rows: ");
//     scanf("%d",&rows);

//     for (i=1;i <= rows; i++) {
//         for (j=1; j<=i; j++){
//             printf("* ");
//     }
//     printf("\n");
//     }
//     return 0;
// }

//Staircase Pattern Printing//
// 1 2 3 4 5 
// 1 2 3 4
// 1 2 3
// 1 2
// 1

#include <stdio.h>

int main() {
    int numRows;
    
    printf("Enter the number of rows: ");
    scanf("%d", &numRows);
    
    for (int i = numRows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    return 0;
}


