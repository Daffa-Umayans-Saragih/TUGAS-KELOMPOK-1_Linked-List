#include <iostream>
using namespace std;

// =====================
// Struktur Node
// =====================
struct Node {
    int data;
    Node *next;
};

// Pointer head (awal linked list)
Node *first = NULL;



// =====================
// Inisialisasi 3 Node Awal
// =====================
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

// =====================
// Fungsi untuk menampilkan isi linked list
// =====================

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
    newNode->next = first; // New node points to the current first node
    first = newNode; // Update first to point to the new node
}

//LETAK FUNGSI SESUAI TUGAS Masing-masing disini

int main() {

    NodeAwal();

    cout << "Linked List Awal:\n";
    display();

    cout << "\nMenambahkan node baru di awal linked list...\n";

    addBeginning(5); // Menambahkan node baru dengan nilai 5 di awal linked list
    cout << "\nLinked list Sekarang:\n";
    display();

    return 0;
}