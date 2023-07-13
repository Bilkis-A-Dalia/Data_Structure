#include<bits/stdc++.h>
using namespace std;
int main()
{
    //type-1
    vector<int>v;
    cout<<v.size()<<endl;
     //type-2-(size)
    vector<int>v1(5);
    cout<<v1.size()<<endl; 
    //type-3(size,value)
    vector<int>v2(5,10);
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
    
    //type-4(copy)
    vector<int>v3(v2);
    cout<<v3.size()<<endl;


    int a[6]={1,2,3,4,5,6};
    vector<int> v4(a,a+6);
    for(int i=0; i<v4.size(); i++)
    {
        cout<<v4[i]<<" ";
    }
    cout<<endl;
    return 0;
}