//https://www.geeksforgeeks.org/flatten-a-binary-tree-into-linked-list/
//https://leetcode.com/problems/flatten-binary-tree-to-linked-list/

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

void inorder(node* root)
{

	if(root == NULL)
		return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

void flatten(node* root)
{
	if(root == NULL || (root->left == NULL && root->right == NULL))
		return;
	if(root->left != NULL)
	{
		flatten(root->left);

		node* temp = root->right;
		root->right = root->left;
		root->left = NULL;

		node* t = root->right;
		while(t->right != NULL)
			t = t->right;
		t->right = temp;
	}
	flatten(root->right);
}//T(n) = T(k) + T(n-k-1) +1
//O(n)


int main()
{

	struct node* root = new node(4);
	root->left = new node(9);
	root->right = new node(5);

	root->left->left = new node(1);
	root->left->right = new node(3);
	root->right->right = new node(6);

	flatten(root);
	inorder(root);


	return 0;
}

//S(n) - max stack