#include <stdio.h>
int main(){
	int i,n;
	int y =1;
	printf("nhap n=\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		y=y*i;
	}
	printf("%d! = %d\n",n,y);
	return 0;
}
