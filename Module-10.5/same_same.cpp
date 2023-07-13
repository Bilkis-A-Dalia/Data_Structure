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
    if(tail==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=tail->next;
}
int size(Node *head)
{
    Node *temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (true)
    {
        int val;
        cin>>val;
        if (val==-1)
        break;
        insert_tail(head1, tail1, val);
    }
    while (true)
    {
        int val;
        cin>>val;
        if (val==-1)
        break;
        insert_tail(head2, tail2, val);
    }
    int sz1=size(head1);
    int sz2=size(head2);
    if (sz1==sz2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<< endl;
    return 0;
}