//https://www.geeksforgeeks.org/c-program-check-given-string-palindrome/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	char arr[n+1]; //S(n)
	cin>>arr;


	bool check = true;
	
	for(int i=0;i<n/2;i++)
	{
		if(arr[i] != arr[n-1-i]) //T(n)
		{
			check = false;
			break;
		}
	}
	if(check == true)
		cout<<"Palindrome"<<endl;
	else
		cout<<"Not Palindrome"<<endl;
	return 0;
}//T(n), S(n)

//Time - O(n)
//Space - O(n)