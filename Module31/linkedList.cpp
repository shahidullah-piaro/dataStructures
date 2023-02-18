#include<bits/stdc++.h>

using namespace std;

template <typename T>
class LinkedList {
private:
    struct Node {
        T data;
        Node* next;
    };
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    void push_front(T data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }

    T front() {
        return head->data;
    }
    // other methods
};

int main()
{
    return 0;
}
