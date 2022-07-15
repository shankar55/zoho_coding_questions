#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
 using namespace std;
 
 int main()
 {
 	int arr[]={1,2,3,4,5,6,7};
 	int n=sizeof(arr)/sizeof(arr[0]);
 	int i,small=0,large=n-1;
 	int flag=1;
 	for(i=0;i<n;i++)
 	{
 		if(flag)
 		printf("%d ",arr[large--]);
 		else
 		printf("%d ",arr[small++]);
 		
 		flag=!flag;
	 }
 	return 0;
 }
