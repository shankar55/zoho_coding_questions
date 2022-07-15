#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str[100];
	scanf("%s",str);
	int n=strlen(str);
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j||i+j==n-1)
			{
				printf("%c",str[j]);
			}else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
