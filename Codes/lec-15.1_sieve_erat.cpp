//Sieve Of Eratosthenes
//https://www.geeksforgeeks.org/how-is-the-time-complexity-of-sieve-of-eratosthenes-is-nloglogn/
//https://www.geeksforgeeks.org/sieve-eratosthenes-0n-time-complexity/

#include<bits/stdc++.h>
using namespace std;


void primeSieve(int n)
{
    int prime[n+1]={0};
    for(int i=2; i<= n ;i++)
    {
        if (prime[i] == 0)
        {
            for(int j = i*i;j<=n;j+=i)
                prime[j] =1;
        }
    }

    for(int i=2;i<=n;i++)
    {
        if(prime[i] == 0)
            cout<<i<<" ";
    }

}

int main()
{
	int n;
    cin>>n;
    primeSieve(n);
	return 0;
}
//Time- O(n/2 + n/3 + n/5 + n/7 ....) = O(n*log(log(n)))
//Space- O(n)