#include<stdio.h>
int main()
{
	int number1,number2,count=0,min;
	printf("enter numbers:");
	scanf("%d %d",&number1,&number2);
	int i;
	if(number1>number2){
		min=number2;
	}
	else{
		min=number1;
	}
	for(i=2;i<=min;i++){
		if(number1 % i==0 && number2%i==0){
			count++;
		}
	}
	if(count==0){
		printf("it's  a coprime number");
	}
	else if(count>0){
		printf("it's not a coprime number");
	}
	return 0;
}



	

