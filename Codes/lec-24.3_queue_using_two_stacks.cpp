//Implementing queue using two stacks
//https://www.geeksforgeeks.org/queue-using-stacks/
//https://leetcode.com/problems/implement-queue-using-stacks/

#include<bits/stdc++.h>
using namespace std;

class myqueue{
	stack<int> s1;
	stack<int> s2;

public:
	void enqueue(int x)
	{
		s1.push(x);
	}//T(1)

	void dequeue()
	{
		if(s1.empty() && s2.empty())
			{cout<<"Queue Underflow"<<endl; return;}
		if(s2.empty())
		{
			while(!s1.empty())
			{
				s2.push(s1.top());
				s1.pop();
			}
		}
		s2.pop();
	}//T(n)

	int peek()
	{
		if(s2.empty())
		{
			while(!s1.empty())
			{
				s2.push(s1.top());
				s1.pop();
			}
		}
		if(s2.empty())
			{cout<<"Queue Underflow"<<endl; return -1;}
		return s2.top();
	}//T(n)

	bool empty()
	{
		if(s1.empty() && s2.empty())
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