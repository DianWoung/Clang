#include <stdio.h>
#define PI 3.14

void init() {
    int number;
    double miles;
    char str[]="string";
    char poi[] = "poipoi";
    number=1024;
    printf("Hello, World!\n");
    printf("This year is %d\n",number);
    printf("%s\n",str);
    printf("%1.2f\n",PI);
    scanf("%lf",&miles);
    printf("miles are %.3f",miles);
    return ;
}