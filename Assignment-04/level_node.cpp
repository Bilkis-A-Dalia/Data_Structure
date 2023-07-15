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
Node* input_level()
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
        Node* pa = q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        Node* left;
        Node* right;
        if(l == -1) left=NULL;
        else left = new Node(l);
        if(r == -1) right=NULL;
        else right = new Node(r);

        pa->left = left;
        pa->right = right;
        if(pa->left)
        {
            q.push(pa->left);
        }
        if(pa->right)
        {
            q.push(pa->right);
        }
    }
    return root;
}

int maxHeight(Node* root)
{
    if( root == NULL) return 0;
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    return max(l,r)+1;
}

int main()
{
    Node* root = input_level();
    int d;
    cin>>d;
    if(d >= maxHeight(root)) 
    {
        cout<<"Invalid"<<endl;
    }
    queue<pair<Node*,int>> q;
    q.push({root,0});
    while(!q.empty())
    {
        pair<Node*, int> p = q.front();
        Node* node = p.first;
        int level = p.second;
        q.pop();
        if(level == d) cout<<node->val<<" ";
        if(node->left)
        {
            q.push({node->left,level+1});
        }
        if(node->right)
        {
            q.push({node->right,level+1});
        }
    }
    
    return 0;
}