#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int m;
    cin>>m;
    vector<int> v2(m);
    for(int j=0; j<m; j++)
    {
        cin>>v2[j];
    }
    int a;
    cin>>a;
    v.insert(v.begin()+a,v2.begin(),v2.end());
    for(int x: v)
    {
        cout<<x<<" ";
    }
    return 0;
}
