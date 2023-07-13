#include<bits/stdc++.h>
using namespace std;
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
void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node *newNode=new Node(val);
    while(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
void reverse_list(Node *&head,Node *cur)
{
    if(cur->next==NULL)
    {
        head=cur;
        return;
    }
    reverse_list(head,cur->next);
    cur->next->next=cur;
    cur->next=NULL;
}
int main()
{
    int d=1;
    Node *head=NULL;
    Node *tail=NULL;
    while (true)
    {
        int val;
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head,tail,val);
    }
    Node *newhead=NULL;
    Node *newtail=NULL;
    Node *temp=head;
    while (temp!=NULL)
    {
        insert_at_tail(newhead,newtail,temp->val);
        temp=temp->next;
    }
    reverse_list(head,head);
    temp=head;
    Node *temp2=newhead;
    while (temp!=NULL)
    {
        if(temp->val!=temp2->val)
        {
            d=0;
            break;
        }
        temp=temp->next;
        temp2=temp2->next;
    }
    if(d>0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}