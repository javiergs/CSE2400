#include <stdio.h>

int main()
{
    int i, n = 5;
    printf("Hi, please enter an integer: ");
    
    // input: scanf (control sequence, &variable1, ... &variablen);
    // & variable: address of the variable
    scanf("%d", &i); // input function
    
    if(i > n)
        n = n + i;
    else
        n = n - i;
    printf("i = %d, n = %d\n", i, n); // output function
    return 0;
}
