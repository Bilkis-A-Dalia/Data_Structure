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
void insert_at_head(Node* &head,Node* &tail,int val)
{
    Node *newNode=new Node(val);
    newNode->next=head;
    if(head==NULL)
    {
        tail=newNode;
    }
    head=newNode;   
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int d;
    cin>>d;
    while(d--)
    {
        int pos,val;
        cin>>pos>>val;
        if(pos==0)
        {
            insert_at_head(head,tail,val);
        }
        if(pos==1)
        {
            insert_at_tail(head,tail,val);
        }
        cout<<head->val<<" ";
        cout<<tail->val<<" "<<endl;
    }
    return 0;
}