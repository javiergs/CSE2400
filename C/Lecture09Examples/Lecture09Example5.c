#include <stdio.h>

int main()
{
    int i = 0;
    char a[] = "Hello CSE 240";
    printf("\n message: %s\n ", a);
    while(a[i] != '\0') {a[i] = *(a + i) + 1; i++;}
    printf("\n message after encryption: %s\n  ", a);
    char *q;
    q = a;
    while (*q != '\0') {*q = *q-1; q++;}
    printf("\n message after decryption:  %s\n ", a);

    return 0;
}
