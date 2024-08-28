#include <iostream>

class LinkedList {
private:
    // Inner Node class
    class Node {
    public:
        int data;       // Data stored in the node
        Node* next;     // Pointer to the next node in the list

        // Constructor
        Node(int value) : data(value), next(nullptr) {}
    };

    Node* head;         // Pointer to the first node in the list

public:
    // Constructor
    LinkedList() : head(nullptr) {}

    // Destructor to free up memory
    ~LinkedList() {
        Node* current = head;
        Node* nextNode;
        while (current != nullptr) {
            nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }

    // Function to append a new node at the end of the list
    void appendAtEnd(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Function to append a new node at the beginning of the list
    void appendAtBeginning(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    // Function to display the linked list
    void display() const {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " -> ";
            temp = temp->next;
        }
        std::cout << "nullptr" << std::endl;
    }
};

int main() {
    LinkedList list;
    list.appendAtEnd(10);        // Add 10 at the end
    list.appendAtEnd(20);        // Add 20 at the end
    list.appendAtBeginning(5);   // Add 5 at the beginning
    list.appendAtEnd(30);        // Add 30 at the end

    list.display();  // Display the linked list

    return 0;
}
/* 
5 -> 10 -> 20 -> 30 -> nullptr
*/