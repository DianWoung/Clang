#include <stdio.h>

int main(void)
{
    int i,ch;
    int cnt[10] = {0};

    while (1) {
        ch = getchar();
        if (ch == EOF) break;

        if (ch >= '0' && ch <= '9')
            putchar(ch);
          //  cnt[ch - '0']++;
    }

    puts("The number show times is");
    for (i = 0; i < 10; i++)
        printf("'%d': %d\n", i, '0' + i);

        return (0);
}