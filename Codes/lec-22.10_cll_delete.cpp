//Circular Linked List
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
	if(head == NULL)
	{
		cout<<"NULL"<<endl;
		return;
	}
	node* temp = head;
	do{
		cout<<temp->data<<"->";
		temp = temp->next;
	}
	while(temp != head);

	cout<<"NULL"<<endl;
}//O(n)

void insertAtTail(node* &head, int val)
{
	node* n = new node(val);
	if(head == NULL)
	{
		head = n;
		head->next = head;
		return;
	}
	node* temp = head;
	while(temp->next != head)
		temp = temp->next;
	temp->next = n;
	n->next = head;
	temp=NULL;
	delete temp;
}//O(n)

void deleteAtTail(node* &head)
{
	if(head == NULL || head->next == head)
	{
		head = NULL;
		return;
	}
	node* temp = head;
	while(temp->next->next != head)
		temp = temp->next;
	node* todelete = temp->next;
	temp->next = head;
	delete todelete;
}//T(n)

void deleteAtHead(node* &head)
{
	if(head == NULL || head->next == head)
	{
		head = NULL;
		return;
	}
	node* temp = head;
	while(temp->next != head)
		temp = temp->next;
	node* todelete = head;
	head = head->next;
	temp->next = head;
	delete todelete;
}//T(n)

void deleteAtPos(node* &head, int pos)
{
	if(head == NULL)
		return;
	if(pos == 1)
	{
		deleteAtHead(head);
		return;
	}
	int count = 1; pos--;
	node* temp = head;
	while(count < pos)
		{temp = temp->next; count++;}
	temp->next = temp->next->next;
	temp = NULL;
	delete temp;
}//T(n)

int main()
{
	node* head = NULL;

	insertAtTail(head, 1);
	insertAtTail(head, 2);
	insertAtTail(head, 3);
	insertAtTail(head, 5);
	insertAtTail(head, 6);

	print(head);

	//deleteAtTail(head);
	//deleteAtTail(head);
	//deleteAtTail(head);
	//deleteAtTail(head);
	//deleteAtTail(head);

	//deleteAtHead(head);
	//deleteAtHead(head);
	//deleteAtHead(head);
	//deleteAtHead(head);
	//deleteAtHead(head);
	//deleteAtHead(head);

	deleteAtPos(head, 5);

	print(head);
	//print(head->next);	

	return 0;
}