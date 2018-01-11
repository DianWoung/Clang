#include <stdio.h>
#include <ctype.h>

unsigned str_length(const char str[])
{
    unsigned len = 0;

    while (str[len] != 0)
        len++;
    return (len);
}

void put_string(const char str[])
{
    unsigned i = 0;

    while (str[i] != 0)
        putchar(str[i++]);
}
void str_dcount(const char str[], int cnt[])
{
    unsigned i = 0;
    while (str[i]) {
        if (str[i] >= '0' && str[i] <= '9')
            cnt[str[i] - '0']++;
        i++;
    }
}
void str_toupper(char str[])
{
    unsigned i = 0;
    while (str[i]) {
        str[i] = toupper(str[i]);
        i++;
    }
}
void str_tolower(char str[])
{
    unsigned i = 0;
    while (str[i]) {
        str[i] = tolower(str[i]);
        i++;
    }
}
void null_string(char str[])
{
    unsigned i = 0;
    while (str[i]) {
        str[i] = '\0';
        i++;
    }
}
char del_digit(char str[], char cstr[])
{
    unsigned i = 0;
    unsigned k = 0;
    while (str[i]) {
        if (str[i] < '0' || str[i] > '9') {
            cstr[k] = str[i];
            k++;
        }
        i++;
    }
    cstr[k+1] = '\0';
}
int main(void)
{
    char str[4];
    char ss[] = "ABC\0DEF";
    char ns[] = " ";
    char ms[] = {'\0'};



    str[0] = 'A';
    str[1] = 'B';
    str[2] = 'C';
    str[3] = '\0';

    printf("str is %s\n", str);
    printf("sizeof str is %d\n",sizeof(str));

    printf("ss is %s\n", ss);
    printf("sizeof ss is %d\n",sizeof(ss));
     printf("null is %s\n", ns);
     printf("\0 is %s\n", ms);

    char nums[] = "12345";

    printf("%s\n", nums);
    printf("%3s\n", nums);
    printf("%.3s\n", nums);
    printf("%8s\n", nums);
    printf("%-8s\n", nums);

    // int i;
    // char cs[3][6];
    // for (i = 0; i < 3; i++) {
    //     printf("cs[%d]:", i);
    //     scanf("%s", cs[i]); 
    // }
    // for (i = 0; i < 3; i++) {
    //     printf("cs[%d] = \"%s\"\n", i, cs[i]);
    // }

    // char st[100];

    // printf("Please input the string:");
    // scanf("%s",st);

    // printf("the length of string %s is %u.\n", st, str_length(st));
   
    char pstr[100], cstr[100];

    printf("Please input the string:");
    scanf("%s", pstr);
    str_toupper(pstr);
    put_string(pstr);
    putchar('\n');
    str_tolower(pstr);
    printf("%s\n",pstr);
   

    del_digit(pstr,cstr);
    printf("%s\n",cstr);




 
    // int dcont[10] = {0};
    // char cstr[100];
    //     printf("Please input the string:");
    // scanf("%s", cstr);
    
    // str_dcount(cstr, dcont);

    // for (int k = 0; k < 10; k++)
    //     printf("'%d': %d\n", k, dcont[k]);

    return (0);
}

