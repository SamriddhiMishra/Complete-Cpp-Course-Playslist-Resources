//Prime factorisation using Sieve Of Eratosthenes
#include<bits/stdc++.h>
using namespace std;


void prime_fact(int n)
{
    int spf[n+1]={0};
    for(int i=2;i<=n;i++)
        spf[i] = i;
    for(int i=2; i<= n ;i++)
    {
        if (spf[i] == i)
        {
            for(int j = i*i;j<=n;j+=i)
               {
                if(spf[j] == j)
                    spf[j] = i;
               }
        }
    }

    while(n != 1)
    {
        cout<<spf[n]<<" ";
        n = n/spf[n];
    }

}
int main()
{
	int n;
    cin>>n;
    prime_fact(n);
	return 0;
}
//Time- O(n*log(log(n)))
//Space- O(n)