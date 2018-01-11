#include <stdio.h>
#define NUMBER 5
int main(void)
{
    int vc[7];
   int vb[NUMBER]; 
    vc[0] = 1;
    vc[1] = 2;
    vc[2] = 3;
    vc[3] = 4;
    vc[4] = 5;
    vc[5] = 6;
    vc[6] = 7;


    //数组的赋值
    for (int i = 0; i <= 6; i++)
        vb[i] = vc[i];



    for (int i = 0; i <= 6; i++)
        printf("vb[%d] = %d\n", i, vb[i]);

    int i, j;
    int ma[2][3] = {
        {1,2,3},
        {4,5,6},
    };
    int mb[2][3] = {
        {6,3,4},
        {5,1,2},
    };
    int mc[2][3] = { 0 };

    



        return (0);
}