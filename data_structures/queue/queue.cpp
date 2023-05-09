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
class Queue{
public:
    Node<T>* start;
    Node<T>* end;
    int count;

    Queue(){
        start = nullptr;
        end = nullptr;
        count = 0;
    }

    void enqueue(T data){
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

    void dequeue(){
        if (start == nullptr){
            cout << "Queue is alredy empty!" << endl;
            return;
        }
        Node<T>* temp = start;
        start = start->next;

        delete temp;
    }

    T peek(){
        if(start != nullptr)
            return start->data;
        else
            throw exception();
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

    Queue<int> q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    cout << "Peek " << q.peek() << endl;

    q.print();
    q.dequeue();
    q.dequeue();

    cout << "Peek " << q.peek() << endl;

    q.dequeue();
    q.dequeue();
    q.dequeue();

    cout << "Peek " << q.peek() << endl;

    q.dequeue();
    q.print();

    return 0;
}