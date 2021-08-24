#include<bits/stdc++.h>
using namespace std;
int main()
{
	int r,c;
	cin>>r>>c;

	for(int i=1;i<=r;i++)
	{
		for(int k =1;k<=c-i;k++)
			cout<<" ";

		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}