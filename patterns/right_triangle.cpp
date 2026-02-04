#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,x;
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		for(j=0;j<i;j++) printf("*");
		printf("\n");
	}
}