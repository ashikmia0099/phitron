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
void level_root(Node* root,int level)
{
    if(root == nullptr)
    {
        cout<<"Invalid";
    }
    int current_level =0;
    queue<Node*>q;
    q.push(root);
    while (!q.empty())
    {
        int each_level = q.size();
        if(current_level == level)
        {
            while(each_level--)
            {
                Node* f = q.front();
                q.pop();
                cout<<f->val<<" ";
            }
            return;
        }
        for(int i=0;i<each_level;i++)
        {
            Node* f = q.front();
            q.pop();

            if(f->left) q.push(f->left);
            if(f->right) q.push(f->right);
        }
        current_level++;
    }
    cout<<"Invalid"<<endl;
}
int main()
{
    Node* root = print_tree();
    int levelx;
    cin>>levelx;
    level_root(root,levelx);
        
    return 0;
}

