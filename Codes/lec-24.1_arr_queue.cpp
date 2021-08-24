//Queue Implementation using Array
#include<bits/stdc++.h>
using namespace std;

#define n 20

class myqueue{
	int front,back;
	int* arr;
public:

	myqueue()
	{
		arr = new int[n];
		front = -1;
		back = -1;	
	}

	void enqueue(int x)
	{
		if(back == n-1)
			{cout<<"Queue Overflow"<<endl; return;}
		arr[++back] = x;
		if(front == -1)
			front++;
	}//T(1)

	void dequeue()
	{
		if(front == -1 || front>back)
			cout<<"Queue Underflow"<<endl;
		else
			front++;
	}//T(1)

	int peek()
	{
		if(front == -1 || front>back)
			{cout<<"Queue Underflow"<<endl; return -1;}
		else
			return arr[front];
	}//T(1)

	bool empty()
	{
		if(front == -1 || front>back)
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

	cout<<q.empty()<<endl;

	return 0;
}