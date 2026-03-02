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

//LETAK FUNGSI SESUAI TUGAS Masing-masing disini

int main() {

    NodeAwal();

    cout << "Linked List Awal:\n";
    display();


    return 0;
}