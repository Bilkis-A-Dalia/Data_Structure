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
int max_element(Node *head)
{
    int max = INT_MIN;
    Node *temp=head;
    while (temp!=NULL)
    {
        if (temp->val>max)
        {
            max = temp->val;
            temp = temp->next;
        }
    }
    return max;
}
void sort_list(Node *&head)
{
    for (Node *i=head; i->next!=NULL; i=i->next)
    {
        for (Node *j=i->next; j!=NULL; j=j->next)
        {
            if (i->val>j->val)
                {
                    swap(i->val,j->val);
                }
        }
    }
}
void print_list(Node *head)
{
    Node *temp=head;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int val;
        cin>>val;
        if (val==-1)
        break;
        insert_tail(head, tail, val);
    }
    sort_list(head);
    print_list(head);
    return 0;
}