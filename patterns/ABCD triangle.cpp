#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,k,x,a=65;
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		for(k=i;k<=2*i-1;k++){printf("%c ",(char)a); 
		a+=1;}
		a-=1;
		printf("\n");
	}
}