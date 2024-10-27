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
Node* print_tree()
{
    int val;
    cin>>val;
    Node* root;

    if(val == -1) root = nullptr;
    else root = new Node(val);
    queue<Node*>q;
    q.push(root);
    while (!q.empty())
    {
        Node* f = q.front();
        q.pop();


        int left_val,right_val;
        cin>>left_val>>right_val;
        
        Node* myleft;
        Node* myright;

        if(left_val == -1) myleft = nullptr;
        else myleft = new Node(left_val);
        if(right_val == -1) myright = nullptr;
        else myright = new Node(right_val);

        f->left = myleft;
        f->right = myright;

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);

    }
    return root;
    
}
void level_order(Node* root)
{
    queue<Node*>q;
    q.push(root);
    while (!q.empty())
    {
        Node* f = q.front();
        q.pop();

        cout<<f->val<<" ";

        if (f->left) q.push(f->left);
        if(f->right) q.push(f->right);
        
        
    }
    
}
void print_leaf(Node* root)
{
    if(root == nullptr) return;
    if(root->left == nullptr && root->right == nullptr)
    {
        cout<<root->val<<" ";
    }
    print_leaf(root->left);
    print_leaf(root->right);
}


void print_min_max(Node* root, int& min_val, int& max_val)
{
    if(root == nullptr) return;
    if(root->left == nullptr && root->right == nullptr)
    {
        min_val = min(min_val,root->val);
        max_val = max(max_val,root->val);
    }
    
    print_min_max(root->left,min_val,max_val);
    print_min_max(root->right,min_val,max_val);
    
}
int main()
{
    Node* root = print_tree();
    
    int min_val = INT_MAX;
    int max_val = INT_MIN;
    print_min_max(root,min_val,max_val);
    cout<<max_val<<" "<<min_val<<endl;
    return 0;
}

