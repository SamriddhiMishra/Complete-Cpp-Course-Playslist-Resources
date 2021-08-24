//Merging two sorted linked lists
//https://www.geeksforgeeks.org/merge-two-sorted-linked-lists/
//https://www.geeksforgeeks.org/merge-two-sorted-lists-place/
//https://leetcode.com/problems/merge-two-sorted-lists/

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

int getLength(node* head)
{
	int count = 0;
	while(head != NULL)
	{
		head = head->next;
		count++;
	}
	return count;
}//T(n)

node* merge(node* head1, node* head2)
{
	node* temp;
	node* newhead = temp;
	while(head1 != NULL && head2 != NULL)
	{
		if(head1->data < head2->data)
		{
			temp->next = head1;
			head1 = head1->next;
		}
		else
		{
			temp->next = head2;
			head2 = head2->next;
		}
		temp = temp->next;
	}
	while(head1 != NULL)
	{
		temp->next = head1;
		head1 = head1->next;
		temp = temp->next;
	}
	while(head2 != NULL)
	{
		temp->next = head2;
		head2 = head2->next;
		temp = temp->next;
	}
	temp->next = NULL;
	return newhead->next;
}//T(l1 + l2)

node* mergeRecursive(node* head1, node* head2)
{
	if (head1 == NULL)
		return head2;
	if (head2 == NULL)
		return head1;

	node* result;

	if(head1->data < head2->data)	
		{
			result = head1;
			result->next = mergeRecursive(head1->next, head2);
		}
	else
		{
			result = head2;
			result->next = mergeRecursive(head1, head2->next);
		}
	
	return result;
}//T(l1 + l2)

int main()
{
	node* head1 = NULL;node* head2 = NULL;

	insertAtTail(head1, 1);
	insertAtTail(head1, 2);
	insertAtTail(head1, 3);
	insertAtTail(head1, 5);
	insertAtTail(head1, 8);
	insertAtTail(head1, 8);

	insertAtTail(head2, 4);
	insertAtTail(head2, 6);

	print(head1);
	print(head2);

	//node* newhead = merge(head1, head2);
	//print(newhead);

	node* newhead1 = mergeRecursive(head1, head2);
	print(newhead1);

	return 0;
}