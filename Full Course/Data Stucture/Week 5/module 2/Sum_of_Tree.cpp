
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
    if(val == -1) root  = nullptr  ;
    else root = new Node(val);
    queue<Node*>q;
    q.push(root);
    while (!q.empty())
    {
        Node* p = q.front();
        q.pop();


        int left_val,right_val;
        cin>>left_val>>right_val;
        Node* myleft;
        Node* myright;
        if(left_val == -1) myleft = nullptr;
        else myleft = new Node(left_val);
        if (right_val == -1) myright = NULL;
        else myright = new Node(right_val);


        p->left = myleft;
        p->right = myright;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);


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
int sum_binary_tree(Node* root)
{
    if(root == nullptr) return 0;
    return root->val + sum_binary_tree(root->left) + sum_binary_tree(root->right);
}

int main()
{
    Node* root = input_tree();
    
    int sum = sum_binary_tree(root);
    cout<<sum<<endl;
    return 0;
}