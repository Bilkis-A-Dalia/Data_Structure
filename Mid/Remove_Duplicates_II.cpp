#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>my_list;
    while (true)
    {
       int list;
       cin>>list;
       if(list == -1) break;
       my_list.push_back(list);
    }
    my_list.sort();
    my_list.unique();
 
    for (int val:my_list)
    {
        cout<<val<<" ";
    }
    return 0;
}