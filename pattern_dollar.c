#include<stdio.h>
int main()
{
	int row,col,num;
	printf("enter how many row");
	scanf("%d",&num);
	for(row=0;row<=num;row++){
		for(col=0;col<=num;col++){
			if(row==col){
				printf(" $ ");
			}
			else{
				printf(" * ");
			}
		}
		printf("\n");
	}
	return 0;
}
