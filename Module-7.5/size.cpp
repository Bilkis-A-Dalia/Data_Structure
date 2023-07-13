#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode=new Node(val);
    if (head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
    tail->next=NULL;
}
int size_list(Node *head)
{
    int count=0;
    Node *temp=head;
    while (temp != NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}
int main()
{
    Node *head1=NULL;
    Node *tail1=NULL;
    Node *head2=NULL;
    Node *tail2=NULL;
    while (true)
    {
        int val;
        cin>>val;
        if (val==-1)
        break;
        insert_at_tail(head1, tail1, val);
    }
    while (true)
    {
        int val;
        cin>>val;
        if (val==-1)
        break;
        insert_at_tail(head2, tail2, val);
    }
    int sz1=size_list(head1);
    int sz2=size_list(head2);
    if (sz1==sz2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}