//Doubly Linked List
//Deletion
//https://www.geeksforgeeks.org/delete-a-node-in-a-doubly-linked-list/
//https://www.geeksforgeeks.org/delete-doubly-linked-list-node-given-position/

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

void deleteAtHead(node* &head)
{
	if(head == NULL)
		return;
	if(head->next != NULL)
		head->next->prev = NULL;
	head = head->next;
}//T(1)

void deleteAtTail(node* &head)
{
	if(head == NULL)
		return;
	if(head->next == NULL)
	{
		head = NULL;
		return;
	}
	node* temp = head;
	while(temp->next != NULL)
		temp = temp->next;

	temp->prev->next = NULL;
}//T(n)

void deleteByVal(node* &head, int val)
{
	if(head == NULL )
		return;

	if(head-> data == val)
	{
		if(head->next != NULL)
			head->next->prev = NULL;
		head= head->next; 
		return;
	} 

	node* temp= head;
	while(temp->data != val)
		temp = temp->next;
	if(temp->prev != NULL)
		temp->prev->next = temp->next;
	if(temp->next != NULL)
		temp->next->prev = temp->prev;

	delete temp;
}//T(n)

void deleteByPos(node* &head, int pos)
{
	if(head == NULL)
		return;
	if(pos == 1)
	{
		if(head->next != NULL)
			head->next->prev = NULL;
		head = head->next;
		return;
	}
	int count =1;
	node* temp = head;
	while(count != pos && temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	if(temp->prev != NULL)
		temp->prev->next = temp->next;

	if(temp->next != NULL)
		temp->next->prev = temp->prev;

	delete temp;
}//T(n)

int main()
{
	node* head = NULL;

	insertAtTail(head, 1);
	insertAtTail(head, 2);
	insertAtTail(head, 3);
	insertAtTail(head, 4);

	printlr(head);
	printrl(head);

	//deleteByVal(head, 4);
	//deleteByVal(head, 3);
	//deleteByVal(head, 1);

	//deleteByPos(head, 4);
	//deleteByPos(head, 2);
	//deleteByPos(head, 2);
	//deleteByPos(head, 1);

	//deleteAtHead(head);
	//deleteAtHead(head);
	//deleteAtHead(head);
	//deleteAtHead(head);
	//deleteAtHead(head);

	deleteAtTail(head);
	deleteAtTail(head);
	deleteAtTail(head);
	deleteAtTail(head);
	deleteAtTail(head);

	printlr(head);
	printrl(head);

	return 0;
}