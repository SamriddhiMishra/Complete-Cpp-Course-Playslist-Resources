#include<bits/stdc++.h>
using namespace std;

int main()
{
	char arr[100]; //arr[n+1]
	cin>>arr;
	int i=0;

	while(arr[i] != '\0')
	{
		cout<<arr[i];
		i++;
	}
	cout<<endl;
	cout<<arr<<endl;
	cout<<arr[2];
	return 0;
}