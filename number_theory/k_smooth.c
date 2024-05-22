#include<stdio.h>
int main()
{
	int number,key;
	printf("enter your number");
	scanf("%d",&number);
	printf("enter the key");
	scanf("%d",&key);

	int i,count,j;
	for(i=2;i<number;i++){
		if(number%i==0){
			count=0;
			for(j=2;j<=i/2;j++){
				if(i%j==0){
					count++;
					break;
				}
			}
			if(count==0){
				if(i<=key){
					printf("key is a k smooth number");
					break;
				}
				else{
					printf("it's not");
				}
			}
		}
	}
	return 0;
}
			
