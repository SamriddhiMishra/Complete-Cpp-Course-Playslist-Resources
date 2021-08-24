#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
	int temp = *a;
	*a= *b;
	*b = temp;
}

void incr(int *a)
{
	(*a)++;
}

int main()
{
	int c=1;
	incr(&c);
	cout<<c<<endl;	

	int a=2,b=4;
	swap(&a, &b);
	cout<<a<<" "<<b;

	return 0;
}