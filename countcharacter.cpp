#include<stdlib.h>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
char str[100],last;
int i,n=0;
cout<<"Enter the string  : ";
cin>>str;

for(i=0;str[i];i++)
{ 
  if(str[i]<48||str[i]>57)
  {
     cout<<str[i];                           //print characters other than integer value and continue the loop
     continue;
  }
  for(last=i;(str[i]>=48&&str[i]<=57)&&str[i];i++)  //Loop to find integer value store it in n
     n=n*10+(str[i]-48);
  i--;
  if(last)                                          //if first value is integer that is last = 0 do nothing simply put n=0 in else part
  for(n-=1;n;n--)                                   //Loop to print n times the character
    cout<<str[last-1];            
  else n=0;
}
cout<<"\n";
free(str);
return 0;
}
