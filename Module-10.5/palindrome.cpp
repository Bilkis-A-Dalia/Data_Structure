#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node *next;
    Node *prev;
    //constructor
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;

    }
};
 void insert_tail(Node *&head,Node *&tail,int val)
{
    Node *newNode=new Node(val);
    while (head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;

}
void reverse(Node *&head2,Node *cur)
{
    if(cur->next==NULL)
    {
        head2=cur;
        return;
    }
    reverse(head2,cur->next);
    cur->next->next=cur;
    cur->next=NULL;
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
    Node *head2=NULL;
    Node *tail2=NULL;
    Node *temp=head;
    while (temp!=NULL)
    {
        insert_tail(head2,tail2,temp->val);
        temp=temp->next;
    }
    reverse(head2,head2);
    temp=head;
    Node *temp2=head2;
    int flag=false;
    while (temp!=NULL)
    {
        if(temp->val!=temp2->val)
        {
            flag=true;
            break;
        }
        temp=temp->next;
        temp2=temp2->next;
    }
    if(flag==true) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}