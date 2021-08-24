//https://www.geeksforgeeks.org/how-to-determine-if-a-binary-tree-is-balanced/
//https://leetcode.com/problems/balanced-binary-tree/

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

int height(node* root)
{
	if(root == NULL)
		return 0;

	return max(height(root->left) , height(root->right)) +1;
}//O(n)

bool isBalanced(node* root)
{
	if(root == NULL)
		return true;

	if( !isBalanced(root->left) || !isBalanced(root->right) )
		return false;
	return abs(height(root->left) - height(root->right)) <=1;
}//T(n) = T(k) + T(n-k-1) + n (here time for calculating height takes O(n), so for each taking upper case n to calculate the height of subtrees)
//O(n^2)
//Case1- k=0 (skewed)
//Case2- k=n/2
//Space- Visualize at each level every time , max call stacks will be h(n in worst case)

bool isbalanced(node* root, int* height)
{
	if(root == NULL)
		{ *height =0; return true;}

	int lh =0, rh=0;
	if(!isbalanced(root->left, &lh))
		return false;

	if(!isbalanced(root->right, &rh))
		return false;

	*height = max(lh, rh) +1;

	return (abs(lh - rh) <=1);
}//T(n) ,as now height is found in O(1)
//O(n) Space- max call stack will be h(n in worst case)

int main()
{

	struct node* root = new node(1);
	root->left = new node(2);
	root->right = new node(3);

	root->left->left = new node(4);
	root->left->right = new node(5);
	root->right->left = new node(6);
	root->right->right = new node(7);

	

	struct node* root2 = new node(1);
	root2->left = new node(2);
	root2->left->left = new node(4);


	cout<<isBalanced(root)<<endl;

	int height =0;
	cout<<isbalanced(root, &height)<<endl;

	return 0;
}
