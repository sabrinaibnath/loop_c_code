#include<stdio.h>
int main()
{
	int row,col,num,d;
	printf("enter your row:");
	scanf("%d",&num);
	for(row=1;row<=num;row++){
		for(col=1;col<=2*num-1;col++){
			if(row==num || (row+col)==(num+1)|| col==(num+row-1)){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;}

