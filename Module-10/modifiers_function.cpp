#include<bits/stdc++.h>
using namespace std;
int main()
{
    list <int> myList={10,20,30,40,50,30,30};
    list<int>newList={100,200,300};
    //newList=myList;//shrotcut
   // newList.assign(myList.begin(),myList.end());//long
    
    myList.push_back(100);
    myList.push_front(5);
    myList.pop_back();
    myList.pop_front();
    myList.insert(next(myList.begin(),2),100);//here next is a internal loop
    myList.erase(next(myList.begin(),2));
   // myList.insert(next(myList.begin(),2),{100,200,300});
    myList.insert(next(myList.begin(),3),newList.begin(),newList.end());    
    myList.erase(next(myList.begin(),3),next(myList.begin(),6));
    replace(myList.begin(),myList.end(),30,0);
    for(int val:myList)
    {
        cout<< val <<endl;
    }

    auto it=find(myList.begin(),myList.end(),0);
    if(it==myList.end())
    {
        cout<<"Not found";
    }
    else
    {
        cout<<"Found";
    }
    return 0;
}