//Zig Zag Pattern

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int c;
	cin>>c;
	for(int i=1;i<=3;i++)
	{	
		for(int j=1;j<=c;j++)
		{
			if((i+j)%4 == 0)
				cout<<"*";
			else if ((j%4==0) && i==2)
				cout<<"*";
			else
				cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}