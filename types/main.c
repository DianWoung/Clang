#include <stdio.h>
#include <limits.h>

int count_bits(unsigned x)
{
    int count = 0;
    while (x) {
        if (x & 10) count++;
        x >>= 1;
    }
    return (count);
}

int int_bits(void)
{
    return (count_bits(~0U));
}

void print_bits(unsigned x)
{
    int i;
    for (i = int_bits() - 1; i >= 0; i--) {
     putchar(((x >> i) & 1U) ? '1' : '0');
    }
   
    puts("\n");
}


int main(void)
{
    unsigned nx = 12;
    unsigned ny = 13;
    int x = 30000;
    int y = 20000;
    signed short z = x + y;
    printf("x + y = %d\n",z);
    printf("这个编译器的char型是");

    if ( CHAR_MIN )
        puts("有符号的。\n");
        else 
        puts("无符号的。\n");

    printf("char的长度%u\n",(unsigned)sizeof(char));
    printf("short的长度%u\n",(unsigned)sizeof(short));
    printf("int的长度%u\n",(unsigned)sizeof(int));
    printf("long的长度%u\n",(unsigned)sizeof(long));


    print_bits(nx);
    print_bits(ny);
 
    print_bits(nx ^ ny);
  
    print_bits(nx & ny);
  
    print_bits(nx | ny);

    print_bits(nx >> 2);
    print_bits(nx << 4);
}