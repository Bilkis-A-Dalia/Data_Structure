#include<bits/stdc++.h>
using namespace std;
int main()
{
    //replace
    vector<int> v={1,2,3,4,5,6};
    replace(v.begin(),v.end(),2,100);
    for(int x: v)
    {
        cout<<x<<" ";
    }
    cout<<endl<<endl;
    //find
    vector<int> a={1,5,3,4,6,2,3,9};
    auto it = find(v.begin(),v.end(),3);
    cout<<*it<<endl;
    if(it==a.end()) cout<<"Not found";
    else cout<<"Found";
    return 0;
}