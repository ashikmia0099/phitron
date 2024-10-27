#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() {
        head = nullptr;
    }

    void insertAtIndex(int index, int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->prev = nullptr;
        newNode->next = nullptr;

        if (head == nullptr && index == 0) 
        {
            head = newNode;
            return;
        }

        if (head == nullptr && index != 0) 
        {
            cout << "Invalid" << endl;
            return;
        }
        if (index == 0) 
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
            return;
        }

        Node* current = head;
        int count = 0;
        while (current->next != nullptr && count < index - 1) 
        {
            current = current->next;
            count++;
        }

        if (current->next == nullptr && count < index - 1) 
        {
            cout << "Invalid" << endl;
            return;
        }
        newNode->next = current->next;
        newNode->prev = current;
        if (current->next != nullptr) 
        {
            current->next->prev = newNode;
        }
        current->next = newNode;
    }

    void printList() 
    {
        Node* current = head;

        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->prev;
        }
    }
};

int main() {
    DoublyLinkedList dll;
    int Q, X, V;
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        cin >> X >> V;
        dll.insertAtIndex(X, V);
        dll.printList();
    }

    return 0;
}
