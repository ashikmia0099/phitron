#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, int v) {
    Node *newNode = new Node(v);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    cout << "Inserted at tail" << endl << endl;
}

void print_link_list(Node *head) {
    Node *tmp = head;
    if (tmp == NULL) {
        cout << "Your linked list is empty." << endl << endl;
        return;
    }
    
    cout << endl << "Your linked list: ";
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl << endl;
}

void insert_at_position(Node *&head, int pos, int v) {
    Node *newnode = new Node(v);
    
    if (pos <= 0) {
        newnode->next = head;
        head = newnode;
        return;
    }
    
    Node *tmp = head;
    for (int i = 1; i < pos && tmp != NULL; i++) {
        tmp = tmp->next;
    }
    
    if (tmp == NULL) {
        cout << "Invalid position. Insertion failed." << endl;
        return;
    }
    
    newnode->next = tmp->next;
    tmp->next = newnode;
    cout << "Inserted at position " << pos << endl;
}

int main() {
    int val;
    Node *head = NULL;

    while (true) {
        cin >> val;
        if (val == -1) {
            break;
        }
        insert_at_tail(head, val);
    }
    print_link_list(head);

    int pos, value;
    cout << "Enter the position and value for insertion: ";
    cin >> pos >> value;
    insert_at_position(head, pos, value);

    print_link_list(head);

    return 0;
}
