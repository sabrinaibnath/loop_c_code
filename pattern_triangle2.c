#include<stdio.h>
int main()
{
	int row,col,num;
	printf("enter row:");
	scanf("%d",&num);
	for(row=num;row>0;row--){
		for(col=1;col<=row;col++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
	
