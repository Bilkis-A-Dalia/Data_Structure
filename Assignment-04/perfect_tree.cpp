#include <bits/stdc++.h>
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
int nodeCount(Node* root)
{
    if( root == NULL) return 0;
    int l = nodeCount(root->left);
    int r = nodeCount(root->right);
    return l+r+1; 
}

int maxHeight(Node* root)
{
    if( root == NULL) return 0;
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    return max(l,r)+1;
}

bool perfectTree(Node* root)
{
    int h = maxHeight(root)-1;
    int d = nodeCount(root);
    bool dali = pow(2,h+1)-1 == d;
    return dali;
}

int main()
{
    Node* root = input_level();
    if(perfectTree(root)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}