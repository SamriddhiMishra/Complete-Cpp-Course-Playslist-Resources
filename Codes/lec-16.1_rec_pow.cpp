//a^b using recursion
#include<bits/stdc++.h>
using namespace std;


int power(int a, int b)
{
    if (a==0)
        return 0;
    if(b==0)
        return 1;
    return a * power(a, b-1);
}

int main()
{
	int a, b;
    cin>>a>>b;
    cout<<power(a,b)<<endl;
	return 0;
}
// a is constant in each func call so time compl doesn't depends on it.
//T(b) = T(b-1) +1
//Time- O(b), b is exponent
//Space- O(b) -> stack