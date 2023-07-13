#include<bits/stdc++.h>
using namespace std;   
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        stack<char> st;
        string s;
        cin>>s;
        for(char c:s)
        {
            if(!st.empty() && st.top()=='A' && c=='B')
            {
                st.pop();
            }
            else if(!st.empty() && st.top()=='B' && c=='A')
            {
                st.pop();
            }
            else st.push(c);
        }
        if(!st.empty())
        {
            cout<<"NO"<<endl;;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}