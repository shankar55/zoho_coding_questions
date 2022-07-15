#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
	char s[100],a[100][100],str[100];
	scanf("%[^\n]s",s);
	int i,j,k,index,rc,n,c;
	n=strlen(s);
	if(sqrt(n)*sqrt(n)==n)
	rc=sqrt(n);
	else
	rc=sqrt(n)+1;
	for(i=0;i<rc;i++)
	{
		for(j=0;j<rc&&s[index];j++)
		{
			a[i][j]=s[index++];
		}
	}
	for(i=0;i<rc;i++)
	{
		for(j=0;j<rc;j++)
		printf("%c",a[i][j]);
	printf("\n");
	}
	printf("Enter string to be find: ");
	scanf("%s",str);
	//find substrings in rows
	for(i=0;i<rc;i++)
	  for(j=0;j<rc;j++)
	    if(a[i][j]==str[0])
	    {  for(k=j,c=0;a[i][k]==str[c] && a[i][k]!='\0';k++,c++);
	       if(str[c]=='\0'){
	          printf("\nStart index : <%d ,%d>   End index: <%d, %d>\n",i,j,i,k-1);}
	    }
	//find substring in coloumns
	for(i=0;i<rc;i++)
	  for(j=0;j<rc;j++)
	    if(a[j][i]==str[0])
	    { 
	      for(k=j,c=0;a[k][i]==str[c] && a[k][i]!='\0';k++,c++);
	       if(str[c]=='\0'){
	         printf("\nStart index : <%d ,%d>   End index: <%d, %d>\n",j,i,k-1,i);}
	    }          
	return 0;
}
