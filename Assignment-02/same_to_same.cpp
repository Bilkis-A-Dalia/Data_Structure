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
void insert_at_tail(Node* &head,int val)
{
    Node *newNode = new Node(val);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;  
}
bool same(Node* head1, Node* head2)
{
    while(head1!=NULL && head2!=NULL)
    {
        if(head1->val!=head2->val)
        {
            return false;
        }
        head1=head1->next;
        head2=head2->next;
    }
    if(head1==NULL && head2==NULL)
    {
        return true;
    }
    return false;
}
int main()
{
    Node* head1=NULL;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head1,val);
    }
    Node* head2=NULL;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head2,val);
    }
    if (same(head1,head2))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}