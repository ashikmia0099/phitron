#include <iostream>

using namespace std;

class Node {
public:
    int value;
    Node* prev;
    Node* next;

    Node(int value) {
        this->value = value;
        prev = nullptr;
        next = nullptr;
    }
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void insertAtIndex(int index, int value) {
        Node* newNode = new Node(value);

        if (index < 0 || index > getSize()) {
            cout << "Invalid" << endl;
            delete newNode;
            return;
        }

        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else if (index == 0) {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        } else if (index == getSize()) {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        } else {
            Node* current = head;
            int currentIndex = 0;

            while (currentIndex < index) {
                current = current->next;
                currentIndex++;
            }

            newNode->next = current;
            newNode->prev = current->prev;
            current->prev->next = newNode;
            current->prev = newNode;
        }

        printList();
        printReverseList();
    }

    void printList() {
        cout << "L -> ";
        Node* current = head;
        while (current != nullptr) {
            cout << current->value << " ";
            current = current->next;
        }
        cout << endl;
    }

    void printReverseList() {
        cout << "R -> ";
        Node* current = tail;
        while (current != nullptr) {
            cout << current->value << " ";
            current = current->prev;
        }
        cout << endl;
    }

    int getSize() {
        int size = 0;
        Node* current = head;
        while (current != nullptr) {
            size++;
            current = current->next;
        }
        return size;
    }
};

int main() {
    int Q;
    cin >> Q;

    DoublyLinkedList list;

    for (int i = 0; i < Q; i++) {
        int X, V;
        cin >> X >> V;
        list.insertAtIndex(X, V);
    }

    return 0;
}
