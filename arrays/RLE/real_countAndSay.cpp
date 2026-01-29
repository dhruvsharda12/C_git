#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
char* countAndSay(int n) {
    int i=0,count=1,k=0;
    if(n>30)return 0;
    char *RLE,*R;
    RLE=(char*)malloc(5000*sizeof(char));
    R=(char*)malloc(5000*sizeof(char));
    RLE[0]='1';
    RLE[1]='\0';
    while(i<n-1)
    {
        for(int j=1;RLE[j-1]!='\0';j++)
        {
            if(RLE[j]==RLE[j-1])count++;
            else
            {
                R[k++]=(char)(48+count);
                R[k++]=RLE[j-1];
            }
        }
        R[k]='\0';
        RLE=R;
        R=(char*)malloc(5000*sizeof(char));
        i++;
        k=0;
        count=1;
    }
    return RLE;
}
main()
{
	int n;
	scanf("%d",&n);
	printf("%s",countAndSay(n));
}