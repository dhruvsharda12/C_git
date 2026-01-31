#include<stdio.h>
#include<conio.h>
main()
{
	int x,i,n,y = 1;
	printf("enter number - "); //input number
	scanf("%d",&x);
	printf("enter exponetial value - "); //input exponetial value
	scanf("%d",&n);
	for(i=0;i<n;i++) y=y*x; // loop for multiplying->to increase power 
	printf("Ans - %d",y); //output 
}