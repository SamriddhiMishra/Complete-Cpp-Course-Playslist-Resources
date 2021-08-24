//Most frequent characters in string

#include<bits/stdc++.h>
using namespace std;


int main()
{

	string s = "ccddddc"; int c=0,maxi=INT_MIN;

	int freq[26];

	for(int i=0;i<26;i++)
		freq[i] =0;

	for(int i=0;i<s.size();i++)
		freq[s[i]-'a']++;

	for(int i=0;i<26;i++)
		{
			if(freq[i]>=maxi)
				{
					maxi = freq[i];
					c = i;
				}
		}

		cout<<char('a'+c)<<" "<<maxi<<endl;
	


	return 0;
}