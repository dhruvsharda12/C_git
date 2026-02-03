#include<stdio.h>
#include<conio.h>
main()
{
	int i=0,j=0,x=10;
	while(i<x)
	{
		j = 0;
		while(j<=i) 
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
}