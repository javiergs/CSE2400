#include <stdio.h>

typedef enum {false, true} booOoolean;
typedef enum {Sun, Mon, Tue, Wed, Thu, Fri, Sat} days;

int main()
{
    booOoolean a = false;
    int counter;
    days x = Mon, y = Fri;
    days today = x + y;
    printf("%d", today);

    return 0;
}
