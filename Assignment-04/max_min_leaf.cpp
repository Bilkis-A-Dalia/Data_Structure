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

void maxFind(Node* root, int &max)
{
    if (root == NULL) return;
    if (root->left == NULL && root->right == NULL)
    {
        if (root->val > max)
            {
                max = root->val;
            }
    }
    maxFind(root->left,max);
    maxFind(root->right,max);
}

void minFind(Node* root, int &min)
{
    if (root == NULL) return;
    if (root->left == NULL && root->right == NULL)
    {
        if (root->val < min)
            {
                min = root->val;
            }
    }
    minFind(root->left,min);
    minFind(root->right,min);
}

int main()
{
    Node* root = input_level();
    int max = INT_MIN;
    int min = INT_MAX;
    maxFind(root,max);
    minFind(root,min);
    cout<<max<<" "<<min<<endl;
    return 0;
}