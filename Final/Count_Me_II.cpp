#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        map<int,int> mp;
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        int max=INT_MIN;
        int count=v[0];
        for (auto d:v)
        {
            mp[d]++;
        }
        for (auto it=mp.begin(); it!=mp.end(); it++)
        {
            if (it->second>max|| (it->second==max && it->first>count))
            {
                max=it->second;
                count=it->first;
            }
        }
        cout<<count<<" "<<max<< endl;
    }
    return 0;
}