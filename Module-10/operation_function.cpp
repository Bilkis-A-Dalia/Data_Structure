#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList={10,10,60,40,20,50,10,30};
    //myList.remove(60);
    myList.sort();
    myList.sort(greater<int>());
    myList.unique();//same value will be remove
    myList.reverse();
    for(int val: myList)
    {
        cout<<val<<endl;
    }
    return 0;
}