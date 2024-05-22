#include<stdio.h>
int main()
{
	int row,col,num;
	printf("enter how many number:");
	scanf("%d",&num);
	for(row=0;row<=num;row++){
		for(col=0;col<=num;col++){
			if(row == 0 || row ==num || col==0 || col==num){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
