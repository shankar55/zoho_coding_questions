#include<bits/stdc++.h>
 using namespace std;
 string countNsay(int n)
 {
 	int i,j,len,cnt;
 	string str,temp;
 	
 	if(n==1) return "1";
 	if(n==2) return "11";
 	str="11";
 	for(i=3;i<=n;i++)
 	{
 		str+="$";
 		len=str.length();
 		cnt=1;
 		string temp="";
 		for(j=1;j<len;j++)
 		{
 			if(str[j]!=str[j-1])
 			{
 				temp+=cnt+'0';
 				temp+=str[j-1];
 				cnt=1;
			 }else
			 cnt++;
		 }
 		str=temp;
	 }
	 return str;
 }
 int main()
 {
 	int i;
 	int N=4;
 	for(i=1;i<=N;i++)
 	{
 	cout<<countNsay(i)<<"  ";
 }
 	return 0;
 }
