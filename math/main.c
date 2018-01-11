#include <math.h>
#include <stdio.h>

#define diff(x,y) x-y
#define putsa(str) ( putchar('\a') , puts(str) )

enum animal { Dog, Cat, Monkey, Invalid };
enum animal selected;
double dist(double x1, double y1, double x2, double y2)
{
    return (sqrt(x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int factorial (int n)
{
    if (n > 0)
        return (n * factorial(n - 1));
    else 
        return (1);
}

int main(void)
{
    // double x1, y1;
    // double x2, y2;

    // printf("Pointer 1 X:"); scanf("%lf", &x1);
    //  printf("Pointer 1 Y:"); scanf("%lf", &y1);
    //   printf("Pointer 2 X:"); scanf("%lf", &x2);
    //    printf("Pointer 2 Y:"); scanf("%lf", &y2);

    //    printf("the far of the two points is %f \n",dist(x1,y1,x2,y2));
    printf("9 - 2 = %f\n",diff(9.0, 2.9));
    putsa("What is this");

    printf("5的阶乘是%d.\n",factorial(5));
    return (0);
}