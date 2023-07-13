#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    cout<<v.max_size()<<endl<<endl;

    cout<<v.capacity()<<endl;
    v.push_back(10);
    cout<<v.capacity()<<endl;
    v.push_back(20);
    cout<<v.capacity()<<endl;
    v.push_back(30);
    cout<<v.capacity()<<endl<<endl;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    ////v.clear();//value will be clear
    v.resize(2);
    v.resize(7,100);
    cout<<v.size()<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    // //but not memory(prove):
    // cout<<v[0]<<" "<<v[1]<<endl<<endl;


    return 0;
}