#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char s1[] = "hello", s2[] = "world";
    
    for(int i = 0; i < 5; i++)
        printf("%c", s1[i]);
    printf("\n");
    printf("s1 = %s, size = %d\n", s1, sizeof s1);
    
    for(int i = 0; i < 5; i++)
        printf("%c", s2[i]);
    printf("\n");
    return 0;
}
