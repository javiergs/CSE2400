#include <stdio.h>
typedef enum {red, amber, green} traffic_light;
typedef enum {No, Yes} logic;
int main()
{
    traffic_light x = red;
    logic var = Yes;
    while(var == Yes){
        switch (x){
            case amber:
                x = red; printf("Red Light"); break;
            case red:
                x = green; printf("Green Light"); break;
            case green:
                x = amber; printf("Amber Light"); break;
        }
        var = No;
    }

    return 0;
}
