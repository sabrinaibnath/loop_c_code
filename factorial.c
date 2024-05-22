#include<stdio.h>
int main()
{
	int i,number,fact=1;
	printf("enter your number");
	scanf("%d",&number);
	for(i=1;i<=number;i++){
		fact=i*fact;
	}
	printf("factorial=%d",fact);
	return 0;
}
