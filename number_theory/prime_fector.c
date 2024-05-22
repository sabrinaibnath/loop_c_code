#include<stdio.h>
int main()
{
	int number;
	printf("enter your number");
	scanf("%d",&number);

	int i,j,count;
	for(i=2;i<number;i++){
		if(number % i==0){
			count=0;
			for(j=2;j<=i/2;j++){
			if(i%j==0){
				count++;
				break;}
				}
		
		if(count==0){
			printf("%d\n",i);
		}
		}
	}
	return 0;
}

