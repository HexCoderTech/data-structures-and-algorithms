#include <cstdio>
#include <iostream>

using namespace std;

template <class T>
class Queue{


public:
    int start;
    int rear;
    int size;
    T* array;

    Queue(int size){
        if (size <= 0)
            throw exception();
        this->size = size;
        start = rear = -1;
        array = new T[size];
    }

    ~Queue(){
        delete array;
    }

    void enqueue(T data){
        if(start == -1 && rear == -1){
            // queue is currently empty.
            start = rear = 0;
            array[rear] = data;
        
        }
        else if (rear < size - 1){
            if (rear + 1 != start){
                rear++;
                array[rear] = data;
            }
            else{
                cout << "Queue already full" << endl;
                return;
            }
        }
        else if (rear == size - 1){
            if (start != 0){
                rear = 0;
                array[rear] = data;
                return;
            }
            else{
                cout << "Queue already full" << endl;
            }
        }
        else{
            cout << "Unexpected scenario" << endl;
        }
    }

    void dequeue(){
        if(start == -1 && rear == -1){
            cout << "Queue is empty" << endl;
            return;
        }
        else if (start == size - 1){
            if (start != rear){
                array[start] = -1;
                start = 0;
            }
        }
        else if (start == rear){
            array[start] = -1;
            start = rear = -1;
        }
        
        else{
            array[start] = -1;
            start++;
        }
    }

    T peek(){
        return array[start];
    }

    void print(){
        if (start == -1 && rear == -1)
            return;
        for (int i = 0; i < size; i++){
            cout << array[i] << " ";
        }
       cout << endl;
    }

};

int main(){

    Queue<int> q(10);

    {
        q.enqueue(10);
        q.enqueue(20);
        q.enqueue(30);
        q.enqueue(40);
        q.enqueue(50);
        q.enqueue(60);
        q.enqueue(70);
        q.enqueue(80);
        q.enqueue(90);
        q.enqueue(100);
    }

    q.print();
    {
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    }

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    q.print();

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();

    q.print();
    cout << q.start << " " << q.rear << endl;
    q.dequeue();

    q.print();
    cout << q.start << " " << q.rear << endl;
}