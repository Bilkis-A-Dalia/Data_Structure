#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<string>my_list;
    while (true)
    {
       string site;
       cin>>site; 
       if(site=="end") break; 
       my_list.push_back(site);
    }
    int q;
    cin>>q; 
    auto current=my_list.begin();
    while(q--)
    {
        string command; 
        cin>>command;
        if(command=="visit")
        {
            string add;
            cin>>add;
            if(find(my_list.begin(),my_list.end(),add)!=my_list.end())
            {
                current=find(my_list.begin(),my_list.end(),add);
                cout<<add<<endl;
            }
            else cout<<"Not Available"<<endl;
        }
        else if(command=="next")
        {
            if(next(current)!=my_list.end())
            {
                current=next(current);
                cout<<*current<<endl;
            }
            else cout<<"Not Available"<<endl;
        }
        else if(command=="prev")
        {
            if(current!=my_list.begin())
            {
                current=next(current,-1);
                cout<<*current<<endl;
            }
            else cout<<"Not Available"<<endl;;
        }
    }
    return 0;
}