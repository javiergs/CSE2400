#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 5;
    int *y = (int*) malloc (sizeof(int));
    
    *y = 7;
    
    printf("value of y: %d \n",             *y);
    printf("address of y: %p \n",            y);
    printf("address of y: %p \n",           &y);
    printf("value of x: %d \n",              x);
    printf("address of x: %p \n",           &x);
    
    free(y);

    return 0;
}
