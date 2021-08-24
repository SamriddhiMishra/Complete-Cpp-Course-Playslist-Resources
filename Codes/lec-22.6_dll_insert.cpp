//Doubly Linked List
//Insertion

//https://www.geeksforgeeks.org/doubly-linked-list/
//https://leetcode.com/problems/design-linked-list/

#include<bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node* prev;
	node* next;

	node(int val=0)
	{
		data = val;
		prev = NULL;
		next = NULL;
	}

};

void printlr(node* head)
{
	while(head != NULL)
	{
		cout<<head->data<<"->";
		head = head->next;
	}
	cout<<"NULL"<<endl;
}//O(n)

node* getTail(node* head)
{
	while(head != NULL && head->next != NULL)
		head = head->next;
	return head;
}

void printrl(node* head)
{
	node* tail = getTail(head);
	while(tail != NULL)
	{
		cout<<tail->data<<"->";
		tail = tail->prev;
	}
	cout<<"NULL"<<endl;
}//O(n)

void insertAtTail(node* &head, int val)
{
	node* n = new node(val);
	if(head == NULL)
		{head = n; return;}

	node* temp = head;
	while(temp->next != NULL)
		temp = temp->next;
	temp->next = n;
	n->prev = temp;
}//O(n)

void insertAtHead(node* &head, int val)
{
	node* n = new node(val);
	if(head == NULL)
		{head = n; return;}

	n->next = head;
	head ->prev = n;
	head = n;
}//O(1)

int main()
{
	node* head = NULL;

	insertAtTail(head, 1);
	insertAtTail(head, 2);
	insertAtTail(head, 3);
	insertAtTail(head, 4);

	printlr(head);
	printrl(head);

	insertAtHead(head, 5);

	printlr(head);
	printrl(head);

	return 0;
}