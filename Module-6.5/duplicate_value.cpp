#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node *next;
        //contructor
        Node(int val)
        {
            this->val=val;
            this->next=NULL;
        }
};
void insert_at_tail(Node *&head, Node *&tail,int val)
{
    Node *newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
    tail->next=NULL;
}
int duplicate(Node *head)
{
    int c=1;
    for (Node *i=head; i->next!=NULL; i=i->next)
    {
        for (Node *j=i->next; j!=NULL; j=j->next)
        {
            if(i->val == j->val)
            {
                c=0;
                return c;
            }
        }
        
    }
    return c;
    
}
int main()
{
    Node *head=NULL;
    Node *tail=NULL;
    while (true)
    {
        int val;
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head,tail,val);
    }
    int a=duplicate(head);
    if(a==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}