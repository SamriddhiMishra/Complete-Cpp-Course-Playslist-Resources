//Butterfly Pattern

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int c;
	cin>>c;
	for(int i=c;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
			cout<<j;

		cout<<endl;
	}
	return 0;
}