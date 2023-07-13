#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> q;
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        if(x==1)
        {
            if(q.empty())
            {
                cout<<"Invalid"<<endl;
            }
            else
            {
                cout<<q.front()<<endl;
                q.pop();
            }
        }
        else if(x==0)
        {
            string s;
            cin>>s;
            q.push(s);
        }
    }
    return 0;
}