#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> li;
    stack<int> li2;
    queue<int> li3;
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
        int y;
        y=li.front();
        li.pop();
        li2.push(y);
    }
    while(!li2.empty())
    {
        int z;
        z=li2.top();
        li2.pop();
        li3.push(z);
    }
    while(!li3.empty())
    {
        cout<< li3.front()<<" ";
        li3.pop();
    }

    return 0;
}