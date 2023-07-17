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
void level_order(Node* root)
{
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        //procedure-1
        Node* f=q.front();
        q.pop();

        //procedure-2
        cout<<f->val<<" ";

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);

        
    }
}

NOde* convert(int a[], int n, int l, int r)
{
    if(l>r) return NULL;
    int mid = (l+r)/2;
    Node* root = new Node(a[mid]);
    Node* leftRoot = convert(a,n,l,mid-1);
    Node* rightRoot = convert(a,n,mid+1,r);
    root->left = leftRoot;
    root->right = rightRoot;
    return root;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];
    Mode* root = convert(a,n,0,n-1);
    level_order(root)
    return 0;
}