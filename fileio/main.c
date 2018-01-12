#include <stdio.h>


int main(void){

FILE *fp;
int num = 123;
char str[100] = "DIAN wang";
float num2 = 123.123;
fp = fopen("test", "w");

int nana = 12342;
if (fp == NULL)
    printf("\aOpen file failed.\n");
    else {
        fscanf(fp,"%s%d%f",&str,&num,&num2);
        fprintf(fp,"%s %d\n",str,num);
        fprintf(fp,"%.2f",num2);
        fclose(fp);
    }

    int ch;
    char fname[64];
    FILE *fq;

    printf("File's Name:");
    scanf("%s", fname);

    if ((fq = fopen(fname, "r") )== NULL)
            printf("\a open file failed.\n");
    else {
        while ((ch = fgetc(fq)) != EOF)
        putchar(ch);
        fclose(fq);
    }
    return (0);

}