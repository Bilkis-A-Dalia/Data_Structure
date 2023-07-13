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
void reverse(Node* n)
{
    if(n==NULL) 
    return;
    cout<<n->val<<" ";
    reverse(n->next);
}
void reverse_print(Node *n)
{
    if(n==NULL) 
    return;
    reverse_print(n->next);
    cout<<n->val<<" ";
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    while(true)
    {
        int val;
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head,tail,val);
    }
    reverse_print(head);
    cout<<endl;
    reverse(head);
    return 0;
}