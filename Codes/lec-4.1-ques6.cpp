//Floyd's Triangle

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int r,c;
	cin>>r>>c;
	int count=1;
	for(int i=1;i<=r;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<count++<<" ";
		}
		cout<<endl;
	}
	return 0;
}