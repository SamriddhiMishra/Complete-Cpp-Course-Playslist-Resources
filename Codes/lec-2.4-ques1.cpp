//for while do-while
#include<iostream>
using namespace std;

int main()
{
	int a;
	cin>>a;
	
	for(int i=1;i<=a;i++)
		cout<<i<<endl;

	cout<<endl;

	int i=1;
	while(i<=a)
	{	
		cout<<i<<endl;
		i++;
	}

	cout<<endl;


	i=2;
	do{	
		cout<<i<<endl;
		i++;
	}while(i<=a);
	
	return 0;
}