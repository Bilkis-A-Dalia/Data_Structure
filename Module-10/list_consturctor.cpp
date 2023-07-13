#include<bits/stdc++.h>
using namespace std;
int main()
{
    list <int> myList(10,5);
    //iterator
    //for pointer 
    for(auto it=myList.begin(); it!=myList.end(); it++)
    {
        cout<< *it <<" ";
    }
cout<<endl; 

    //list to list copy
    list <int> myList1 = {1,2,3,4,5};
    list <int> myList2(myList1);
    for(int val:myList2)//only for val
    {
        cout<< val <<" ";
    }
cout<<endl;

    //array to list
    int a[5]={10,20,30,40,50};
    list <int> myList3(a,a+5);
    for(int val:myList3)
    {
        cout<< val <<" ";
    }
cout<<endl; 

    //vector to list copy
    vector<int> v={100,200,300};
    list <int> mylist4(v.begin(),v.end());
    for(int val:mylist4)
    {
        cout<< val <<" ";
    }
    return 0;
}