//https://www.geeksforgeeks.org/passing-reference-to-a-pointer-in-c/
//https://www.geeksforgeeks.org/linked-list-set-1-introduction/
//https://www.geeksforgeeks.org/linked-list-set-2-inserting-a-node/
//https://www.geeksforgeeks.org/search-an-element-in-a-linked-list-iterative-and-recursive/
//https://leetcode.com/problems/design-linked-list/

#include<bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node* next;

	node(int val=0)
	{
		data = val;
		next = NULL;
	}

};

void insertAtTail(node* &head, int val)
{
	node* n = new node(val);
	node* temp = head;
	if(temp == NULL)
		{head = n; return;}
	while(temp->next != NULL)
		temp = temp->next;
	temp->next = n;
}//O(n)

void insertAtHead(node* &head, int val)
{
	node* n = new node(val);
	if(head == NULL)
	{
		head = n; return;
	}
	n->next = head;
	head =n;
}//O(1)

void print(node* head)
{
	while(head != NULL)
	{
		cout<<(head->data)<<"->";
		head = head->next;
	}
	cout<<"NULL"<<endl;
}//O(n)

bool search(node* head, int val)
{
	while(head != NULL)
	{
		if(head -> data == val)
			return true;
		head = head->next;
	}
	return false;
}//O(n)

int main()
{
	//node* head = new node(8); create first node here then can pass head by value and not by
	//reference, as if pass by value and first node added there then that pointer value remains in function only and here head remain NULL.
	//So pass by reference so that if first node addede head pointer value changes here too.
	//You need to pass head by refernce(node* &head) only if your head pointer is changing. 
	//If head poiter is not changing like searching or insert node a end(where atleast one node), then we can pass head pointer by value only.
	node* head = NULL;

	insertAtTail(head, 1);
	insertAtTail(head, 2);
	insertAtTail(head, 3);

	print(head);

	insertAtHead(head, 5);

	print(head);

	cout<<search(head, 7)<<endl;
	cout<<search(head, 5)<<endl;

	return 0;
}