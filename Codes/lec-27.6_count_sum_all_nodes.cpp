//Count and Sum of all nodes in binary tree
//https://www.geeksforgeeks.org/sum-nodes-binary-tree/
//https://www.geeksforgeeks.org/sum-leaf-nodes-binary-tree/
//https://leetcode.com/problems/count-complete-tree-nodes/
//https://leetcode.com/problems/sum-of-left-leaves/

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

int countNodes(node* root)
{

	if(root == NULL)
		return 0;

	return countNodes(root->left) + countNodes(root->right) +1;
}//T(n) = T(k) + T(n-k-1) +1
//O(n)

int sumNodes(node* root)
{

	if(root == NULL)
		return 0;

	return sumNodes(root->left) + sumNodes(root->right) + (root->data);
}//T(n) = T(k) + T(n-k-1) +1
//O(n)

int leafSum(node *root){
    if (root == NULL)
        return 0;

    if (!root->left && !root->right)
        return root->data;
 
    return leafSum(root->left) + leafSum(root->right);
}//T(n) = T(k) + T(n-k-1) + c
//O(n)


int main()
{

	struct node* root = new node(1);
	root->left = new node(2);
	root->right = new node(3);

	root->left->left = new node(4);
	root->left->right = new node(5);
	root->right->left = new node(6);
	root->right->right = new node(7);

	cout<<countNodes(root)<<endl;

	cout<<sumNodes(root)<<endl;

	cout<<leafSum(root)<<endl;

	return 0;
}
//Space
//O(h)- Worst = O(n), Best = O(logn)