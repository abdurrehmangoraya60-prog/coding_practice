#include<stdio.h>
 int main()
{
	int x,y;
	char op;
	printf("enter first numbwe");
	scanf("%d",&x);
	printf("enter second number");
	scanf("%d",&y);
	printf("enter operator");
	scanf(" %c",&op);
    if(op=='+')
      printf("%d + %d= %d",x,y,x+y);
	else if(op=='-')
	  printf("%d-%d=%d",x,y,x-y);
	else if(op=='*')  
	  printf("%d*%d=%d",x,y,x*y);
	else if(op=='%')  
	  printf("%d % %d=%d",x,y,x%y);
	else if(op=='/')
	 printf("%d/%d=%d",x,y,x/y);
	else
	  printf("invalid input");
	return 0;  
	   	
}