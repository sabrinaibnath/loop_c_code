#include<stdio.h>
int main()
{
	int number;
	printf("enter your number:");
	scanf("%d",&number);

	int i,sum=0;
	for(i=1;i<number;i++){
		if(number%i==0){
			sum=sum+i;
		}
	}
	if(sum==number){
		printf("the number is perfect ");
	}
	else{
		printf("the number is not perfect");
	}
	return 0;
}

