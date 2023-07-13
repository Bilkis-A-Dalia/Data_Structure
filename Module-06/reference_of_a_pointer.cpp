#include<bits/stdc++.h>
using namespace std;
void fun(int *&p)
{
    //*p =(10);
    p=NULL;//to get 0
    cout<<&p<<endl;
}
int main()
{
    int val=10;
    int *ptr = &val;
    fun(ptr);
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    return 0;
}