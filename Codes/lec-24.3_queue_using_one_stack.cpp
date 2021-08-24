//Implementing queue using single stack and function call
//https://www.geeksforgeeks.org/queue-using-stacks/

#include<bits/stdc++.h>
using namespace std;

class myqueue{
	stack<int> s1;

public:
	void enqueue(int x)
	{
		s1.push(x);
	}//T(1)

	int dequeue()
	{
		if(s1.empty() )
			{cout<<"Queue Underflow"<<endl; return -1;}
		int x = s1.top();
		s1.pop();
		if(s1.empty())
			return x;
		int item = dequeue();
		s1.push(x);
		return item;
	}//T(n)

	int peek()
	{
		if(s1.empty())
			{cout<<"Queue Underflow"<<endl; return -1;}
		int x = s1.top();
		s1.pop();
		if(s1.empty())
			{s1.push(x); return x;}
		int item = peek();
		s1.push(x);
		return item;
	}//T(n)

	bool empty()
	{
		if(s1.empty())
			return true;
		return false;
	}//T(1)
};

int main()
{
	myqueue q;
	q.enqueue(1);
	cout<<q.peek()<<endl;
	q.enqueue(2);
	cout<<q.peek()<<endl;
	q.enqueue(3);
	cout<<q.peek()<<endl;

	q.dequeue();
	cout<<q.peek()<<endl;
	q.dequeue();
	cout<<q.peek()<<endl;
	q.dequeue();
	cout<<q.peek()<<endl;

	cout<<q.empty()<<endl;

	return 0;
}