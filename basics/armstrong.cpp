#include<stdio.h>
#include<conio.h>
main()
{
	int x,a,b,c,d;
	printf("Enter a number- ");
	scanf("%d",&x);
	a = x%100;
	b = x/100;
	c = a/10;
	d = a%10;
	if((b*b*b)+(c*c*c)+(d*d*d)==x)
	{
		printf(" It's an armstrong number.");
    }
	else
	{
		printf("It's a non armstrong nummber.");
	}	
}