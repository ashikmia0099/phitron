#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* left;
        Node* right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
    
};
Node* input_tree()
{
    int val;
    cin>>val;
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);
    queue<Node*> q;
    q.push(root);
    while (!q.empty())
    {
        // task 1
        Node*  f = q.front();
        q.pop();
        // task 2
        int l, r;
        cin>>l>>r;
        Node* myleft;
        Node* myright;
        if(l==-1) myleft = NULL;
        else myleft = new Node(l);

        if(r == -1) myright = NULL;
        else myright = new Node(r);

        f->left = myleft;
        f->right = myright;

        // task 3
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);

    }
    return root;
    


}
int count_leaf(Node* root)
{
    if(root == nullptr) return 0;
    if(root->left == nullptr && root->right == nullptr)
    {
        return 1;
    }
    else
    {
        int l = count_leaf(root->left);
        int r = count_leaf(root->right);
        return l+r;
    }
    
}
int main()
{
    Node* root = input_tree();
    cout<<count_leaf(root)<<endl;
    
    
    
    return 0;
}
