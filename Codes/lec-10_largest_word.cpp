//https://www.geeksforgeeks.org/program-find-smallest-largest-word-string/
//https://www.geeksforgeeks.org/program-display-number-characters-longest-word-sentence/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	cin.ignore();

	char arr[n+1]; //S(n)

	cin.getline(arr,n); //take string as input, and not spliting by space
	cin.ignore();//clear the buffer


	int maxi = INT_MIN,c=0,i=0,st=0;
	while(1) //T(n)
	{
		if(arr[i] == ' ' || arr[i] == '\0')
			{
				if(c>maxi)
					st = i - c;
				maxi = max(maxi, c); c=0;
			}
		else
			c++;
		if(arr[i] == '\0')
			break;
		i++;
	}
	cout<<maxi<<endl;

	for(int i=0;i<maxi;i++)
		cout<<arr[st+i];
	return 0;
}

//Time- O(n)
//Space - O(n)