#include <stdio.h>

struct person{
    char name[30];
    int id;
};

int main()
{
    struct person x, y;
    scanf("%s", x.name);
    
    scanf("%d", &x.id);
    
    printf("%s", x.name);
    printf("\n");
    printf("%d", x.id);

    return 0;
}
