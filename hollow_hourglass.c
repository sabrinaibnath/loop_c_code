#include<stdio.h>
int main()
{
   int row,col,num;
   printf("enter how many row:");
   scanf("%d",&num);
   for(row=1;row<=num;row++){
	   for(col=1;col<=2*num-1;col++){
		   if(row==1||row==col||(row+col)==(2*num)){
			   printf("*");
		   }
		   else{
			   printf(" ");
		   }
	   }
	   printf("\n");
   }
   for(row=2;row<=num;row++){
	   for(col=1;col<=2*num-1;col++){
		   if(row==num||row+col==num+1||col==(num+row-1)){
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
