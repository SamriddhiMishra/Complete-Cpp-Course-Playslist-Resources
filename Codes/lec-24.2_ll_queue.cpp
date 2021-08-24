//Queue Implementation using Linked List
//https://www.geeksforgeeks.org/queue-linked-list-implementation/

#include<bits/stdc++.h>
using namespace std;

class node{
	public:

	int data;
	node* next;
	node(int val){
		data = val;
		next = NULL;
	}
};

class myqueue{
	node* front;
	node* back;
	public:
	myqueue(){
		front = NULL;
		back = NULL;
	}

	void enqueue(int val){
		node* n = new node(val);
		
		if(front == NULL)
			{front = n;  back = n; return;}
		back->next = n;
		back = n;
	}//T(1)

	void dequeue(){
		if(front == NULL)
			{cout<<"Queue Underflow"<<endl; return;}
		node* todelete = front;
		front = front->next;
		delete todelete;
		if(front == NULL)
			back = NULL;
	}//T(1)

	int peek()
	{
		if(front == NULL)
			{cout<<"Queue Underflow"<<endl; return -1;}
		return front->data;
	}//T(1)

	bool empty()
	{
		if(front == NULL)
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