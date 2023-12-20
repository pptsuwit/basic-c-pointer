#include <stdio.h>
int main()
{
    int row,col; 
    printf("Enter value of Row: ");
    scanf("%d",&row);
    printf("Enter value of Col: ");
    scanf("%d",&col);
    
    int arr1[row][col];
    int arr2[row][col];
    int result[row][col];
    for (int i = 0; i < row; i++) { 
        for (int j = 0; j < col; j++) {
            // arr2[i][j] = &arr1[i][j];
            int value;
            printf("Matrix 1 Enter row:colum [%d]:[%d] = ",i, j);
            scanf("%d",(*(arr1+i)+j));
        }
    }
    
    for (int i = 0; i < row; i++) { 
        for (int j = 0; j < col; j++) {
            // arr2[i][j] = &arr1[i][j];
            int value;
            printf("Matrix 2 Enter row:colum [%d]:[%d] = ",i, j);
            scanf("%d",(*(arr2+i)+j));
        }
    }
 
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            // arr3[i][j] = arr1[i][j] + arr2[i][j];
            *(*(result+i)+j)=*(*(arr1+i)+j)+*(*(arr2+i)+j);
        }
    }

    printf("\n");
    for (int i = 0; i < row; i++)
    { 
        for (int j = 0; j < col; j++) {
            printf("%d ", *(*(result+i)+j));
        }
        printf("\n");
    }

    return 0;
}