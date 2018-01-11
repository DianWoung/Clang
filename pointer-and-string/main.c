#include <stdio.h>

void show_info(char str[])
{
    for (int i = 0; str[i]; i++)
        printf("%c address is %p\n",str[i],&str[i]);
    printf("--------------------\n");
    printf("--------------------\n");
}

void show_double_info(double str[])
{
    for (int i = 0; str[i]; i++)
        printf("%d address is %p\n",str[i],&str[i]);
    printf("--------------------\n");
    printf("--------------------\n");
}
int main(void)
{
    int i;
    char str[] = "ABC";
    char *ptr  = "123";
    double vc[] = {10, 20, 30, 40, 50};
    double *lptr = &vc[0];

    show_info(str);


    show_info(ptr);
    
    ptr = "E2EES";
    show_info(ptr);

    show_double_info(vc);
    return (0);
}