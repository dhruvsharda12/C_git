#include<stdio.h>
#include<conio.h>
main()
{
	int x,i,j,k;
	printf("enter the height of the star-");
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
		if(i<=x/4 or (i>=x/2 and i<3*x/4)) 
		{
			for(j=0;j<(x-i)-1;j++) printf(" ");
			for(k=0;k<2*i+1;k++) printf("*");  
		}
		else
		{	
			for(j=0;j<i;j++) printf(" ");
			for(k=0;k<2*(x-i)-1;k++) printf("*");
		}
		printf("\n");
	}
}