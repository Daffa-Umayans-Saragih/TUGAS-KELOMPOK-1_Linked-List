#include <iostream>
using namespace std;

// =====================
// Struktur Node
// =====================
struct Node {
    int data;
    Node* next;
};

// Pointer head (awal linked list)
Node* head = NULL;

// =====================
// Fungsi untuk menampilkan isi linked list
// =====================
void display() {
    Node* temp = head;

    cout << "Isi Linked List: "<<endl;
    while (temp != NULL) {
        cout << temp->data;
        temp = temp->next;
        cout << endl;
    }
    
}

// =====================
// Inisialisasi 3 Node Awal
// =====================
void createInitialNodes() {
    Node* node1 = new Node();
    Node* node2 = new Node();
    Node* node3 = new Node();

    node1->data = 10;
    node2->data = 20;
    node3->data = 30;

    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    head = node1;
}


int main() {

    createInitialNodes();

    cout << "Linked List Awal:\n";
    display();


    cout << "\nSetelah Operasi:\n";
    display();

    return 0;
}