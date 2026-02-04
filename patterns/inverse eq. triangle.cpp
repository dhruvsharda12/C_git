#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,k,x;
	scanf("%d",&x);
	for (i=0;i<x;i++)
	{
		for(j=0;j<i;j++) printf(" ");
		for(k=0;k<2*(x-i)-1;k++) printf("*");
		printf("\n");
	}
}