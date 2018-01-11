#include <stdio.h>


int main(){
	printf("hello world,你好世界、\n");








	int vc = 231;
	int vx = vc + 12;





	printf("%d\n",vx);




	double d1,d2;
	
	d1 = 4 / 2.5;
	d2 = 5 / 2 ;
	printf("%f\n",(d1 + d2) / 2.0);
	printf("%3.2f\n",d2);

	int num;
	puts("type the num is :\n");
	scanf("%d",&num);
	if (num % 2 == 0)
		puts("num 是一个偶数\n");
	else 
		puts("num是一个奇数\n");
	




	switch (num) {

	case 1 : vc = 10; break;
	case 2 : vc = 20; break;
	case 3 : vc = 30; break;
	default : if(vx == 233 )
			  vc = 80;
	}
	
	int i = 10;
	do {
	
	printf("i的值是%d\n",i);


	i--;
	} while (i >= 0);

	int n = 10;
	while (n >= 0) {
		printf("%d\n",n);
		n --;
	} 	

	for (int j = 0; j <= 10; j++){
		printf("%d ",j);
		putchar('\n');
		}
		
















	return 0;
}
