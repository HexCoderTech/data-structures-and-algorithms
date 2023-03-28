#include <cstdio>
#include <iostream>

using namespace std;

template <class T>
class Node{
public:
    T data;
    Node* next;

    Node(){
        this->data = nullptr;
        this->next = nullptr;
    }

    Node(T data, Node* next){
        this->data = data;
        this->next = next;
    }

};


template <class T>
class LinkedList{
public:
    Node<T>* start;
    Node<T>* end;
    int count;

    LinkedList(){
        start = nullptr;
        end = nullptr;
        count = 0;
    }

    void insert(T data){
        Node<T>* x = new Node<T>(data, nullptr);
        if (start == nullptr && end == nullptr){
            start = x;
            end = start;
        }else{
            end->next = x;
            end = x;
        }
        count++;
    }

    void remove(int index){

        if (index < 0){
            cout << "negative index" << endl;
            return;
        }

        int i = 0;
        Node<T>* p = start;
        Node<T>* prev = nullptr;
        while(p != nullptr && i != index){
            // cout << "X " << p->data << endl;
            prev = p;
            p = p->next;
            i++;
            // cout << "Y " << p->data << endl;
        }

        // cout << "Found: " << prev << endl;
        // if (prev != nullptr){
        //     cout << prev->data << endl;
        // }

        if (p == nullptr){
            cout << "end of list" << endl;
            return;
        }

        Node<T>* temp = prev->next;
        prev->next = temp->next;
        temp->next = nullptr;
        delete temp;
        count--;

    }

    bool search(T data){
        Node<T>* p = start;
        while(p != nullptr){
            if (data == p->data){
                return true;
            }
            p = p->next;
        }

        return false;
        
    }

    void print(){
        Node<T>* p = start;
        while(p != nullptr){
            cout << p->data << " -->";
            p = p->next;
        }

        cout << endl;
    }

};

int main(){

    LinkedList<int> list;

    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.insert(50);

    list.print();
    cout << list.count << endl;
    list.remove(2);

    // list.print();

    cout << list.count << endl;

    cout << list.search(100) << endl;

    return 0;
}