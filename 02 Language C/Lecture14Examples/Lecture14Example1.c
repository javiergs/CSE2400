#include <stdio.h>

void foo(int b){ // formal parameters
    printf("b = %d\n", b);
    b = 10;
    printf("b = %d\n", b);
}

int main()
{
    int a = 2; // local variable
    printf("a = %d\n", a);
    foo(a); // actual parameters
    printf("a = %d\n", a);

    return 0;
}
