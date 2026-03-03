#include <iostream>
using namespace std;


struct Node {
    int data;
    Node *next;
};


Node *first = NULL;

void NodeAwal() {
    Node *node1 = new Node();
    Node *node2 = new Node();
    Node *node3 = new Node();

    node1->data = 10;
    node1->next = node2;

    node2->data = 20;
    node2->next = node3;

    node3->data = 30;
    node3->next = NULL;

    first = node1;
}



void display() {
    Node *temp = first;

    cout << "Isi Linked List: "<<endl;
    while (temp != NULL) {
        cout << temp->data;
        temp = temp->next;
        cout << endl;
    }
    
}
void addBeginning(int value) {
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = first; 
    first = newNode; 
}



int main() {

    NodeAwal();

    cout << "Linked List Awal:\n";
    display();

    cout << "\nMenambahkan node baru di awal linked list...\n";

    addBeginning(5); 
    cout << "\nLinked list Sekarang:\n";
    display();

    return 0;
}