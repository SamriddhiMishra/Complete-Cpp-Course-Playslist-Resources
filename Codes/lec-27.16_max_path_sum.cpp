//https://www.geeksforgeeks.org/find-maximum-path-sum-in-a-binary-tree/
//https://leetcode.com/problems/binary-tree-maximum-path-sum/

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

int maxPathSumUtil(node* root, int &ans)
{
	if(root == NULL)
		return 0;

	int left = maxPathSumUtil(root->left, ans);
	int right = maxPathSumUtil(root->right, ans);

	int nodeMax = max(max(root->data, root->data + left + right), max(root->data +left, root->data + right));

	ans = max(ans, nodeMax);

	int singlePathSum = max(max(root->data,root->data +left ),root->data + right);
	return singlePathSum;
}//T(n) = T(k) + T(n-k-1) +1
//O(n)

int maxPathSum(node* root)
{
	int ans = INT_MIN;
	maxPathSumUtil(root, ans); //return int but no ned to store
	return ans;
}//T(n) = T(k) + T(n-k-1) +1
//O(n)

int main()
{

	struct node* root = new node(1);
	root->left = new node(2);
	root->right = new node(3);

	root->left->left = new node(4);
	root->right->right = new node(5);

	 cout<<maxPathSum(root)<<endl;
	

	return 0;
}

//S(n) - max stack