#include <stdio.h>

void sum_diff(int n1, int n2, int sum, int diff)
{
    sum = n1 + n2;
    diff = (n1 > n2) ? n1 - n2 : n2 - n1;
}

void plus_pointer(int *n)
{
    *n = 6666;
}

void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

int main(void)
{
    int na, nb;
    int wa = 0, sa = 0;

    // puts("Please input two intgers :");
    // printf("Int A :"); scanf("%d", &na);
    // printf("Int B :"); scanf("%d", &nb);

    // sum_diff(na, nb, wa, sa);
    // printf("Sum of A and B is %d.\nDiff of A and B is %d.\n", wa, sa);
    
    int nx = 121;
    double dx = 123.212;
    int vc[3] = {1, 2, 3};
    
    printf("nx's address is %d \n", &nx);
    printf("dx's address is %.2f \n", dx);
    printf("vc[0]'s address is %d \n", vc[0]);
    printf("vc[1]'s address is %p \n", &vc[1]);
    printf("vc[2]'s address is %p \n", &vc[2]);
    printf("--------------------\n");
    printf("--------------------\n");

    int *pnx;
    double *pdx;
    int *pvc[3];

    pnx = &nx;
    pdx = &dx;

    printf("nx's pointer is %p\n",pnx);
    printf("dx's pointer is %p\n",pdx);
    printf("--------------------\n");
    printf("--------------------\n");
    *pnx = 233;
    *pdx = 2123.21;
    nx = 123123;
    dx = 123.123;
    plus_pointer(&nx);
    printf("nx's pointer alies is %d\n", *pnx);
    printf("dx's pointer alies is %f\n", *pdx);
    printf("--------------------\n");
    printf("--------------------\n");
    printf("nx's pointer alies is %d\n", nx);
    printf("dx's pointer alies is %f\n", dx);
    return (0);
}