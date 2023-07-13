#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={10,20,30};
    vector<int> v2={100,200,300};
    //v.insert(v.begin()+2,10);
    v.insert(v.begin()+2,v2.begin(),v2.end());
    for(int x: v)
    {
        cout<<x<<endl;
    }
    return 0;
}