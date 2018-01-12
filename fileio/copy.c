#include <stdio.h>

int main(void)
{
    int ch;
    FILE *sfp, *dfp;
    char sname[64], dname[64];

    printf("open the main file:");
    scanf("%s", sname);
    printf("open the write file:");
    scanf("%s", dname);
    if ((sfp = fopen(sname, "r")) == NULL)
        printf("\afile open failed\n");
    else {
        if ((dfp = fopen(dname, "w")) == NULL)
            printf("\afile open failed\n");
        else {
            while ((ch = fgetc(sfp)) != EOF)
                putc(ch, dfp);
            fclose(dfp);
        }
        fclose(sfp);
    }
    return (0);

}