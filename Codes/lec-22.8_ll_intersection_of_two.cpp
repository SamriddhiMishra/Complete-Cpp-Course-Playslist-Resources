//Find intersection point of two linked lists else return -1
//https://www.geeksforgeeks.org/write-a-function-to-get-the-intersection-point-of-two-linked-lists/
//https://leetcode.com/problems/intersection-of-two-linked-lists/

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

void intersect(node* &head1, node* &head2, int pos)
{
	node* temp1 = head1;
	pos--;
	while(pos--)
		temp1 = temp1->next;

	node* temp2 = head2;
	while(temp2->next != NULL)
		temp2 = temp2->next;
	temp2->next = temp1;
}

int checkIntersection(node* head1, node* head2)
{
	int l1 = getLength(head1);
	int l2 = getLength(head2);

	int d=0; node* ptr1; node* ptr2;

	if(l1 > l2)
	{
		d = l1-l2;
		ptr1 = head1;
		ptr2 = head2;
	}
	else
	{
		d = l2-l1;
		ptr1 = head2;
		ptr2 = head1;
	}

	while(d)
	{
		ptr1 = ptr1->next;
		if(ptr1 == NULL)
			return -1;
		d--;
	}

	while(ptr1 != NULL && ptr2 != NULL)
	{
		if(ptr1 == ptr2)
			return ptr1->data;
		ptr1 = ptr1->next;
		ptr2 = ptr2->next;
	}
	return -1;
}//T(l1+l2)- T(max(l1,l2))

int main()
{
	node* head1 = NULL;node* head2 = NULL;

	insertAtTail(head1, 1);
	insertAtTail(head1, 2);
	insertAtTail(head1, 3);
	insertAtTail(head1, 4);
	insertAtTail(head1, 5);
	insertAtTail(head1, 6);
	insertAtTail(head2, 9);
	insertAtTail(head2, 10);
	intersect(head1, head2, 3);

	print(head1);
	print(head2);

	cout<<checkIntersection(head1, head2)<<endl;


	return 0;
}