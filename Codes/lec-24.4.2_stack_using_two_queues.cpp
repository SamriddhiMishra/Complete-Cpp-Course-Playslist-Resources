//Implement stack using two quese when pop operation is costly
//https://www.geeksforgeeks.org/implement-stack-using-queue/
//https://www.geeksforgeeks.org/implement-a-stack-using-single-queue/

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

	void pop()
	{
		if(q1.empty())
			{cout<<"Stack Underflow"<<endl; return;}
		
		while(q1.size() != 1)
		{
			q2.push(q1.front());
			q1.pop();
		}
		q1.pop();
		n--;
		//cout<<q1.size()<<" "<<q2.size()<<endl;
		queue<int> temp = q1;
		q1 = q2;
		q2 = temp;
		//cout<<q1.size()<<" "<<q2.size()<<endl;
	}//T(n)

	void push(int x)
	{
		n++;
		q1.push(x);
	}//T(1)

	int Top()
	{
		if(n==0 || q1.empty())
			{cout<<"Stack Underflow"<<endl; return -1;}
		
		while(q1.size() != 1)
		{
			q2.push(q1.front());
			q1.pop();
		}
		int t = q1.front();
		q1.pop();
		q2.push(t);

		queue<int> temp = q1;
		q1 = q2;
		q2 = temp;

		return t;
	}//T(n)

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