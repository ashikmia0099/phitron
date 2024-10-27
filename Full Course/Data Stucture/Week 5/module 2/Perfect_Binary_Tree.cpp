
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
int print_depth(Node* root)
{
    if(root == nullptr) return 0;
    int left_depth = print_depth(root->left);
    int right_depth = print_depth(root->right);

    return(left_depth,right_depth);
    
}
bool isperfect(Node* root,int d,int level = 0)
{
    if(root == nullptr) return true;
    if(root->left == nullptr && root->right ==nullptr)
    {
        return(level = d - 1);
    }
    if(root->left ==nullptr || root->right == nullptr)
    {
        return false;
    }
    return isperfect(root->left,d ,level+1) && isperfect(root->right,d,level+1);
}

int main()
{
    Node* root = input_tree();
    int depth = print_depth(root);
    bool perfect = isperfect(root,depth);
    if(perfect)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    
    return 0;
}


