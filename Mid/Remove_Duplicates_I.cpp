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
void sorting(Node *&head)
{
        for (Node *i=head; i->next!=NULL; i=i->next)
    {
        for (Node *j=i->next; j!=NULL; j=j->next)
        {
            if(i->val>j->val)
            {
                swap(i->val,j->val);
            }
        }
       
    }
}
void duplicate(Node *&head)
{
    if(head == NULL) return;
    Node *temp =head;
    while (temp->next!=NULL)
    {
        if (temp->val==temp->next->val)
        {
            temp->next=temp->next->next;
        }
        if (temp->next==NULL) break;
        else if(temp->val!=temp->next->val)
        {
            temp=temp->next;
        }
    }
}
void print_linked_list(Node *head)
{
    Node *temp =head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
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
    sorting(head);
    duplicate(head);
    print_linked_list(head);
}