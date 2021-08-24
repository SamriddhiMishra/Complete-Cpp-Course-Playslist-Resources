#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void f(vector<int> v)
{
    v[1] = 3;
    for(auto i : v)
        cout<<i<<" ";
    cout<<endl;
}
void m(vector<int> &v)
{
    v[1] = 5;
    for(auto i : v)
        cout<<i<<" ";
    cout<<endl;
}

int main() {
    vector<int> a = {1,2,3};
    for(auto i : a)
        cout<<i<<" ";
    cout<<endl;

    f(a);

    for(auto i : a)
        cout<<i<<" ";
    cout<<endl;

    m(a);
    
    for(auto i : a)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}