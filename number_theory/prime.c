#include<stdio.h>
int main()
{
	int number,count=0;
	printf("enter your number:");
	scanf("%d",&number);

	for(int i=2;i<number;i++){
		if(number%i==0){
			count++;
			break;
		}
	}
	if(count==0){
		printf("it's not a prime number");
	}
	else{
		printf("it is a prime number");
	}
	return 0;
}
