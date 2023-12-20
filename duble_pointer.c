#include<stdio.h>
 
int main() {
    int number = 20;
    int *ptr;
    int **ptrDb;
    printf("\nThe address of the variable n is: %x\n", &number);
    ptr = &number;
    printf("\nThe address of variable n stored in single pointer is: %x\n",ptr);
    ptrDb = &ptr;
    printf("\nThe address of pointer ptr stored in double pointer is: %x\n",ptrDb);
    printf("\nThe address of double pointer ptrDb is: %x\n", &ptrDb);
    printf("\nThe value stored at pointer ptr: %d\n",*ptr);
    printf("\nThe value stored at another pointer ptrDb: %d\n",**ptrDb);

}