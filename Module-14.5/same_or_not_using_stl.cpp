#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack <int> st;
    queue <int> st2;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    int m;
    cin>>m;
    for(int i=0; i<m; i++)
    {
        int y;
        cin>>y;
        st2.push(y);
    }
    if(st.size()==st2.size())
    {
        for(int i=0; i<m; i++)
        {
            if(st.top()!=st2.front())
            {
                cout<<"no"<<endl;
                return 0;
            }
            st.pop();
            st2.pop();
        }
        cout<<"yes"<<endl;
    }
    else 
    {
        cout<<"no"<<endl;
    }
    return 0;
}