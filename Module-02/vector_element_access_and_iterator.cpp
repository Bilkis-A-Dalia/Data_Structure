#include<bits/stdc++.h>
using namespace std;
int main()
{
    //element access
    vector<int> v={1,2 ,3 ,4, 5, 6,7};
    cout<<v[v.size()-1]<<endl;//else
    cout<<v.back()<<endl;
    cout<<v[0]<<endl;//else
    cout<<v.front()<<endl;

    
    //iterator
    for(auto it=v.begin(); it<v.end(); it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}