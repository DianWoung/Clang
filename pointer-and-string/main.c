#include <stdio.h>

void show_info(char str[])
{
    for (int i = 0; str[i]; i++)
        printf("%c address is %p\n",str[i],&str[i]);
    printf("--------------------\n");
    printf("--------------------\n");
}

size_t str_length(const char *s)
{
    size_t len = 0;

    while (*s++)
        len ++;
    return (len);
}

void show_double_info(double str[])
{
    for (int i = 0; str[i]; i++)
        printf("%d address is %p\n",str[i],&str[i]);
    printf("--------------------\n");
    printf("--------------------\n");
}

char *str_copy(char *d, const char *s)
{
    char *t = d;
    while (*d++ = *s++)
    ;
    return (t);
}


int main(void)
{
    int i;
    char str[] = "ABC";
    char s[] = "dianwang";
    char *ptr  = "123";
    double vc[] = {10, 20, 30, 40, 50};
    double *lptr = &vc[0];
    char *pt[3] = {"linux", "Ubuntu", "docker"};
    char gstr[3][6] = {"dian", "wang", "126"};

    show_info(gstr[0]);
    show_info(gstr[1]);
    show_info(gstr[2]);

     str_copy(ptr, str);

     show_info(ptr);
     printf("str sizeof is %d\n",sizeof(str));
    // show_info(ptr);  
    // ptr = "E2EES";
    // show_info(ptr);

    // show_double_info(vc);

     for (i = 0; i < 3; i++)
        printf("%d ==> %s ==> %p\n", i, pt[i], &pt[i]);

    printf("sting dianwang's length is %u.\n", (unsigned)str_length(s));



    return (0);
}