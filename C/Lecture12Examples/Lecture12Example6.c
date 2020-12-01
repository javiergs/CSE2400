#include <stdio.h>

struct contact{
    char name[30];
    int phone;
    char email[30];
};

int main()
{
    struct contact x;
    struct contact *y;
    
    scanf("%s", x.name);
    scanf("%d", &x.phone);
    scanf("%s", x.email);
    printf("%d \n", x.phone);
    y = &x;
    (*y).phone = 101010; // asterisk and dot with y
    y->phone = 404040; // arrow with y
    printf("%d \n", y->phone);

    return 0;
}