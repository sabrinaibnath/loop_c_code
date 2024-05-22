#include<stdio.h>
int main()
{
	int number;
	printf("enter your number");
	scanf("%d",&number);

	int i,count=0;
	for(i=2;i<number;i++){
		if(number%i==0){
			count++;
		}

	}

	int temp,rev=0,j=0;
	if(count==0){
		temp=number;
		while(temp>0){
			rev=rev*10+(temp%10);
			temp=temp/10;
		}
		if(rev==number){
			printf("the number is a palindromic prime");
		}
		else{
			printf("the number is not a palindromic prime");
		}
	}
	else{
		printf("the given number is not prime so it cann't be palindromic prime");
	}
	return 0;


}
