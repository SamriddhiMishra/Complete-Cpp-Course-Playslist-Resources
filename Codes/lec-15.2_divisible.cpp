//Inclusion-Exclusion Principle
#include<bits/stdc++.h>
using namespace std;


int divisible(int n, int a, int b)
{
    int n1,n2,n3;

    n1 = n/a;
    n2= n/b;
    n3 = n/(a*b);
    return n1+ n2 - n3;
}

int main()
{
	int n, a,b;
    cin>>n>>a>>b;
    cout<<divisible(n,a,b)<<endl;
	return 0;
}
//Time- O(1)
//Space- O(1)