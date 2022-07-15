#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
int printNthElement(int n)
{
	int arr[n+1];
	int i;
	arr[1]=3;
	arr[2]=4;
	for(i=3;i<=n;i++)
	{
		if(i%2!=0)
		arr[i]=arr[i/2]*10+3;
		else
		arr[i]=arr[(i/2)-1]*10+4;
	}
	return arr[n];
}
int main()
{
	int n=2;
	cout<<printNthElement(n)<<" ";
	return 0;
}
