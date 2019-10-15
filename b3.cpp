#include<stdio.h>
int main()
{
	int S=0;
	for(int i=0,j=1 ;i<100;++i,j+=2)
	{
		S+=j;
	}
	printf("Tong 100 so le:%d\n" ,S);
	return 0;
}
