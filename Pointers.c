// #include<stdio.h>

// void main(void){
//     int nRate=10;
//     printf("Variable name is nRte. \n");

//     printf("size of nRate (int) is %d bytes. \n",nRate);
//     printf("size of short int is %d bytes. \n",sizeof(short int));
//     printf("initial value stored at nRate is %d.\n",nRate);
//     printf("memory address of nRate is %p.\n",nRate);
// }

#include<stdio.h>

int main(){
    int* pc, c;

    c = 22;
    printf("address of c: %p\n", &c);
    printf("value of c :%d\n\n",c);

    pc =&c;
    printf("address of pc: %p\n", &pc);
    printf("content of pointer pc :%d\n\n",pc);

    c = 11;
    printf("address of pointer pc: %p,\n",pc);
    printf("content of pointer pc :%d\n\n",pc);

    *pc = 2;
    printf("address of c: %p\n",&c);
    printf("value of c :%d\n\n",c);
    return 0;
}