#include <stdio.h>

int main()
{
    int x = 5;
    int *y;
    y = &x;
    printf("value of x: %d \n",          x);
    printf("address of x: %p \n",       &x);
    printf("value of y: %p \n",          y);
    printf("address of y: %p \n",       &y);
    printf("value pointed by y: %d \n", *y);

    return 0;
}
