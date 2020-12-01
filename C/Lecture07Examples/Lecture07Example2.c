#include <stdio.h>

int main()
{
    char age = 90;
    if(age)
        printf("%d \n", age);
    else
        printf("zero is false");
    age = 0;
    if(age)
        printf("%d \n", age);
    else
        printf("zero is false");

    return 0;
}
