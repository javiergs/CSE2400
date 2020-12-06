#include <stdio.h>

int main()
{
    int x = 5;
    int *y = & x;
    int **z = &y;
    printf("value of x: %d \n",          x);
    printf("address of x: %p \n",       &x);
    printf("value of y: %p \n",          y);
    printf("address of y: %p \n",       &y);
    printf("value pointed by y: %d \n", *y);
    printf("value of z: %p \n",          z);
    printf("address of z: %p \n",       &z);
    printf("value pointed by z: %p \n", *z);
    printf("value pointed by the address pointed by z: %d \n", **z);

    return 0;
}

