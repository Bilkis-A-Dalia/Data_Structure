#include<bits/stdc++.h>
using namespace std;
int main()
{
    //1
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int val: v)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    //2
    int m;
    cin>>m;
    vector<int> v1(m);
    for(int i=0; i<n; i++)
    {
        cin>>v1[i];
    }
    for(int val:v1)
    {
        cout<<val<<" ";
    }
    return 0;
}