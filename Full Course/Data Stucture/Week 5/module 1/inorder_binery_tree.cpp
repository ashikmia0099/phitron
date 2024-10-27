#include<bits/stdc++.h>
using namespace std;
class bNode
{
    public:
        int val;
        bNode* left;
        bNode* right;

    bNode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
    
};
void inorder(bNode* root)
{
    if(root == nullptr)
    {
        return;
    }
    
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
    
}
int main()
{
    bNode* root = new bNode(10);
    bNode* a = new bNode(20);
    bNode* b = new bNode(30);
    bNode* c = new bNode(40);
    bNode* d = new bNode(50);
    bNode* e = new bNode(60);
    bNode* f = new bNode(70);
    bNode* g = new bNode(80);
    bNode* h = new bNode(90);
    bNode* i = new bNode(100);

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    c->right = e;
    h->right = i;
    b->right = d;
    d->left = f;
    d->right = g;

    inorder(root);
    
    return 0;
}
