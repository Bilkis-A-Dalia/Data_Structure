#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a={10,20,30,40};
    vector<int> v={1,2,3};
    v=a;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl<<endl;
    vector<int> x={10, 20 ,30};
    x.pop_back();
    for(int i=0; i<x.size(); i++)
    {
        cout<<x[i]<<" ";
    }
    return 0;
}