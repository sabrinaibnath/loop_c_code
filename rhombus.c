#include<stdio.h>
int main()
{
	int row,col,num;
	printf("enter how many row:");
	scanf("%d",&num);
	for(row=1;row<=num;row++){
		for(col=1;col<row;col++){
			printf(" ");
		}
		for(col=1;col<=num;col++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
