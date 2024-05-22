#include<stdio.h>
int main()
{
	int row,i,j,d=0;
	printf("enter how many row:");
	scanf("%d",&row);

	for(i=1;i<=row;i++){
		for(j=1;j<=i;j++){
			d=d+1;
			printf("%d ",d);
		}
		printf("\n");
	}
	return 0;
}

