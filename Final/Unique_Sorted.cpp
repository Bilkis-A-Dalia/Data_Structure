#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        set<int> s;
        int n;
        cin>>n;
        while(n--)
        {
            int x;
            cin>>x;
            s.insert(x);
        }
        vector<int> v;
        for (auto it=s.begin(); it!=s.end(); it++)
        {
            v.push_back(*it);
        }
        reverse(v.begin(), v.end());
        for (auto val :v)
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}