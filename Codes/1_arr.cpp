#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void f(int v[])
{
    v[1] = 3;
    for(int i=0;i<3;i++)
        cout<<v[i]<<" ";
    cout<<endl;
}
void m(int v[])
{
    v[1] = 5;
    for(int i=0;i<3;i++)
        cout<<v[i]<<" ";
    cout<<endl;
}

int main() {
    int a[] = {1,2,3};
    for(int i=0;i<3;i++)
        cout<<a[i]<<" ";
    cout<<endl;

    f(a);

    for(int i=0;i<3;i++)
        cout<<a[i]<<" ";
    cout<<endl;

    m(a);
    
    for(int i=0;i<3;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}