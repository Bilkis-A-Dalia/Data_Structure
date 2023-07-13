#include<bits/stdc++.h>
using namespace std;
class myStack
{
    public:
        vector <int> v;
        void push(int val)
        {
            v.push_back(val);
        }
        void pop()
        {
            v.pop_back();
        }
        int top()
        {
            return v.back();
        }
        int size()
        {
            return v.size();
        }
        bool empty()
        {
            if(v.size()==0) return true;
            else return false;
        }
};
class Node
{
    public:
    int val;
    Node *next;
    //constructor
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
class myQueue
{
    public:
    Node *head=NULL;
    Node *tail=NULL;
    int sz=0;
    void push(int val)
    {
        sz++;
        Node *newNode=new Node(val);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
            return;
        }
        tail->next=newNode;
        tail=tail->next;
    }
    void pop()
    {
        sz--;
        Node *deleteNode=head;
        head= head->next;
        delete deleteNode;
        if(head==NULL)
        {
            tail=NULL;
        }

    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if(sz==0) return true;
        else return false;
    }
};
int main()
{
    myStack s;
    myQueue q;
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        s.push(x);
    }
    for(int i=0; i<m; i++)
    {
        int y;
        cin>>y;
        q.push(y);
    }
    if(s.size()==q.size())
    {
        for(int i=0; i<m; i++)
        {
            if(s.top()!=q.front())
            {
                cout<<"NO"<<endl;
                return 0;
            }
            s.pop();
            q.pop();
        }
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
