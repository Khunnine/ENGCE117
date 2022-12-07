#include <stdio.h>
int main()
{
    int *a;
    int var = 7;
    a = &var;
    printf("*a = %d\n",*a);
    
    var = 14;
    printf("*a = %d\n",*a);
    *a = 21;
    printf("*a = %d\n",*a);
    printf("var = %d\n",var);

    return 0;
}

