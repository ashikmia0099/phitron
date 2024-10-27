// #include<bits/stdc++.h>
// using namespace std;
// class Node
// {
//     public:
//         int val;
//         Node* next;
//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// void print_linked_list(Node *head)
// {
//     Node *tmp = head;
//     while (tmp != NULL)
//     {
//         cout<<tmp->val<<" ";
//         tmp = tmp->next;
//     }
//     cout<<endl;
// }

// void reverse_list(Node* head) 
// {
//     stack<int> val;
//     Node* temp = head;
    
//     while(temp != NULL)
//     {
//         val.push(temp->val);
//     }
    
//     for (; !val.empty(); val.pop()) 
//     {
//         cout << val.top() << " ";
//     }
// }

// int main()
// {
//     int val;
//     Node *head = NULL;
//     Node *tail = NULL;
//     while(true)
//     {
//         cin >> val;
//         if (val == -1)
//         break;
//         Node* newnode = new Node(val);
//         if(head == NULL)
//         {
//             head = newnode;
//             tail = newnode;
//         }
//         else
//         {
//             tail->next = newnode;
//             tail = newnode;
//         }
        
//     }
//     reverse_list(head);
//     cout<<endl;
//     print_linked_list(head);
//     Node* newnode = head;
//     while (newnode) 
//     {
//         Node* temp = newnode;
//         newnode = newnode->next;
//         delete temp;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void recurshon_1(Node *head)
{
    if(head == NULL) return;

    
    cout<<head->val<<" ";
    recurshon_list_1(head->next);
}
void recurshon_list(Node *head)
{
    if(head == NULL) return;

    
    cout<<head->val<<" ";
    recurshon_list(head->next);
}
int main() 
{
    Node* head = NULL;
    Node* prev = NULL;
    int val;
    while (cin >> val && val != -1) {
        Node* node = new Node(val);

        if (prev) 
        {
            prev->next = node;
        } else 
        {
            head = node;
        }

        prev = node;
    }
    recurshon_1(head);
    cout<<endl;
    recurshon_list(head);
    Node* newnode = head;
    while (newnode) {
        Node* temp = newnode;
        newnode = newnode->next;
        delete temp;
    }

    return 0;
}

