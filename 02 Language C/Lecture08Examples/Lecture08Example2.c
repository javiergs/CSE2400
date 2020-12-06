#include <stdio.h>

int main()
{
    char s1[] = "hello";
    
    printf("%s \n", s1);
    
    for(int i = 0; i < 20; i++)
        printf("%c", s1[i]);
    printf("\n");

    return 0;
}
