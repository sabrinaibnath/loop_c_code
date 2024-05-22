#include<stdio.h>
int main()
{
	int number1,number2;
	printf("enter your first number");
	scanf("%d",&number1);
	printf("enter your second number");
	scanf("%d",&number2);

	int i,count1=0,count2=0;
	for(i=2;i<number1;i++){
		if(number1%i==0){
			count1++;
		}
	}
	for(i=2;i<number2;i++){
		if(number2%i==0){
			count2++;
		}
	}
	if(count1==0 && count2==0){
		if(((number1-number2)==4)||(number1-number2)==-4){
		printf("number1 and number2 are cousin primes");
	}
	
	else{
		printf("they are not cousin prime");
	}
	}
	else{
		printf("number1 and number2 are not prime");
	}
	return 0;
}

