#include<iostream>
#include<bits/stdc++.h>
 using namespace std;
 
 int main()
 {
 	string sentence;
 	cout<<"Enter Sentence: ";
 	getline(cin,sentence);
 	int length=sentence.size();
 	for(int i=length;i>=0;i--)
 	{
 		if(sentence[i]==' ')
 		{
 			int k=i+1;
 			while((sentence[k]!=' ')&&(k!=length))
 			{
 				cout<<sentence[k];
 				k++;
			}
			cout<<" ";
		}
	}
	length=0;
	while((sentence[length]!=' ')&&(sentence[length]!='\0'))
	{
		cout<<sentence[length];
		length++;
	}
 	return 0;
 }
