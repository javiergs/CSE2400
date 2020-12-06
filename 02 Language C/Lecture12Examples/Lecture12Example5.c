#include <stdio.h>

struct contact{
    char name[30];
    int phone;
    char email[30];
};

struct contact contact_book[100];

int main()
{
    int index = 0;
    scanf("%d", &contact_book[index].phone);
    scanf("%s",  contact_book[index].name);
    scanf("%s",  contact_book[index].email);
    
    printf("\n %d", contact_book[index].phone);
    printf("\n %s", contact_book[index].name);
    printf("\n %s", contact_book[index].email);

    return 0;
}
