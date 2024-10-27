#include <iostream>
#include <queue>

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int val) : val(val), left(nullptr), right(nullptr) {}
};

Node* print_tree() {
    int val;
    std::cin >> val;
    Node* root;

    if (val == -1)
        root = nullptr;
    else
        root = new Node(val);

    std::queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* f = q.front();
        q.pop();

        int left_val, right_val;
        std::cin >> left_val >> right_val;

        Node* myleft;
        Node* myright;

        if (left_val == -1)
            myleft = nullptr;
        else
            myleft = new Node(left_val);

        if (right_val == -1)
            myright = nullptr;
        else
            myright = new Node(right_val);

        f->left = myleft;
        f->right = myright;

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }

    return root;
}

void level_root(Node* root, int level) {
    if (root == nullptr)
        return;

    if (level == 0) {
        std::cout << root->val << " ";
        return;
    }

    std::queue<Node*> q;
    q.push(root);
    int currentLevel = 0;

    while (!q.empty()) {
        int nodesInCurrentLevel = q.size();

        while (nodesInCurrentLevel > 0) {
            Node* f = q.front();
            q.pop();

            if (f->left)
                q.push(f->left);
            if (f->right)
                q.push(f->right);

            nodesInCurrentLevel--;
        }

        currentLevel++;

        if (currentLevel == level) {
            while (!q.empty()) {
                Node* f = q.front();
                q.pop();
                std::cout << f->val << " ";
            }
            return;
        }
    }
}

int main() {
    Node* root = print_tree();

    int X;
    cin>>X;
    level_root(root,X);

   return 0;
}
