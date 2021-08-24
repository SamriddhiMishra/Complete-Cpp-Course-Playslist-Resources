//Star Pattern

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int c;
	cin>>c;
	for(int i=1;i<=c;i++)
	{

		for(int k=1;k<=c-i;k++)
			cout<<" ";

		for(int j=1;j<=i;j++)
			cout<<"*";
		for(int j=i;j>1;j--)
			cout<<"*";

		cout<<endl;
	}

	for(int i=c;i>=1;i--)
	{

		for(int k=1;k<=c-i;k++)
			cout<<" ";

		for(int j=1;j<=i;j++)
			cout<<"*";
		for(int j=i;j>1;j--)
			cout<<"*";

		cout<<endl;
	}
	return 0;
}