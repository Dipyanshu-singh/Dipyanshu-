#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* prev;
    Node* next;
    Node(int value){
        data=value;
        prev=NULL;
        next=NULL;
    }
};
void insertatend(Node* &head, int value) {
    Node* newNode = new Node(value);

    if(head == NULL)
    {
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}

void deleteatfront(Node* &Head){
    if(Head==NULL){
        return;
    }
    Node* temp=Head;
    if(Head != NULL){
        Head->prev=nullptr;
    }
    delete temp;

}
void printList(Node* head) {
    while(head != NULL) {
        cout << head->data << " <-> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    // Node* head = NULL;
    // int n, value, pos;
    // cout << "Enter number of nodes: ";
    // cin >> n;
    // for(int i = 0; i < n; i++) {
    //     cout << "Enter value: ";
    //     cin >> value;
    //     insertatend(head,value);
    // }
    int n;cin>>n;
    int x;cin>>x;
    Node *head;
    head=new Node(x);
    Node *temp=head;
    for(int i=1;i<n;i++)
    {
        cin>>x;
        temp->next=new Node(x);
        temp=temp->next;
    }
     deleteatfront(head);
     cout << "\nInitial List: ";
    printList(head);




}