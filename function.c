#include<stdio.h>

// void functionDublePointer(int **value,char msg[])
// {
//     printf("%s %d\n",msg, **value);
// }
void function(int *value,char msg[])
{
    printf("%s %d\n",msg, *value);
}

int main() {
    int variable = 20;

    int varPointer = 50;
    int *ptr = &varPointer;


    function(&variable,"variable");
    function(ptr,"pointer");

    // function(*ptrDubble,"double pointer");
    // printf("-----------------------\n");

    // int **ptrDubble = &ptr;
    // int *ptrNew = &variable;
    // ptrDubble = &ptrNew;
    // functionDublePointer(&ptr,"with double pointer function");
    // functionDublePointer(ptrDubble,"with double pointer function");

}