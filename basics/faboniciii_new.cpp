#include<stdio.h>
main()
{
	int x=1,y=0,z;
	int input;
	scanf("%d",&input);
	for(int i=0;i<input;i++)
	{
		printf("%d ",z);
		z=x+y;
		x=y;
		y=z;
	}    
}