#include <iostream>

using namespace std;

struct Node {
  int value;
  Node* prev;
  Node* next;
};

Node* head = nullptr;
Node* tail = nullptr;

void insert(int index, int value) {
  if (index < 0) {
    cout << "Invalid" << endl;
    return;
  }

  Node* new_node = new Node();
  new_node->value = value;

  if (head == nullptr) {
    head = new_node;
    tail = new_node;
  } else if (index == 0) {
    new_node->next = head;
    head->prev = new_node;
    head = new_node;
  } else {
    Node* current = head;
    for (int i = 0; i < index - 1; i++) {
      current = current->next;
      if (current == nullptr) {
        cout << "Invalid" << endl;
        return;
      }
    }

    new_node->next = current->next;
    new_node->prev = current;
    if (current->next != nullptr)
      current->next->prev = new_node;
    else
      tail = new_node;
    current->next = new_node;
  }

  // Print list from left to right
  Node* temp = head;
  while (temp != nullptr) {
    cout << temp->value << " ";
    temp = temp->next;
  }
  cout << endl;

  // Print list from right to left
  temp = tail;
  while (temp != nullptr) {
    cout << temp->value << " ";
    temp = temp->prev;
  }
  cout << endl;
}

int main() {
  int q;
  cin >> q;

  for (int i = 0; i < q; i++) {
    int index, value;
    cin >> index >> value;
    insert(index, value);
  }

  return 0;
}
