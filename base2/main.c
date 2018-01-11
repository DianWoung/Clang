#include <stdio.h>
/*
 * @description base program for C
 * @author DianWang
 * @Date 2017-12-23
 */
int main(void) {

    int no1,no2;
    printf("您输入的第一个数字:\n");
    scanf("%d",&no1);
    printf("your second num is:");
    scanf("%d",&no2);
    printf("your last number is %d\n",no1/no2);

    return (0);
}

