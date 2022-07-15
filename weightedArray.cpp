#include<stdio.h>
#include<stdlib.h>
#include<math.h>>
int check(int n)
{
	int weight=0;
	if(sqrt(n)*sqrt(n)==n)
	weight+=5;
	if(n%4==0&&n%6==0)
	weight+=4;
	if(n%2==0)
	weight+=3;
	return weight;
}
int main()
{
	//int arr[]={10,36,54,89,12};
	int arr[10];
	int n;
	scanf("%d",&n);
	//n=sizeof(arr)/sizeof(arr[0]);
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(check(arr[j])>check(arr[j+1]))
			{
				arr[j]=arr[j]+arr[j+1]-(arr[j+1]=arr[j]);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d %d\n",arr[i],check(arr[i]));
	}
	
	return 0;
}
