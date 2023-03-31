#include <cstdio>
#include <iostream>

using namespace std;

template <class T>
class Stack{
private:
    int _size;
    int _head;
    T* _data;
public:
    Stack(int size){
        _size = size;
        _head = -1;
        _data = new T[size];
    }
    void push(T data){
        if (_head == _size - 1)
        {  
            cout << "Stack full" << endl;
            return;
        }
        _data[++_head] = data;
    }
    T& head(){
        if (_head == -1)
            throw exception();
        return _data[_head];
    }
    T& pop(){
        if (_head == -1)
            throw exception();
        _head--;
        return _data[_head];
    }

    bool empty(){
        return _head == -1;
    }

    void print(){
        for (int i = 0; i <= _head; i++){
            cout << &_data[i] << " ";
        }
        cout << endl;
    }
};

class Data{
public:
    int x;
    double y;
    Data(){
        x = 0;
        y = 0;
    }
    Data(int x_value, double y_value): x(x_value), y(y_value){}
    Data(const Data& obj){
        x = obj.x;
        y = obj.y;
    }
};

int main(){

    Stack<Data*> s(10);
    s.push(new Data(1, 2.0));
    s.push(new Data(2, 19.0));

    Data* d = s.pop();
    delete d;
    s.push(new Data(10, 20.0));
    s.print();

    return 0;
}