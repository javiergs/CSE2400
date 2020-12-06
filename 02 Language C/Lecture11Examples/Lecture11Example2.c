#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 5;
    int *y = (int*) malloc (sizeof(int) * 3);
    
    *(y+0) = 1;
      y[1] = 5;
    *(y+2) = 7;
    
    printf("value of y[0]:  %d \n", y[0]);
    printf("value of y[1]:  %d \n", y[1]);
    printf("value of y[2]:  %d \n", y[2]);
    
    free(y);

    return 0;
}
