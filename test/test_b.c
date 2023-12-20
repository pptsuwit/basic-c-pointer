#include <stdio.h>
 //with pointer
// int findMinimumPointer(int **pointer, int size){
//     int minimum = **pointer;
//     for(int i = 0; i < size; i++){

//         if(minimum >= *(*pointer + i)){
//             minimum = *(*pointer + i);
//         } 
//     }
//     return minimum;
// }
 int findMinimumArray(int *pointer, int size)
 {
     int minimum = *(pointer);
     for (int i = 0; i < size; i++)
     {
         if (minimum >= *(pointer + i))
         {
             minimum = *(pointer + i);
         }
     }
     return minimum;
}
void main()
{
    int input; 
    printf("Enter value of Input: ");
    scanf("%d",&input);
    int array[input]; 

    //with pointer
    int *pointerArray[input];

    for(int i = 0; i < input; i++){
        printf("Enter value %d is :", i+1);
        scanf("%d",&array[i]); 

        //with pointer
        pointerArray[i] = &array[i];
    }

    int min = *pointerArray[0];
    for(int i = 0; i < input; i++){
        printf("%d\n", *pointerArray[i]);
        if(min >= *pointerArray[i]){
            min = *pointerArray[i];
        }
    }
    // printf("Minumum Array is : %d\n", min);

    printf("Minumum Array is : %d\n", findMinimumArray(array,  input));

    //with pointer
    // printf("Minumum Pointer is : %d\n", findMinimumPointer(pointerArray,  input));
    
}