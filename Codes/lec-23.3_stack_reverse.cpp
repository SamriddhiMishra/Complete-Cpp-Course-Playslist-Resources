//https://www.geeksforgeeks.org/reverse-a-stack-using-recursion/
//https://www.geeksforgeeks.org/reverse-stack-without-using-extra-space/

#include<bits/stdc++.h>
using namespace std;
void print(stack<int> st)
{
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    cout<<endl;
}

void insertAtBottom(stack<int> &st, int v)
{   if(st.empty())
        {st.push(v); return;}
    int n = st.top();
    st.pop();
    insertAtBottom(st, v);
    st.push(n);
}

void reverse_stack(stack<int> &st)
{
    if(st.empty())
        return;
    int n = st.top();
    st.pop();
    reverse_stack(st);
    insertAtBottom(st, n);
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    print(st);
    
    reverse_stack(st);
    
    print(st);
    return 0;
}