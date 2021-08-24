#include<bits/stdc++.h>
using namespace std;
int main()
{
	int c;
	cin>>c;
	for(int i=1;i<=c;i++)
	{
		int s = i%2;
		for(int j=1;j<=i;j++)
		{
			cout<<s;
			s = (s == 1)?0:1;
		}

		cout<<endl;
	}
	return 0;
}