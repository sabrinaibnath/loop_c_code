#include<stdio.h>
int main()
{
	int row,i,j,value=1,k;
	printf("enter how many row:");
	scanf("%d",&row);

	for(i=1;i<=row;i++){
		for(j=1;j<=row-i;j++){
			printf(" ");
		}
		value=1;
		for(k=1;k<=i;k++){
			printf("%d ",value);
			value=value*(i-k)/k;
		}
		printf("\n");
	}
	return 0;
}

