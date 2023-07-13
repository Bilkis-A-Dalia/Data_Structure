#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int q;
    cin>>q;
    while (q--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        stack<char> st1;
        for (char c:s)
        {
            if (st1.empty())
            {
                st1.push(c);
            }
            else
            {
                if(st1.top()==c)
                {
                    st1.pop();
                }
                else if ((st1.top() =='R' && c=='B') || (st1.top()=='B' && c=='R'))
                {
                    st1.pop();
                    if (!st1.empty() && st1.top()=='P')
                    {
                        st1.pop();
                    }
                    else st1.push('P');
                }
                else if ((st1.top()=='R' && c=='G') || (st1.top() =='G' && c=='R'))
                {
                    st1.pop();
                    if (!st1.empty() && st1.top()=='Y')
                    {
                        st1.pop();
                    }
                    else st1.push('Y');
                } 
                else if((st1.top()=='G' && c=='B') || (st1.top()=='B' && c=='G'))
                {
                    st1.pop();
                    if (!st1.empty() && st1.top()=='C')
                    {
                        st1.pop();
                    }
                    else st1.push('C');
                } 
                else
                {
                    st1.push(c);
                }
            }
        }
        stack<char> st2;
        while(!st1.empty())
        {
            char a=st1.top();
            st2.push(a);
            st1.pop();
        }
        while(!st2.empty())
        {
            cout<<st2.top();
            st2.pop();
        }
        cout<<endl;
    }
    return 0;
}