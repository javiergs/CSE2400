#include <stdio.h>
#include <string.h>

char *getString(char *str){
    return str;
}

void setString(char *str1, char *str2){
    strcpy(str1, str2);
}

int main()
{
    char *p;
    char q[] = "morning";
    char *s = "hello";
    printf("s = %s\n", s);
    p = getString(s);
    printf("p = %s\n", p);
    setString(q, p);
    printf("q = %s\n", q);

    return 0;
}
