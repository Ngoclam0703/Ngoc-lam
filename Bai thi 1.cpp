#include <stdio.h>
int main(){
	int x1=0,x2=1,x3,i;
	printf("So fibo nam giua 1 va 100 la ");
 	printf("%d\t",x2);
	for (i=2; x1+x2<100; ++i)
	{
		x3=x1+x2;
		printf("%d\t",x3);
		x1=x2;
		x2=x3;
		
		
	}
	
	return 0;
}
