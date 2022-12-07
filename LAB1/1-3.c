#include <stdio.h>
int Add(int a,int b){
    return a*b;
}

int Operation(int a, int b, int (*function)(int, int))
{
    return (*function)(a,b);
}

int main()
{
    printf("====>>>%d\n",Operation(7, 8, Add));
    return 0;
}
    


