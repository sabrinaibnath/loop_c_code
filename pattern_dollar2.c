#include<stdio.h>
int main()
{
	int row,col,num;
	printf("enter how many row");
	scanf("%d",&num);
	for(row=1;row<=num;row++){
		for(col=1;col<=num;col++){
			if(row==1|| row==col || row==num){
				printf("$");
			}
			else{
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}
