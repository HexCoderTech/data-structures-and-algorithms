#include <cstdio>
#include <iostream>

using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(){
        this->data = 0;
        this->next = nullptr;
    }

    Node(int data, Node* next){
        this->data = data;
        this->next = next;
    }

};

int main(){

    Node* n1 = new Node();
    Node* n2 = new Node(1, n1);
    Node* n3 = new Node(2, n2);
    Node* n4 = new Node(3, n3);
    Node* n5 = new Node(4, n4);

    Node* pointer = n3;

    while(pointer != nullptr){
        cout << pointer->data << endl;
        pointer = pointer->next;
    }

    return 0;
}