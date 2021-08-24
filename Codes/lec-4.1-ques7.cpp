//Butterfly Pattern

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int c;
	cin>>c;
	int count=2*c-2,count2= 0, k;
	for(int i=1;i<=c;i++)
	{
		for(int j=1;j<=i;j++)
			cout<<"*";
		for(int k=count;k>0;k--)
			cout<<" ";
		count-=2;
		for(int j=1;j<=i;j++)
			cout<<"*";
		cout<<endl;
	}
	for(int i=c;i>0;i--)
	{
		for(int j=1;j<=i;j++)
			cout<<"*";
		for(int k=1;k<=count2;k++)
			cout<<" ";
		count2+=2;
		for(int j=1;j<=i;j++)
			cout<<"*";
		cout<<endl;
	}
	return 0;
}