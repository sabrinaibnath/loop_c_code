#include<stdio.h>
int main()
{
	int i,j,row,col;
	printf("enter how many row:");
	scanf("%d",&row);
	for(i=0;i<=row;i++){
		for(j=0;j<=row;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

