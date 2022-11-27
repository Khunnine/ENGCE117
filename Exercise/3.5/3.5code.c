#include <stdio.h>
int main()
{
    int n, i, j, count;
    int nam[100];
    printf("Input number of element to be store in array : ");
    scanf("%d", &n);
    printf("----\n");
    for (int i = 0; i < n; i++)
    {
        printf("Element[%d] : ", i + 1);
        scanf("%d", &nam[i]);
    } 
    for (int i = 0; i < n; i++)
    {
        count = 1;
        for (j = i + 1; j <= n - 1; j++)
        {
            if (nam[i] == nam[j] && nam[i] != 0)
            {
                count++;
                nam[j] = 0;
            }
        } 
        if (nam[i] != 0)
        {
            printf("%d -> %d\n", nam[i], count);
        } 
    }
} 