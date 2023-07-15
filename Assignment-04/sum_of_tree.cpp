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

int sumTree(Node* root)
{
    long long int sum = 0;
    if(root == NULL) return 0;
    sum = (root->val+sumTree(root->left)+sumTree(root->right));
    return sum;
}
int main()
{
    long long int sum =0;
    Node* root = input_level();
    sum = sumTree(root);
    cout<<sum<<endl;
    return 0;
}