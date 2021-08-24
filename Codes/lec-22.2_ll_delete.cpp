//https://www.geeksforgeeks.org/linked-list-set-3-deleting-node/
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

void print(node* head)
{
	while(head != NULL)
	{
		cout<<(head->data)<<"->";
		head = head->next;
	}
	cout<<"NULL"<<endl;
}//O(n)

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

void deleteNth(node* &head, int val)
{
	if(head == NULL)
		return;
	if(head->data == val)
	{
		head = head->next;
		return;
	}
	node* temp = head;
	while(temp->next->data != val)
		temp = temp->next;
	node* todelete = temp->next;
	temp->next = temp->next->next;
	delete todelete;
}//O(n)


void deleteAtHead(node* &head)
{
	if(head == NULL)
		return;
	node* todelete = head;
	head = head->next;
	delete todelete; // do this else leads to memeory leak
}//O(1)

void deleteAtTail(node* &head)
{
	if(head == NULL)
		return;
	if(head->next == NULL)
		{head = NULL; return;}
	node* temp = head;
	while(temp->next->next != NULL)
		temp = temp->next;
	node* todelete = temp->next->next;
	temp->next = NULL;
	delete todelete;
}//O(n)


int main()
{
	node* head = NULL;

	insertAtTail(head, 1);
	insertAtTail(head, 2);
	insertAtTail(head, 3);

	print(head);

	//deleteNth(head, 2);
	//deleteNth(head, 1);
	//deleteNth(head, 3);

	//deleteAtHead(head);
	//deleteAtHead(head);
	//deleteAtHead(head);

	deleteAtTail(head);
	deleteAtTail(head);
	deleteAtTail(head);
	deleteAtTail(head);

	print(head);

	return 0;
}