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

int main(){

    string str = "";
    Stack<char> s(10);
    bool unbalanced = false;
    for (int i=0; i < str.length(); i++){
        char c = str[i];
        
        if (c == '(' || c == '{' || c == '['){
            s.push(c);
        }
        else if (c == ')' || c == '}' || c == ']'){
            if (s.empty()){
                cout << "unbalanced" << endl;
                unbalanced = true;
                break;
            }
            char h = s.head();
            if (
                (c == ')' && h == '(') || 
                (c == '}' && h == '{') || 
                (c == ']' && h == '[')
            ){
                s.pop();               
            }
            else{
                cout << "unbalanced" << endl;
                break;
            }
        }
    }
    
    if (!unbalanced && s.empty()){
        cout << "balanced" << endl;
    }
    

    return 0;
}