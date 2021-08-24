//https://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/
//https://leetcode.com/problems/binary-tree-inorder-traversal/
//https://leetcode.com/problems/binary-tree-preorder-traversal/
//https://leetcode.com/problems/binary-tree-postorder-traversal/

#include<bits/stdc++.h>
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

void preorder(struct node* root)
{
	if(root == NULL)
		return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}//T(n)

void inorder(struct node* root)
{
	if(root == NULL)
		return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}//T(n)

void postorder(struct node* root)
{
	if(root == NULL)
		return;
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}//T(n)

int main()
{

	struct node* root = new node(1);
	root->left = new node(2);
	root->right = new node(3);

	root->left->left = new node(4);
	root->left->right = new node(5);
	root->right->left = new node(6);
	root->right->right = new node(7);

	preorder(root);
	cout<<endl;
	inorder(root);
	cout<<endl;
	postorder(root);

	return 0;
}

//Time - O(n)
//T(n) = T(k) + T(n – k – 1) + c
//Where k is the number of nodes on one side of root and n-k-1 on the other side.
//Space - O(1)- constant + O(h)- function call stack
//best - h=logn O(logn)
//worst - h=n O(n)