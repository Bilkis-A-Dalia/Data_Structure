#include<bits/stdc++.h>
using namespace std;
int main()
{
    list <int> myList={10,20,30};
    cout<< myList.max_size();
    cout<<endl<<endl;
    for(int val: myList)
    {
        cout<< val <<endl;
    }
    cout<<endl<<endl;

    myList.resize(5,100);
    for(int val: myList)
    {
        cout<< val <<endl;
    }
    cout<<endl<<endl;
    
    myList.clear();
    for(int val: myList)
    {
        cout<< val <<endl;
    }

    return 0;
}