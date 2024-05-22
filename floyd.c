#include<stdio.h>
int main()
{
	int row,col,num,count=0;
	printf("enter how many rows:");
	scanf("%d",&num);
	for(row=1;row<=num;row++){
		for(col=1;col<=row;col++){
			printf("%d ",++count);
		}
		printf("\n");
	}
	return 0;
}


