//1+2+...n using recursion
#include<bits/stdc++.h>
using namespace std;


int sum(int n)
{
    if(n ==0)
        return 0;
    return n + sum(n-1);
}

int main()
{
	int n;
    cin>>n;
    cout<<sum(n)<<endl;
	return 0;
}
//T(n) = T(n-1) +1
//Time- O(n)
//Space- O(n)-> max size stack