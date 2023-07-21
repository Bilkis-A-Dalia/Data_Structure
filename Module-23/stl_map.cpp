#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> mp;
    // mp.insert({"Bilkis",22});
    // mp.insert({"Akter",12});
    // mp.insert({"Dalia",06});

    mp["Bilkis"] = 22;
    mp["Akter"] = 21;
    mp["Dalia"] = 06;//O(logN)
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<" "<<it->second <<endl;
    }

    cout<<mp["Dalia"]<<endl;
    //ache kina check:
    if(mp.count("Dora"))
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}