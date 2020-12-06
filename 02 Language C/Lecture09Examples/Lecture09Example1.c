#include <stdio.h>

int main()
{
    int x = 5;
    int array[5] = {1, 2, 3, 4, 5};
    char c = 'a';
    char str[] = "hello";
    
    printf("int size \t %d\n", (int)sizeof(int));
    printf("x size \t\t %d\n", sizeof x);
    printf("array size \t %d\n", sizeof array);
    printf("array[0] size \t %d\n", sizeof array[0]);
    printf("char size \t %d\n", sizeof(char));
    printf("c size \t\t %d\n", sizeof x);
    printf("str size \t %d\n", sizeof str);
    printf("string[0] size \t %d\n", sizeof str[0]);

    return 0;
}
