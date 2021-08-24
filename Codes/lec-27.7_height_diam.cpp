//Height and Diameter of Binary tree
//https://www.geeksforgeeks.org/write-a-c-program-to-find-the-maximum-depth-or-height-of-a-tree/
//https://www.geeksforgeeks.org/diameter-of-a-binary-tree/
//https://www.geeksforgeeks.org/diameter-of-a-binary-tree-in-on-a-new-method/
//https://leetcode.com/problems/diameter-of-binary-tree/

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

int calcHeight(node* root)
{
	if(root == NULL)
		return 0;

	return max(calcHeight(root->left) , calcHeight(root->right)) +1;
}//T(n) = T(k) + T(n-k-1) +1
//O(n)

int calcDiameter(node* root)
{
	if(root == NULL)
		return 0;

	return max(calcHeight(root->left) + calcHeight(root->right) +1, max(calcDiameter(root->left), calcDiameter(root->right)));
}//T(n) = T(k) + T(n-k-1) + n (here time for calculating height takes O(n), so for each taking upper case n to calculate the height of subtrees)
//O(n^2)
//Case1- k=0 (skewed)
//Case2- k=n/2
//Space- Visualize at each level every time , max call stacks will be h(n in worst case)

int diameter(node* root, int* height)
{
	if(root == NULL)
	{
		*height=0;
		return 0;
	}
	int lh =0, rh=0;
	int ldiam = diameter(root->left, &lh); 
	int rdiam = diameter(root->right, &rh);
	*height = max(lh , rh) +1;
	int currDiam = lh + rh +1;
	return max(currDiam, max(ldiam, rdiam));
}//T(n) = T(k) + T(n-k-1) +1
//O(n)
//Space- O(h)- Worst = O(n), Best = O(logn)

int main()
{

	struct node* root = new node(1);
	root->left = new node(2);
	root->right = new node(3);

	root->left->left = new node(4);
	root->left->right = new node(5);
	root->right->left = new node(6);
	root->right->right = new node(7);

	cout<<calcHeight(root)<<endl;
	cout<<calcDiameter(root)<<endl;
	int height =0;
	cout<<diameter(root, &height)<<endl;

	return 0;
}
