#include<stdio.h>
main()
{
	 int a,b;
	 printf("Enter two numbers:  ");
	 scanf("%d %d",&a,&b);
	 printf("\nOriginal numbers are:  %d %d",a,b);
	 a+=b;
	 b=a-b;
	 a-=b;
	 printf("\nAfter swapping, the numbers are:  %d %d",a,b);
	 
}
