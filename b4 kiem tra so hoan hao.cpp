#include <stdio.h>
int main(){
	int n;
	int sum = 0;
	printf("Nhap n=\n");
	scanf("%d",&n);
	for(int i=1; i<=n/2;i++){
		if(n%i==0)
		sum=sum+i;
	}
	if(sum==n){
		printf("la so hoan hao ");
	}else{
		printf("khong phai la so hoan hao");
	}
	
	
	return 0;
}
