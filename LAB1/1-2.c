#include <stdio.h>
int main()
{
    int n[4][4] = {
        {7, 14, 21, 28},
        {8, 16, 24, 32},
        {9, 18, 27, 36},
        {10, 20, 30, 40}
    };
    
    for(int v=0; v<4; v++)
    {
        for(int l=0; l<4; l++)
            printf("%d ",n[v][l]);
        printf("\n");
    }
    printf("\n");
    
    int(*w)[4] = n;
    w[1][3] =99;
    
    for(int v=0; v<4; v++){
        for(int l=0; l<4; l++)
            printf("%d ",n[v][l]);
        printf("\n");
    }
}
    
    

   


