//https://www.geeksforgeeks.org/reverse-words-in-a-given-string/
//https://www.geeksforgeeks.org/reverse-the-sentence-using-stack/
//https://www.geeksforgeeks.org/stack-set-3-reverse-string-using-stack/

#include<bits/stdc++.h>
using namespace std;
void reverse_sent(string s)
{
    stack<string> st; string word ="";
    int n = s.length();
    for(int i=0;i<n;i++)
    {
        word="";
        while(s[i] != ' ' && i< s.length())
            word +=s[i++];
        st.push(word);
    }
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
}//T(n)

int main()
{
    string s = "Hey,How are you?";
    reverse_sent(s);
    return 0;
}