#include <stdio.h>
#include <string.h>

int str_chnum(const char *str, char c)
{
    int n = 0;
    while (*str++)
    if (*str == c)
        n++;
        // if();
    return n;
}


int main(void)
{
    char str[100] = "dianwang126";
    char word = 'n';
    char st[100] = "3.1415LLaaadE"; 
    printf("%d\n",str_chnum(str, word));

    strcpy(str, st);
    printf("%s\n",str);
    printf("%d\n",strcmp(str,st));
}