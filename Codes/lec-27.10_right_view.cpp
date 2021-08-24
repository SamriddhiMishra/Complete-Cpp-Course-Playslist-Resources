//https://www.geeksforgeeks.org/print-right-view-binary-tree-2/
//https://www.geeksforgeeks.org/right-view-binary-tree-using-queue/
//https://leetcode.com/problems/binary-tree-right-side-view/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct node{
	int data;
	struct node* left;
	struct node* right;

	node(int val)
	{
		data = val;
		left = NULL;
		right = NULL;
	}
};

void rightView(node* root)
{
	if(root == NULL)
		return;

	queue<node*> q; node* n;
	q.push(root);

	while(!q.empty())
	{
		int size = q.size();
		while(size--)
		{
			n = q.front();
			q.pop();

			if (n->left)
				q.push(n->left);
			if(n->right)
				q.push(n->right);
		}
		cout<<n->data<<endl;
	}
}//T(n)
//S(n), queue size


int main()
{

	struct node* root = new node(1);
	root->left = new node(2);
	root->right = new node(3);

	root->left->left = new node(4);
	root->left->right = new node(5);
	root->right->left = new node(6);
	root->right->right = new node(7);

	rightView(root);

	return 0;
}
