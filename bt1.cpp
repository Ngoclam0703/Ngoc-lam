#include <stdio.h>
int main(){
	int n;
	float s=0;
	do{
		printf("Nhap n=\n");
		scanf("%d",&n);
	}
	while (n<=0);
	for (int i; i <= n;i++){
		s =s+1/(float)i;
	}
	printf("\ns = %f",s);
	return 0;
}
