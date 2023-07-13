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
    while (head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
void max_min(Node* head)
{
    int max=INT_MIN;
    int min=INT_MAX;
    Node *temp=head;
    while (temp!=NULL)
    {
        if(temp->val>max)
        {
        max=temp->val;
        }
        if(temp->val<min)
        {
            min=temp->val;
        }
        temp=temp->next;
    }
    cout<<max<<" "<<min<<endl;
   
}
int main()
{
    Node *head=NULL;
    Node *tail=NULL;
    while (true)
    {
        int val;
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head,tail,val);
    }
    max_min(head);
    return 0;
}