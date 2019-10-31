#include <stdio.h>
int main(){
	float sum;
	float lai,interest;
	int year;
	printf("Enter capital Sum");
	scanf("%f",&sum);
	printf("Enter rate of interest");
	scanf("%f",&interest);
	interest=(float)interest/100;
	printf("Enter no of years");
	scanf("%d",&year);
	for(int i=0;i<year;i++){
		lai=sum*interest;
		sum=sum+lai;
	printf("%d\t %0.2f\t%0.2f\n",i+1,lai,sum);
	}
	return 0;
}
