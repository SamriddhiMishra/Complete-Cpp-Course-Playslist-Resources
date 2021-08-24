//Implement stack using two quese when push operation is costly
//https://www.geeksforgeeks.org/implement-stack-using-queue/
//https://www.geeksforgeeks.org/implement-a-stack-using-single-queue/
//https://leetcode.com/problems/implement-stack-using-queues/

#include<bits/stdc++.h>
using namespace std;


class mystack{
	queue<int> q1, q2;
	int n; //stack size
	public:

	mystack()
	{
		n=0;
	}

	void push(int x)
	{
		n++;
		q2.push(x);
		while(!q1.empty())
		{
			int t = q1.front();
			q2.push(t);
			q1.pop();
		}

		queue<int> temp = q1;
		q1 = q2;
		q2 = temp;
	}//T(n)

	void pop()
	{
		if(n == 0)
			{cout<<"Stack Underflow"<<endl; return;}
		n--;
		q1.pop();
	}//T(1)

	int Top()
	{
		if(n == 0)
			{cout<<"Stack Underflow"<<endl; return-1;}
		return q1.front();
	}//T(1)

	int size()
	{
		return n;
	}//T(1)

	bool empty()
	{
		if(n==0)
			return true;
		return false;
	}//T(1)
};

int main()
{
	mystack st;
	st.push(1);
	st.push(2);
	st.push(3);
	cout<<st.Top()<<endl;
	st.pop();
	cout<<st.Top()<<endl;
	st.pop();
	cout<<st.Top()<<endl;
	st.pop();

	cout<<st.Top()<<endl;
	cout<<st.empty()<<endl;

	cout<<st.size()<<endl;

	return 0;
}