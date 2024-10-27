// #include<bits/stdc++.h>
// using namespace std;
// class Node
// {
//     public:
//         int val;
//         Node* next;
//         Node* previous;
//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//         this->previous = NULL;
//     }
// };
// void insert_at_index(Node* &head,Node*tail,int val,int index)
// {
//     Node* newnode = new Node(val);
//     Node* tmp = head;
//     if(newnode == NULL && index ==0)
//     {
//         head = newnode;
//         return;
//     }
//     if(tmp == NULL)
//     {
//         cout<<"Invallid"<<endl;
//     }
//     if(index ==0)
//     {

//     }
// }
// void print_list(Node *head)
// {
//     Node* tmp = head;
//     while (tmp != NULL)
//     {
//         cout<<tmp->val<<endl;
//         tmp = tmp->next;
//     }
    
// }
// int main()
// {
//     Node* head = NULL;
//     Node* tail = NULL;
//     int n,index,val;
//     cin>>n;
//     for (int i=0;i<n;i++)
//     {
//         cin>>index>>val;
//     }
//     insert_at_tail(head,tail,val);
//     print_list(head);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// class Node
// {
//     public:
//         int val;
//         Node* next;
//         Node* prev;
//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };
    
// void insert_At_Index(Node*& head, int index, int value) 
// {
//     Node* newNode = new Node(value);

//      if (head == NULL) 
//     {
//         head = newNode;
        
//         return;
//     }

//     if (head == NULL) 
//     {
//         cout << "Invalid" << endl;
//         return;
//     }

//     if (index == 0) {
//         newNode->next = head;
//         (head)->prev = newNode;
//         head = newNode;
//         return;
//     }

//     Node* tmp = head;
//     int count = 0;
//     while (count < index - 1) 
//     {
//         if (cu->next == NULL) 
//         {
//             cout << "Invalid" << endl;
//             return;
//         }
//         current = current->next;
//         count++;
//     }

//     newNode->prev = current;
//     newNode->next = current->next;

//     if (current->next != NULL)
//         current->next->prev = newNode;

//     current->next = newNode;
// }

// void printListLeftToRight(Node* head) 
// {
//     Node* current = head;
//     while (current != NULL) {
//         cout << current->val << " ";
//         current = current->next;
//     }
//     cout << endl;
// }
// void printListRightToLeft(Node* head) 
// {
//     Node* current = head;
//     while (current->next != NULL) 
//     {
//         current = current->next;
//     }
//     while (current != NULL) 
//     {
//         cout << current->val << " ";
//         current = current->prev;
//     }
//     cout << endl;
// }

// int main() {
//     Node* head = NULL;

//     int Q;
//     cin >> Q;

//     for (int i = 0; i < Q; i++) 
//     {
//         int X, V;
//         cin >> X >> V;
//         insert_At_Index(head, X, V);
//         printListLeftToRight(head);
//         printListRightToLeft(head);
//     }

//     return 0;
// }
