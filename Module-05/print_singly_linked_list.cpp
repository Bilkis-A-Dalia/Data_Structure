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
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;

//type-1:
    // cout<<head->val<<endl;
    // cout<<head->next->val<<endl;
    // cout<<head->next->next->val;

//type-2:here head will be moveable
// while(head!=NULL)
// {
//     cout<<head->val<<endl;
//     head=head->next;
// }

//type-3 for more work
Node *temp=head;
while(temp!=NULL)
{
    cout<<temp->val<<endl;
    temp=temp->next;
}
    return 0;
}