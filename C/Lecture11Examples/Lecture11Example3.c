#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **array = (int**) malloc (sizeof(int*) * 3);
    *(array+0)  = (int*)  malloc (sizeof(int ) * 3);
    array[1]    = (int*)  malloc (sizeof(int ) * 3);
    *(array+2)  = (int*)  malloc (sizeof(int ) * 3);
    array[0][0] = 1;
    array[1][1] = 1;
    array[2][2] = 1;
    *(*(array + 1 ) + 2) = 3; // this is array[1][2]
    
    printf ("array [1][2] is %d \n", array[1][2]);
    printf ("array [2][2] is %d \n", *(*(array+2)+2) );
    
    //try implementing frees to deallocate the pointers

    return 0;
}
