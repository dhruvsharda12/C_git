#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,x;
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
		for(j=0;j<x-i;j++) printf("*");
		printf("\n");
	}
}