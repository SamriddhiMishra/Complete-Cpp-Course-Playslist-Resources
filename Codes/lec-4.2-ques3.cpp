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
		for(int j=1;j<=c;j++)
		{
			cout<<"*";
		}

		cout<<endl;
	}
	return 0;
}