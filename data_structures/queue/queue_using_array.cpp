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
        if (start == -1 &&  rear == -1){
            start = rear = 0;
        }else if(start > 0 && rear == size-1){
            rear = 0;
        }else if ((rear >= start && rear < size-1) || (rear < start && rear < start - 1)){
            rear++;
        }else{
            cout << "Queue is already full!" << endl;
            return;
        }
        array[rear] = data;
    }

    T dequeue(){
        T tmpValue = array[start];
        int tmpIndex = start;
        if (start == -1 &&  rear == -1){
            cout << "Queue is alread empty!" << endl;
            return T();
        } else if (start > rear && start == size-1){
            start = 0;
        }else if (start == rear && start != -1){
            start = rear = -1;
        }else{
            start++;
        }
        array[tmpIndex] = T();
        return tmp;
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
