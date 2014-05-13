#include <iostream>
#include <cassert>
using namespace std;

struct Node {
    int val;
    Node* next;
};

void create(Node* head, int howMany) {
    assert(head);
    Node* p1 = head;
    for (int i = 1; i < howMany; ++i) {
        Node* p2 = new Node;
        p2->val = i;
        p1->next = p2;
        p1 = p2;
    }
    p1->next = 0;
}

void display(Node* node) {
    assert(node);
    while (node) {
        cout << node->val << " (at " << node << ")\n";
        node = node->next;
    }
}

void cleanup(Node* node) {
    if (node) {
        cleanup(node->next);
        cout << "deleting Node at " << node << endl;
        delete node;
    }
}

int main() {
    Node* head = new Node;
    head->val = 0;
    create(head, 10);
    display(head);
    cleanup(head);
}
