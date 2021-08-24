#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void f(queue<int> v)
{
    v.push(3);
}
void m(queue <int> &v)
{
    v.push(5);
}

int main() {
    queue<int> v;
    v.push(1);
    v.push(2);
    v.push(3);
    while(!v.empty())
    {
        cout<<v.front()<<" "<<endl;
        v.pop();
    }
    cout<<endl;

    v.push(1);
    v.push(2);
    v.push(3);

    f(v);

    while(!v.empty())
    {
        cout<<v.front()<<" "<<endl;
        v.pop();
    }
    cout<<endl;

    v.push(1);
    v.push(2);
    v.push(3);

    m(v);
    
    while(!v.empty())
    {
        cout<<v.front()<<" "<<endl;
        v.pop();
    }
    cout<<endl;
    return 0;
}