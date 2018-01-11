#include <stdio.h>

void int_set(int *vc, int no, int val)
{
    int i;

    for (i = 0; i < no; i++)
        vc[i] = val;
}

int main(void)
{
    int i;
    int vc[5] = {10, 20, 30, 40, 50};
    int *ptr = &vc[0];
    int *ntr;
    int **pptr;
    for (i = 0; i < 5; i++)
        printf("vc[%d] = %d ptr[%d] = %d *(ptr+%d) = %d ptr + %d address is %p\n",
            i, vc[i], i, ptr[i], i, *(ptr + i), i, ptr + i);

    *(ptr+1) = 6;
    ntr = ptr + 2;
    pptr = &ntr;
    **pptr = 66;
    ptr[1] = 7;
    printf("%d\n",vc[1]);
    printf("%d\n",sizeof(vc));
    printf("%p\n",&ptr[2]-&ptr[0]);


    printf("--------------------\n");
    printf("--------------------\n");

    printf("%p\n",*pptr);
    printf("%d\n",vc[2]);


    printf("--------------------\n");
    printf("--------------------\n");

    int_set(vc , sizeof(vc)/4, 100);
        for (i = 0; i < 5; i++)
        printf("vc[%d] = %d ptr[%d] = %d *(ptr+%d) = %d ptr + %d address is %p\n",
            i, vc[i], i, ptr[i], i, *(ptr + i), i, ptr + i);

    return (0);
}