#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = {10,20,30};
	cout<<arr<<endl;//stores address of 0th element of array

	cout<<*arr<<endl;

	int *ptr = arr;
	for(int i=0;i<3;i++)
	{
		cout<<*ptr<<" ";
		ptr++;
	}
	cout<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<*(arr+i)<<" ";
		//arr++; not possible as constant operator
	}

	return 0;
}