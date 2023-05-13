#include <cstdio>
#include <iostream>

#include <stack>

using namespace std;

template <class T>
class Queue{


public:
    stack<T> s1;
    stack<T> s2;

    Queue(){
       
    }

    ~Queue(){
        
    }

    void enqueue(T data){
        s1.push(data);
    }

    void dequeue(){
        
        if(s1.empty() && s2.empty()){
            cout << "Queue is empty" << endl;
            return;
        }
        
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }

        T data = s2.top();
        s2.pop();
    }
};

int main(){
    Queue<int> q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);

    q.dequeue();
    q.dequeue();
    q.dequeue();

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);

    cout << q.s1.size() << endl;
    cout << q.s2.size() << endl;
    
}
