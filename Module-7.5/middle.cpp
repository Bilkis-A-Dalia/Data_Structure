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
int linked_list(Node *&head)
{
    int d=0;
    Node *temp=head;
    while (temp!=NULL)
    {
        d++;
        temp=temp->next;
    }
    return d;  
}
int main()
{
    Node *head=NULL;
    Node *tail=NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head,tail,val);
    }
    for (Node *i=head;i->next!=NULL;i=i->next)
    {
        for (Node *j=i->next;j!=NULL;j=j->next)
        {
            if(i->val<j->val)
            {
                swap(i->val,j->val);
            }
        }  
    }
    int s=linked_list(head);
    int mid=(s+1)/2;
    Node *temp=head;
    for (int i=0;i<mid-1;i++)
    {
        temp=temp->next;
    }
    if(s%2==0)
    {
        cout<<temp->val<<" "<<temp->next->val<<endl;
    }
    else cout<<temp->val<<endl;
    return 0;
}
