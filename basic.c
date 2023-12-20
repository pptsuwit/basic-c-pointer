#include <stdio.h>

// void func(int p){
//     printf("function pointer value is : %d\n", p);
// }
void editValue(int *value){
    *value = 9999;
}

int main()
{
    //#pointer is
    int a,b,c;
    int* pointer1;
    int * pointer2; 
    int *pointer3;

    int x,y,z,*ptr,* ptr2;
    
    printf("a : %p | %d\n", &a, a);
    printf("b : %p | %d\n", &b, b);
    printf("c : %p | %d\n", &c, c);
    printf("pointer1 : %p | %p\n", &pointer1, pointer1);
    printf("pointer2 : %p | %p\n", &pointer2, pointer2);
    printf("pointer3 : %p | %p\n", &pointer3, pointer3);

    // // #define pointer
    // int variableInt = 100;
    //// int *pointerInt = variableInt;
    //int *pointer = &variableInt;

    // printf("variableInt : %p | %d\n", &variableInt,variableInt);
    // printf("pointer : %p | %p | %d\n", &pointer,pointer,*pointer);

    // variableInt = 200;
    // printf("After change variable \n");
    // printf("pointer : %p | %p | %d\n", &pointer,pointer,*pointer);

    // *pointer = 500;
    // printf("After change *pointer \n");
    // printf("variableInt : %p | %d\n", &variableInt,variableInt);
    // printf("pointer : %p | %p | %d\n", &pointer,pointer,*pointer);
    
    //// #change pointer address
    // int variableInt2 = 300;
    // printf("variableInt2 : %p | %d\n", &variableInt2,variableInt2);

    // printf("before : %p | %p | %d\n", &pointer,pointer,*pointer);
    // pointer = &variableInt2;
    // printf("after : %p | %p | %d\n", &pointer,pointer,*pointer); 

    // char variableString[] = "test";
    // *pointer = &variableString;


    //// #function pointer
    // int variable = 100;
    // int *ptr = &variable;
    // editValue(&variable);
    // editValue(ptr);


    // void (*function_ptr)(int) = &func; 
    // (*function_ptr)(10); 
}    


