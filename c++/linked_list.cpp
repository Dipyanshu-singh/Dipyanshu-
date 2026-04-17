//in collections of nodes: each node has:data and(&) link(address);  #link got: Data & link and so on until there is null at link part;
//type: single,double,circular linked list
// it's linear data structure, it's best thing is: insertion and deletion;
//#insertion : adding anew node at the specified positionin th4e list. 
//types: 1;front of linked list, before given possii, after given possii, at posii, at the end of linked list
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

// 🔸 Insert at Beginning
void insertAtBeginning(Node* &head, int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

// 🔸 Insert at End
void insertAtEnd(Node* &head, int value) {
    Node* newNode = new Node(value);

    if(head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// 🔸 Insert at Position
void insertAtPosition(Node* &head, int value, int pos) {
    if(pos == 1) {
        insertAtBeginning(head, value);
        return;
    }

    Node* newNode = new Node(value);
    Node* temp = head;

    for(int i = 1; i < pos-1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if(temp == NULL) return;

    newNode->next = temp->next;
    temp->next = newNode;
}

// 🔸 Delete at Beginning
void deleteAtBeginning(Node* &head) {
    if(head == NULL) return;

    Node* temp = head;
    head = head->next;
    delete temp;
}

// 🔸 Delete at End
void deleteAtEnd(Node* &head) {
    if(head == NULL) return;

    if(head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;
    while(temp->next->next != NULL) {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = NULL;
}

// 🔸 Delete at Position
void deleteAtPosition(Node* &head, int pos) {
    if(head == NULL) return;

    if(pos == 1) {
        deleteAtBeginning(head);
        return;
    }

    Node* temp = head;
    for(int i = 1; i < pos-1 && temp->next != NULL; i++) {
        temp = temp->next;
    }

    if(temp->next == NULL) return;

    Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    delete nodeToDelete;
}

// 🔸 Print List
void printList(Node* head) {
    while(head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

// 🔹 MAIN FUNCTION
int main() {
    Node* head = NULL;
    int n, value, pos;

    cout << "Enter number of nodes: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Enter value: ";
        cin >> value;
        insertAtEnd(head, value);
    }

    cout << "\nInitial List: ";
    printList(head);

    // Insertion
    cout << "\nEnter value to insert at beginning: ";
    cin >> value;
    insertAtBeginning(head, value);

    cout << "After insert at beginning: ";
    printList(head);

    cout << "Enter value and position to insert: ";
    cin >> value >> pos;
    insertAtPosition(head, value, pos);

    cout << "After insert at position: ";
    printList(head);

    // Deletion
    deleteAtBeginning(head);
    cout << "\nAfter delete at beginning: ";
    printList(head);

    deleteAtEnd(head);
    cout << "After delete at end: ";
    printList(head);

    cout << "Enter position to delete: ";
    cin >> pos;
    deleteAtPosition(head, pos);

    cout << "After delete at position: ";
    printList(head);

    return 0;
}