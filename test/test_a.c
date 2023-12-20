#include <stdio.h>
 
void swap(int *x,int *y)
{
    int temp;
    temp   = *x;
    *x   = *y;
    *y   =  temp;
}

int main()
{
    int a,b; 
    printf("Enter value of A: ");
    scanf("%d",&a);
    int *pa = &a;
    printf("Enter value of B: ");
    scanf("%d",&b);
    int *pb = &b;
 
    printf("Before Swapping\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);


    int temp = *pa;
    *pa = *pb;
    *pb = temp;

    // swap(&a,&b);
 
    printf("After Swapping\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b); 
}