#include <stdio.h>
void GetArr2D(int **a, int *row, int *col)
{
    printf("How many rows : ");
    scanf("%d", row);
    printf("How many column : ");
    scanf("%d", col);
    
    *a[*row * *col];
    for (int i = 0; i <*row; i++){
        for (int j = 0; j < *col; j++){
            printf("a [%d] [%d]:",i,j);
            scanf("%d",&(*a)[i**col+j]);
        }
    }
}

void GetArr2D(int **a, int *row, int *col);
int main()
{
    int r, c, *arr;
    GetArr2D(&arr, &r, &c);
    return 0;
}


