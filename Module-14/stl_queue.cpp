#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> li;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        li.push(x);
    }
    while(!li.empty())
    {
        cout<<li.front()<<endl;
        li.pop();
    }

    if(!li.empty())
    {
        cout<< li.front()<<endl;
    }
    return 0;
}