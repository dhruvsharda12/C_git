#include<stdio.h>
#include<conio.h>
main()
{
	int x,i,j,k;
	scanf("%d",&x);
	for(i=0;i<=x;i++)
	{
		for(j=x;j>i;j--)printf(" ");
		for(k=0;k<2*i+1;k++)printf("*");
		printf("\n");
	}
	for(i=0;i<=x;i++)
	{
		for(j=0;j<=i;j++)printf(" ");
		for(k=0;k<2*(x-i)-1;k++)printf("*");
		printf("\n");
	}
}