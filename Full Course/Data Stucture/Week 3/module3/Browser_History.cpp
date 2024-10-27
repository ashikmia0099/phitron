#include <iostream>
#include <string>

using namespace std;

struct Node {
    string data;
    Node* prev;
    Node* next;
};

class DoublyLinkedList {
public:
    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
        current = nullptr;
    }

    void add_node(string data) {
        Node* new_node = new Node();
        new_node->data = data;
        new_node->prev = nullptr;
        new_node->next = nullptr;

        if (head == nullptr) {
            head = new_node;
            tail = new_node;
            current = new_node;
        } else {
            tail->next = new_node;
            new_node->prev = tail;
            tail = new_node;
        }
    }

    void visit(string address) {
        Node* current_node = head;
        while (current_node) {
            if (current_node->data == address) {
                cout << current_node->data << endl;
                current = current_node; 
                break;
            }
            current_node = current_node->next;
        }
        if (current_node == nullptr) {
            cout << "Not Available" << endl;
            current = nullptr;
        }
    }

    void prev() {
        if (current == nullptr || current->prev == nullptr) {
            cout << "Not Available" << endl;
        } else {
            current = current->prev;
            cout << current->data << endl;
        }
    }

    void next() {
        if (current == nullptr || current->next == nullptr) {
            cout << "Not Available" << endl;
        } else {
            current = current->next;
            cout << current->data << endl;
        }
    }

private:
    Node* head;
    Node* tail;
    Node* current;
};

int main() {
    string command;
    DoublyLinkedList dll;

    while (cin >> command) {
        if (command == "end")
            break;

        if (command == "visit") {
            string address;
            cin >> address;
            dll.visit(address);
        } else if (command == "prev") {
            dll.prev();
        } else if (command == "next") {
            dll.next();
        } else {
            cout << "Invalid command" << endl;
        }
    }

    return 0;
}
