#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r = 3, c = 4, i, j, count;
    int **arr = malloc(r * sizeof(int *));
    for(i = 0; i < r; i++){
        arr[i] = malloc(c * sizeof(int));
    }
    count = 0;
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++)
            arr[i][j] = ++count;
    }
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++)
            printf("%d \t", arr[i][j]);
        printf("\n");
    }
    
    //Try adding free instructions to deallocate the pointers.

    return 0;
}
