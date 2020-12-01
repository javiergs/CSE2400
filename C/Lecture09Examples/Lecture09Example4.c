#include <stdio.h>

int main()
{
    int a = 12, *b = 0, **c = 0;
    printf("a = %d, b = %p, c = %p\n", a, b, c);
    b = &a;  *b = 24;
    c = &b; **c = 48;
    printf("a = %d, b = %p, c = %p\n", a, b, c);

    return 0;
}
