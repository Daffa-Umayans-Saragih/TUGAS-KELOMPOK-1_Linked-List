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

void deleteFirstNode() {

    if (first == NULL) {
        cout << "Linked List kosong, tidak ada yang bisa dihapus.\n";
        return;
    }

    Node *temp = first;

    first = first->next;

    delete temp;

    cout << "Node pertama berhasil dihapus.\n";
}

int main() {

    NodeAwal();

    cout << "Linked List Awal:\n";
    display();

    char pilihan;

    do {
        deleteFirstNode();
        display();

        cout << "Hapus lagi? (Y/N): ";
        cin >> pilihan;

    } while (pilihan == 'Y' || pilihan == 'y');
    
    return 0;
}