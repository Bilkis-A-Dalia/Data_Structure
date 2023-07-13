#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack <int> s;
    queue <int> q;
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        s.push(x);
    }
    for(int i=0; i<m; i++)
    {
        int y;
        cin>>y;
        q.push(y);
    }
    if(s.size()==q.size())
    {
        for(int i=0; i<m; i++)
        {
            if(s.top()!=q.front())
            {
                cout<<"NO"<<endl;
                return 0;
            }
            s.pop();
            q.pop();
        }
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }
    return 0;
}