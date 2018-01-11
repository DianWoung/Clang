#include <stdio.h>
#define NUMBER 5
int maxof(int x, int y)
{
    if (x > y)
        return (x);
    else
        return (y);
}
int minof(int x, int y)
{
    if (x < y)
        return (x);
    else
        return (y);
}
void int_set(int vc[], int no)
{
    int i;

    for (i = 0; i < no; i++)
        vc[i] = 0;
}
int search(const int vc[], int key, int no)
{
    int i = 0;

    while (1) {
        if (i == no)
            return (-1);
        if (vc[i] == key)
            return (i);
        i++;
    }
}

int mat_add(const int ma[2][3], const int mb[2][3], int mc[2][3])
{
    int i, j;

    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            mc[i][j] = ma[i][j] + mb[i][j];
}
int fx = 0;
void func(void)
{
    static int sx = 0;
    int        ax = 0;

    printf("%3d%3d%3d\n", ax++, sx++, fx++);
}
int main() {
    int na,nb;
    const int ary1[] = {1,2,3,4,5};
    static int ary2[] = {3,2,1};
    int ma[2][3] = {
        {1,2,3},
        {4,5,6},
    };
    int mb[2][3] = {
        {6,3,4},
        {5,1,2},
    };
    int mc[2][3] = { 0 };

    // printf("请输入两个整数：\n");
    // printf("整数1：\n"); scanf("%d",&na);
    // printf("整数2：\n"); scanf("%d",&nb);

    // printf("较大的整数是：%d。\n", maxof(na, nb));
    // printf("较小的整数是：%d。\n", minof(na, nb));
    
    // int_set(ary1, 5);
    // int_set(ary2, 3);
    // for (int i = 0; i < 5; i++)
    //     printf("ary1[%d] = %d\n", i,ary1[i]);
    // for (int i = 0; i < 3; i++)
    //     printf("ary2[%d] = %d\n", i,ary2[i]);


    // int i, ky, idx;
    // int vx[NUMBER];
    // for (i = 0; i < NUMBER; i++) {
    //     printf("vx[%d]:",i);
    //     scanf("%d",&vx[i]);
    // }
    // printf("要查找的值：");
    // scanf("%d", &ky);

    // idx = search(vx, ky, NUMBER);

    // if (idx == -1)
    //     puts("\a查找失败");
    // else
    //     printf("%d是数组的第%d号元素。\n", ky, idx + 1);

    mat_add(ma, mb, mc);

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++)
            printf("%3d", mc[i][j]);
        putchar('\n');
    }

    puts(" ax sx fx");
    puts("---------");
    for (int i = 0; i < 10; i++) {
        func();
    }
    puts("----------");

    return 0;
}