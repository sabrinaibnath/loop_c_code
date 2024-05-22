#include<stdio.h>
int main()
{
	int number;
	printf("enter your number:");
	scanf("%d",&number);

	for(;;){
		if(number==1){
			break;
		}
		else if(number%2==0){
			number=number/2;
			printf("%d ",number);
		}
		else{
			number=3*number+1;
			printf("%d ",number);
		}
	}
	return 0;
}
