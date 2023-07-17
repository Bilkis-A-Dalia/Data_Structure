#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* left;
        Node* right;
    //constructor
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* input_tree()
{
    int val;
    cin>>val;
    Node* root;
    if(val == -1) root=NULL;
    else root = new Node(val);
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty())
    {
        Node* p=q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node* left;
        Node* right;
        if(l == -1) left=NULL;
        else left = new Node(l);
        if(r == -1) right=NULL;
        else right = new Node(r);
        //connect
        p->left=left;
        p->right=right;
        
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}

bool search(Node* root, int x)
{
    if(root == NULL) return false;
    if(root->val == x) return true;
    if(x<root->val) 
    {
        return search(root->left,x);
    }
    else
    {
        return search(root->right,x);
    }
}
int main()
{
    Node* root = input_tree();
    if(search(root,7))
    {
        cout<<"Found"<<endl;
    }
    else cout<<"Not Found"<<endl;
    return 0;
}