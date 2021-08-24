//Knapsack Problem using recursion
//https://www.geeksforgeeks.org/0-1-knapsack-problem-dp-10/

#include<bits/stdc++.h>
using namespace std;

int knapsack(int wt[], int value[], int i, int W)
{
    if(W == 0 || i==0)
        return 0;
    if (W < wt[i-1])
        return knapsack(wt, value, i-1, W);
    return max(knapsack(wt, value, i-1, W), value[i-1] + knapsack(wt, value, i-1, W-wt[i-1]));
}

int main()
{
    int n = 3;
    int wt[]={10, 20, 30};
    int value[] = {100, 50 ,150};
    int W = 50;
    cout<<knapsack(wt, value, n, W)<<endl;
    return 0;
}
//T(n) = T(n-1) + v*T(n-1) +1 -> Similar to 2T(n-1) + 1
//Time- T(2^n)
//Space- O(2^n)