#include<stdio.h>
int main()
{
	int number,i,sum=0;
	printf("enter the number:");
	scanf("%d",&number);
	for(i=1;i<=number;i=i+2){
		sum=sum+i;
	}
	printf("sum=%d",sum);
	return 0;
}
